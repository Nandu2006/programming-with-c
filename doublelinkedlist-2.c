#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *first = NULL;
struct node *last = NULL;
int count = 0, i;

void create();
void DisplayBackward();
void DisplayForward();
void insert();
void deletenode();

int main() {
    int ch;
    while (1) {
        printf("\n1. create\n2. DisplayForward\n3. DisplayBackward\n4. insert\n5. deletenode\n6. exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                create();
                break;
            case 2:
                DisplayForward();
                break;
            case 3:
                DisplayBackward();
                break;
            case 4:
                insert();
                break;
            case 5:
                deletenode();
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}

void create() {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    newnode->prev = NULL;
    if (first == NULL) {
        first = last = newnode;
    } else {
        last->next = newnode;
        newnode->prev = last;
        last = newnode;
    }
    count++;
}

void DisplayForward() {
    if (first == NULL) {
        printf("List is empty\n");
        return;
    }
    struct node *temp = first;
    printf("Forward linked list: ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void DisplayBackward() {
    if (last == NULL) {
        printf("List is empty!\n");
        return;
    }
    struct node *temp = last;
    printf("Backward linked list: ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
}

void insert() {
    int pos, x;
    printf("Enter position to insert (1-%d): ", count + 1);
    scanf("%d", &pos);
    printf("Enter data: ");
    scanf("%d", &x);

    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    newnode->data = x;
    newnode->next = NULL;
    newnode->prev = NULL;

    if (pos < 1 || pos > count + 1) {
        printf("Invalid position!\n");
        free(newnode);
        return;
    }

    if (pos == 1) { // Inserting at the beginning
        newnode->next = first;
        if (first != NULL) {
            first->prev = newnode;
        }
        first = newnode;
        if (last == NULL) {
            last = newnode;
        }
    } else if (pos == count + 1) { // Inserting at the end
        last->next = newnode;
        newnode->prev = last;
        last = newnode;
    } else { // Inserting in the middle
        struct node *temp = first;
        for (i = 1; i < pos - 1; i++) {
            temp = temp->next;
        }
        newnode->next = temp->next;
        newnode->prev = temp;
        if (temp->next != NULL) {
            temp->next->prev = newnode;
        }
        temp->next = newnode;
    }
    count++;
}

void deletenode() {
    int pos;
    printf("Enter position to delete (1-%d): ", count);
    scanf("%d", &pos);

    if (pos < 1 || pos > count) {
        printf("Invalid position!\n");
        return;
    }

    struct node *temp = first;
    if (pos == 1) { // Deleting the first node
        first = first->next;
        if (first != NULL) {
            first->prev = NULL;
        }
        if (first == NULL) { // If the list becomes empty
            last = NULL;
        }
        free(temp);
    } else if (pos == count) { // Deleting the last node
        temp = last;
        last = last->prev;
        if (last != NULL) {
            last->next = NULL;
        }
        free(temp);
    } else { // Deleting a node in the middle
        for (i = 1; i < pos; i++) {
            temp = temp->next;
        }
        temp->prev->next = temp->next;
        if (temp->next != NULL) {
            temp->next->prev = temp->prev;
        }
        free(temp);
    }
    count--;
}

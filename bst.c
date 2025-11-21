#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *left;
	int data;
	struct node *right
};
typedef struct node NODE;
NODE *root = NULL;

void create(int);
void insert(NODE*,NODE*);
NODE* delete_node(NODE*,int);
int search(NODE*,int);
void traverse(NODE*);
NODE* find_max(NODE*);

void create(int value)
{
	NODE *newnode = (NODE *)malloc(sizeof(NODE));
	if(newnode==NULL)
	{
		printf("memory not allocated\n");
	}
	newnode->data=value;
	newnode->left=newnode->right=NULL;
	
	if(root==NULL)
	{
		root=newnode;
	}
	else
	{
		insert(root,newnode);
	}
}
void insert(NODE *root,NODE *newnode)
{
	if(newnode->data<root->data)
	{
		if(root->left==NULL)
		root->right=newnode;
	
	else
	insert(root->left,newnode);
   }
   else
   {
   	if(root->right==NULL)
   	   root->right=newnode;
   	
   	else
   	    insert(root->right,newnode);
   }
}

int search(NODE* root,int key)
{
	if(root==NULL)
	   return 0;
	
	if(root->data==key)
	   return 1;
	   
	if(key<root->data)
	   return search(root->left,key);
	
	else
	   return search(root->right,key);
	   
}
NODE* find_max(NODE* root)
{
	if(root==NULL)
	   return NULL;
	while(root->right!=NULL)
	   root = root->right;
	return root;
}

NODE* delete_node(NODE *root,int value)
{
	NODE *temp;
	if(root==NULL)
	   return NULL;
	   
	if(value<root->data)
	{
		root->left=delete_node(root->left,value);
		
	} 
	else if(value<root->data)
	   root->right=delete_node(root->right,value);
	else
	{
		if(root->left==NULL && root->right==NULL)
		{
			free(root);
			return NULL;
		}
		else if(root->left==NULL)
		{
			temp=root;
			root=root->right;
			free(temp);
		}
		else if(root->right==NULL)
		{
			temp=root;
			root=root->left;
			free(temp);
		}
		else
		{
			temp=find_max(root->left);
			root->data=temp->data;
			root->left=delete_node(root->left,temp->data);
			
		}
	}
	return root;
}

void traverse(NODE *root)
{
	if(root!=NULL)
	{
		traverse(root->left);
		printf("%d\t",root->data);
		traverse(root->right);
	}
}
int main()
{
	int ch,value;
	do
	{
		printf("\n---Binary Search Tree Menu---\n");
          printf("1. Insert\n2. Traverse (In-Order)\n3. Delete\n4. Search\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) 
		{
            case 1:
                printf("Enter element to insert: ");
                scanf("%d", &value);
                create(value);
                break;
            case 2:
                if (root == NULL)
                    printf("Tree is empty\n");
                else 
				{
                    printf("In-Order Traversal: ");
                    traverse(root);
                    printf("\n");
                }
                break;
            case 3:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                if (search(root, value))
				{
                    root = delete_node(root, value);
                    printf("Value %d deleted from the tree.\n", value);
                } 
				else 
				{
                    printf("Value %d not found in the tree.\n", value);
                }
                break;
            case 4:
                printf("Enter value to search: ");
                scanf("%d", &value);
                if (search(root, value))
                    printf("Value %d found in the tree.\n", value);
                else
                    printf("Value %d not found in the tree.\n", value);
                break;
            case 5:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    } 
	while (1);

    return 0;
}

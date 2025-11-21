#include<stdio.h>
#include<stdlib.h>
#define size 5
void enq();
void deq();
void display();
int cqueue[size];
int front=0,rear=0,ele,count=0;
int main()
{
	int ch;
	while(1)
     	{
        printf("\nQueue Operations\n");
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch) 
		{
            case 1: enq(); break;
            case 2: deq(); break;
            case 3: display(); break;
            case 4: exit(0);
            default: printf("Invalid choice\n");
        }
    }
    return 0;
}
void enq()
{
	if(count == size)
	{
		printf("Queue is Full\n");
	}
	else
	{
		printf("Enter the Element into the queue:");
		scanf("%d",&ele);
		cqueue[rear]=ele;
		rear++;
		if(rear>size-1)
		    rear=0;
		count++;
	}
}
void deq()
{
	if(count==0)
	{
		printf("Queue is empty!\n");
	}
	else
	{
		int ele = cqueue[front];
		front++;
		if(front > 4)
		   front=0;
		count--;
		printf("Deleted element is %d\n",ele);
	}
}
void display()
{
	if(count == 0)
	{
		printf("Queue is empty\n");
	}
	else
	{
		int i,temp=front;
		printf("Queue elements are: ");
		for(i=0;i<count;i++)
		{
			printf("%d ",cqueue[temp]);
			temp++;
			if(temp > 4) temp = 0;
		}
		printf("\n");
	}
}

#include<stdio.h>
#define max 6
int queue[max];
int front=-1;
int rear=-1;
void enqueue(int element)
{
    if(front==-1&&rear==-1)
    {
        front=0;
        rear=0;
        queue[rear]=element;
    }
    else if((rear+1)%max==front)
    {
        printf("Queue is overflow..");
    }
    else
    {
        rear=(rear+1)%max;
        queue[rear]=element;
    }
}
int dequeue()
{
    if((front==-1)&&(rear==-1))
    {
        printf("\nQueue is underflow");
    }
    else if(front==rear)
    {
        printf("\nThe dequed element is %d",queue[front]);
        front=-1;
        rear=-1;
    }
    else
    {
        printf("\nThe dequeued element is %d",queue[front]);
        front=(front+1)%max;
    }
}
void display()
{
    int i=front;
    if(front==-1&&rear==-1)
    {
        printf("\n Queue is empty");
    }
    else
    {
        printf("\n elements in queue are:");
        while(i<=rear)
        {
            printf("%d\t",queue[i]);
            i=(i+1)%max;
        }
    }
}
int main()
{
    int choice=1,x;
    while(choice<4&&choice!=0)
    {
        printf("\nEnter your choice:\n");
        printf("\npress1:Insert an element");
        printf("\npress2:Delete an element");
        printf("\npress3:Display the element\npress4.exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("Enter the element which is inserted");
            scanf("%d",&x);
            enqueue(x);
            break;
            case 2:
            dequeue();
            break;
            case 3: 
            display();
            break;
            case 4: 
            break;
        }
    }
    return 0;
}
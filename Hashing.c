#include<stdio.h>
void insert();
void display();
void search();
int array[10];
int total;
void main()
{
    int i;
    printf("Enter total number of elements you want insert\n");
    scanf("%d",&total);
    for(i=0;i<10;i++)
    {
        array[i]=0;
    }    
    insert();
    display();
    search();
}
void insert()
{
    int i;
    int index;
    int element;
    for(i=0;i<total;i++)
    { 
        printf("\nEnter elements to be insert:");
        scanf("%d",&element);
        index=element%10;
        while(array[index]!=0)
        {
                index=(index+1)%10;
        }
        array[index]=element;
    }
}
void display()
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("\n%d",array[i]);
    }
}
void search()
{
    int temp,index;
    int found=0;
    printf("\nEnter the elements you want to search\n");
    scanf("%d",&temp);
    index=temp%10;
    while(array[index]!=0)
    {
        if(array[index]==temp)
        {
            printf("\nelement is present");
            found=1;
            break;
        }
        else
        {
            index=(index+1)%10;
        }
    }
    if(found==0)
    {
        printf("element not present");
    }
}
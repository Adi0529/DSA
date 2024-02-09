#include<stdio.h>
struct node
{
 int data;
 struct node *left,*right;
}
void main()
{
 struct node*root;1
 root=create();
}
struct node*root()
{ 
 struct node*temp;
 int data,choice;
 temp=(struct node*)malloc(sizeof(struct node));
 printf("Press 0 to exit");
 printf("\n Press 1 for new code");
 printf("enter your choice");
 scanf("%d",&choice);
 if (choice==0)
 {
  return 0;
 }
 else
 {
  printf("Enter the number");
  scanf("%d",&data);
  temp->data=data;
  printf("Enter the right child of %d",data);
  temp->right=create();
  return temp;
 }

}



    
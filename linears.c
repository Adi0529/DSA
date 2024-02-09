#include<stdio.h>
int linearsearch(int a[],int n,int val)
{
 for(int i=0;i<n;i++)
 {
  if(a[i]==val)
  {
   return i+1;
  }
 }
 return -1;
}
int main()
{
 int a[]={70,40,30,11,57,41,25,14,52};
 int val;
 int n=sizeof(a)/sizeof(a[0]);
 printf("The elements of arrays are:");
 for(int i=0;i<n;i++)
 {
  printf("%d/t",a[i]);
 }
 printf("Enter value to be search:");
 scanf("%d",& val);
 int res=linearsearch(a,n,val);
 printf("\n Elements to be searched:%d",val);
 if(res==-1)
 {
  printf("\n Elements is not present in array");
 }
 else
 {
  printf("\n Element is present at %d position of array",res);
  return 0;
 }
}

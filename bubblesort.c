#include<stdio.h>
void bubblesort(int a[],int size)
{
 for(int pass=0;pass<size-1;++pass)
 {
  for(int i=0;i<size-pass-1;++i)
  {
   if(a[i]>a[i+1])
   {
    int temp=a[i];
    a[i]=a[i+1];
    a[i+1]=temp;
   }
  }
 }
}
void printarray(int a[],int size)
{
 for(int i=0;i<size;++i)
 {
  printf("%d",a[i]);
  printf("\t");
 }
}
int main()
{
 int a[]={-2,45,0,11,-9};
 int size=sizeof(a) / sizeof(a[0]);
 bubblesort(a,size);
 printf("Sorted Array in ascending order:\n");
 printarray(a,size);
}
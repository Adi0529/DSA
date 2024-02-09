#include<stdio.h>
int partition(int a[],int start,int end)
{
    int pivot=a[end];
    int i=(start-1);
    for(int j=start; j<=end-1; j++)
    {
        if(a[j]<pivot)
        {
            i++;
            int t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }

    int t=a[i+1];
    a[i+1]=a[end];
    a[end]=t;
    return (i+1);
}
void quick(int a[],int start,int end)
{
    if(start<end)
    {
        int p=partition(a,start,end);
        quick(a,start,p-1);
        quick(a,p+1,end);
    }
}
void printarr(int a[],int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
}
int main()
{
    int a[]= {24,9,29,14,19,27,};
    int n=sizeof(a)/sizeof(a[0]);
    printf("Before sorting arra eements are-\n");
    printarr(a,n);
    quick(a,0,n-1);
    printf("\n After sorting array elements are-\n");
    printarr(a,n);
    return 0;
}
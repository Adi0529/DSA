#include<stdio.h>
void merge(int a[],int beg,int mid,int end)
{
    int i,j,k;
    int n1=mid-beg+1;
    int n2=end-mid;
    int leftarray[n1],rightarray[n2];
    for(int i=0;i<n1;i++)
    {
        rightarray[j]=a[mid+1+j];
    }
    i=0;
    j=0;
    k=beg;
    while(i<n1 && j<n2)
    {
        if(leftarray[i]<=rightarray[j])
        {
            a[k]=leftarray[i];
            i++;
        }
        else
        {
            a[k]=rightarray[i];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k]=leftarray[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=rightarray[j];
        j++;
        k++;
    } 
}
void mergesort(int a[],int beg,int end)
{
    if(beg<end)
    {
        int mid=(beg+end)/2;
        mergesort(a,beg,mid);
        mergesort(a,mid+1,end);
        merge(a,beg,mid,end);
    }
}
void printarray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}
int main()
{
    int a[]={12,31,25,8,32,17,40,42};
    int n=sizeof(a)/sizeof(a[0]);
    printf("Before sorting array eements are-\n");
    printarray(a,n);
    mergesort(a,0,n-1);
    printf("after sorting array elements are-\n");
    printarray(a,n);
    return 0;
}
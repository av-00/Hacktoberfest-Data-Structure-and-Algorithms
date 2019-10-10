#include<iostream>
using namespace std;

void swapp(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void bubbleSort(int a[], int n)
{
    if(n==1)
    {
        return;
    }
    int i;
    for(i=0; i<n-1; i++)
    {
        if(a[i]>a[i+1])
        {
            swapp(&a[i], &a[i+1]);
        }
    }
    bubbleSort(a, n-1);
}

void printarr(int a[], int n)
{
    for(int i=0; i<n;i++)
    {
        cout<<"     "<<a[i];
    }
}

int main()
{
    int a[]={4,6,5,3,2,7,8};
    int n= sizeof(a)/sizeof(a[0]);
    
    cout<<"array elements \n";
    printarr(a, n);
    bubbleSort(a, n);
    cout<<"\nsorted array\n";
    printarr(a,n );
    return 0;
}

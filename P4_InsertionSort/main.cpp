//Author : Aditya Pranav Bhuvanapalli

#include <iostream>
using namespace std;

void insertionSort(int a[],int n)
{
    int i,j,v;
    for(i=1;i<n;i++)
    {
        v=a[i];
        j=i-1;
        while(j>=0 && a[j]>v)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=v;
    }
}

void display(int a[],int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

int main()
{
    int n;
    cout<<"N = "; cin>>n;
    int a[n];
    cout<<"Enter the array : "<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Before Sorting : ";
    display(a,n);
    insertionSort(a,n);
    cout<<"After Sorting  : ";
    display(a,n);

    return 0;
}

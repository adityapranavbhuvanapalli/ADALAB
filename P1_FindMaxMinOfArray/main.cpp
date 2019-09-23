#include <iostream>
using namespace std;

void fnMaxMin(int a[], int l, int r, int *max, int *min)
{
    int mid,max1,max2,min1,min2;
    if(r-l==0)
        *max=*min=a[l];
    else if(r-l==1)
    {
        *max = (a[l]>a[r]) ? a[l] : a[r];
        *min = (a[l]<a[r]) ? a[l] : a[r];
    }
    else if(l<r)
    {
        mid=(l+r)/2;
        fnMaxMin(a,l,mid,&max1,&min1);
        fnMaxMin(a,mid+1,r,&max2,&min2);
        *max = (max1>max2) ? max1 : max2;
        *min = (min1<min2) ? min1 : min2;
    }
}

int main()
{
    int n,max,min;
    cout<<"N = ";cin>>n;
    int a[n];
    cout<<"Enter array elements :"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    fnMaxMin(a,0,n-1,&max,&min);
    cout<<"Max : "<< max<<endl;
    cout<<"Min : "<< min<<endl;
    return 0;
}

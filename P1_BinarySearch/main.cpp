#include <iostream>
using namespace std;

int binarySearch(int a[], int key, int l, int r)
{
    int mid;
    if (l>r) return -1;
    mid=(l+r)/2;
    if (a[mid]==key)
        return mid;
    else if (key<a[mid])
        return binarySearch(a,key,l,mid-1);
    else
        return binarySearch(a,key,mid+1,r);

}

int main()
{
    int n,key,res;
    cout<<"N = "; cin>>n;
    int a[n];
    cout<< "Enter a sorted array" <<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<< "Enter key : "; cin>>key;
    if((res=binarySearch(a,key,0,n-1))!=-1)
        cout<<"Position of "<<key<<" : "<<res<<endl;
    else
        cout<<key<<" does not exist."<<endl;

    return 0;
}

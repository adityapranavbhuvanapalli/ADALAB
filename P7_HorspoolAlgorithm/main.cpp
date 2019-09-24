#include <iostream>
using namespace std;

int shiftTable[256];

void shiftTableFn(string pat)
{
    int m=pat.length();
    for(int i=0;i<256;i++)
        shiftTable[i]=m;
    for(int i=0;i<pat.length();i++)
        shiftTable[pat[i]]=m-i-1;
}

int horspool(string text, string pattern)
{
    int m=pattern.length(),n=text.length();
    int i,k;
    shiftTableFn(pattern);

    i=m-1;
    while(i<n)
    {
        k=0;
        while( k<m && pattern[m-1-k]==text[i-k] )
            k++;
        if(k==m)
            return i-m+1;
        else
            i+=shiftTable[text[i]];
    }

    return -1;
}

int main()
{
    int res;
    string pattern,text;
    cout<<"Enter the text    : "; cin>>text;
    cout<<"Enter the pattern : "; cin>>pattern;
    if((res=horspool(text,pattern))!=-1)
        cout<<pattern<<" found at the position "<<res<<"."<<endl;
    else
        cout<<pattern<<" is not found."<<endl;

}

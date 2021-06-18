#include<bits/stdc++.h>
using namespace std;
//program to find smallest positive number missing from the array

int main()
{
    int n,ans=-1;
    const int bn=1e6+2;
    cin>>n;
    int arra[n];
    for(int a=0;a<n;a++)
        cin>>arra[a];
    bool check[bn];
    for(int i=0;i<bn;i++)
        check[i]=false;
    for(int k=0;k<n;k++)
    {
        if(arra[k]>=0)
            check[arra[k]]=true;
    }
    for(int l=1;l<bn;l++)
        if(check[l]==false)
    {
        ans=l;
         break;
    }
    cout<<ans<<endl;
}

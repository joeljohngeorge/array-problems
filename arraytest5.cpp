#include<bits/stdc++.h>
using namespace std;
//program to return index number of first repeating element

int main()
{
    int n;
    const int N=1e6+2;
    cin>>n;
    vector<int>arr(n);
    vector<int>idx(N);
    for(int a=0;a<n;a++)
        cin>>arr[a];

    for(int i=0;i<N;i++)
        idx[i]=-1;
    int minidx=INT_MAX;
    for(int j=0;j<n;j++)
    {
        if(idx[arr[j]]!=-1)
         minidx=min(minidx,idx[arr[j]]);
        else
            idx[arr[j]]=j;
            }
    if(minidx==INT_MAX)
        cout<<"-1"<<endl;
    else
        cout<<minidx+1<<endl;

}

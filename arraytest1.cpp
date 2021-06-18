#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mx;
    int n;
    cin>>n;
   vector<int>ar(n);  //vector array assigning
    for(int i=0;i<n;i++)
        cin>>ar[i];
    mx=ar[0];
    for(int k=0;k<n;k++)
    {mx=max(mx,ar[k]);
    cout<<mx<<endl;}

}

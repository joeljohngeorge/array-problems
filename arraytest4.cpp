#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>a(n+1);
    a[n]=-1;
    for(int i=0;i<n;i++)
        cin>>a[i];
    if(n==1)
    {
        cout<<"1"<<endl;
        return 0;
    }
    int ans=0,mx=-1;
    for(int j=0;j<n;j++)
    {
        if(a[j]>mx && a[j]>a[j+1])  //if current element is greater than maximum of previous elements and following element
            ans++;

    mx=max(mx,a[j]);}
    cout<<ans<<endl;
}

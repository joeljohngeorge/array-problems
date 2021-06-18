#include<bits/stdc++.h>
using namespace std;

/*program to find longest arithmetic sub-array
Arithmetic array is an array that contains atleast 2 integers and difference between consecutive integers are equal*/
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];

    int diff=a[1]-a[0];
  int j=2,curr=2,ans=2;
    while(j<n)
    {
        if(diff==a[j]-a[j-1]) //if intitial difference is same between array elements
            curr++;
        else
        {
            diff=a[j]-a[j-1];
            curr=2;
        }
    ans=max(ans,curr);
    j++;}

cout<<ans<<endl;
}

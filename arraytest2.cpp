#include<bits/stdc++.h>
using namespace std;

//program to find sum of subarrays
int main()
{ int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++)
    cin>>arr[i];
int cur_ele=0;
for(int j=0;j<n;j++){
        cur_ele=0;
    for(int k=j;k<n;k++)
    {
        cur_ele+=arr[k];
        cout<<cur_ele<<endl;
    }
    cout<<endl;
}

return 0;
}

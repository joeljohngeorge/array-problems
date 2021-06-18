#include<bits/stdc++.h>
using namespace std;

//Maximum subarray sum using Kadane's Algorithm . Negative sum is converted to 0
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
      for(int i=0;i<n;i++)
        cin>>arr[i];
    int currentsum=0;
    int maxSum=INT_MIN;

    for(int i=0;i<n;i++)
    {
        currentsum+=arr[i];
        if(currentsum<0)
            currentsum=0;
        maxSum=max(currentsum,maxSum);
    }
    cout<<maxSum<<endl;
}

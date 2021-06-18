#include<bits/stdc++.h>
using namespace std;

//Maximum circular subarray sum
//Max subarray sum=total sum-sum of non contributing elements

int kadane(vector<int>arr,int n)
{
    int currsum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        currsum+=arr[i];
        if(currsum<0)
            currsum=0;
        maxsum=max(currsum,maxsum);
    }
    return maxsum;
}

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    vector<int>signrevarr(n);
      for(int i=0;i<n;i++)
        cin>>arr[i];

        int wrapsum,nonwrapsum;
        nonwrapsum=kadane(arr,n);

        int totalsum=0;
        for(int i=0;i<n;i++)
        {
            totalsum+=arr[i];
            signrevarr[i]=-arr[i];

        }
        wrapsum=totalsum+kadane(signrevarr,n);

        cout<<max(wrapsum,nonwrapsum)<<endl;

}

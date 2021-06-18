#include<bits/stdc++.h>
using namespace std;
/*program to find continuous subarray which adds to a given number and prints
 the start and end index of subarray as output*/
int main()
{
    int n,S;
    cin>>n>>S;
    vector<int>arr(n);
    for(int a=0;a<n;a++)
        cin>>arr[a];
    int i=0,j=0,start=-1,en=-1;
    int sum=0;
    while(j<n && sum+arr[j]<=S)
        {sum+=arr[j];
         j++;}
        if(sum==S)
         {
             cout<<i+1<<" "<<j<<endl;
             return 0;}
         while(j<n)
         {
             sum+=arr[j];
             while(sum>S)
             {
                 sum-=arr[i];
                 i++;
             }
             if(sum==S)
             {
                 start=i+1;
                 en=j+1;
                  break;
             }
             j++;
         }

    cout<<start<<" "<<en<<endl;
    return 0;
}

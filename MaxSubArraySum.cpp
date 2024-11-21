#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxSum=INT_MIN;
    for(int start=0;start<n;start++)
    {
        int CurrentSum=0;
        for(int end=start;end<n;end++)
        {
            CurrentSum+=arr[end];
            maxSum=max(maxSum,CurrentSum);
        }
    }
    cout<<"maximum of subarray sum is "<<maxSum<<endl;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=7;
    int arr[n]={1,4,9,-19,100,12,10};
    int CurrentSum=0;
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        CurrentSum+=arr[i];
        maxSum=max(maxSum,CurrentSum);
        if(CurrentSum<0)
        {
            CurrentSum=0;
        }
    }
    cout<<"maximum of subarray sum is "<<CurrentSum<<endl;
}
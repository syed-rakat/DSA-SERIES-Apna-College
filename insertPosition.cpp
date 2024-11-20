#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,3,5,7,8,9,10,12,13,17};
    int start=0;
    int end=9;
    int target=15;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]>target){
            end=mid-1;
        }
        else if(arr[mid]<target)
        {
            start=mid+1;
        }
        else{
            cout<<mid<<endl;
            return 0;
        }
    }
    cout<<end+1<<endl;
}
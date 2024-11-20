#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[],int target,int start,int end)
{
    while(start<=end)
    {
        int mid=(start+(end-start)/2);
        if(arr[mid]<target){
            start=mid+1;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else{
            cout<<mid<<endl;
            return 0;
        }
    }
    return -1;
}

int ans(int arr[],int target)
{   
    // first find the range
    int start=0;
    int end=1;
    // condition for the target to lie int the range
    while(target>arr[end])
    {      
        //    this is my new start
         int temp=end+1;
         end=(end-start+1)*2;
         start=temp;
    }
    
    return BinarySearch(arr,target,start,end);

}

int main()
{
    int arr[]={1,2,3,4,5,12,15,18,29,34,100,124,158};
    int target=15;
    ans(arr,target);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,3,5,6,7,8,12,15,17,20};
    int start=0;
    int end = (sizeof(arr) / sizeof(arr[0])) - 1; 
    int target=12;
    
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]>target){
            end=mid-1;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else{
            cout<<arr[mid];
            return 0;
            
        }
    }
    cout<<arr[start]<<endl;
    return 0;
    

}
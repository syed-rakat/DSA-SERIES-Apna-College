#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[]={'a','c','d','e','j','m','w'};
    int start=0;
    int end = (sizeof(arr) / sizeof(arr[0])) - 1; 
    char target='w';
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]>target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
         
    }
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    cout<<arr[start%arr_size]<<endl;
}
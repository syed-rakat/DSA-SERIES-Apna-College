#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int start=1;
    int end=n;
    int mid;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(mid*mid<n){
            start=mid+1;
        }
        else if(mid*mid>n){
            end=mid-1;
        }
        else{
            cout<<mid<<endl;
            return 0;
        }
        start++;
    }
    cout<<end<<endl;
    return 0;
}
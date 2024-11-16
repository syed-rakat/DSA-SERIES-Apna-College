#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    int sum=0;
    while(n!=0)
    {
        int digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    cout<<sum<<endl;
}
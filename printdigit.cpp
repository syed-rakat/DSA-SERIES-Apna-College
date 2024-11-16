#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    cin>>n;
    while(n!=0)
    {
       int digit =n%10;
        cout<<digit<<endl;
        n=n/10;
    }
}
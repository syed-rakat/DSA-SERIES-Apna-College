#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    cin>>n;
    long int revnum=0;
    while(n!=0)
    {
        int digit=n%10;
        revnum=revnum*10+digit;
        n=n/10;
    }
    cout<<revnum<<endl;
}
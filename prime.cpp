#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    cin>>n;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<"not prime";
            break;
        }
        else{
            cout<<"prime";
            break;
        }
    }
    
}
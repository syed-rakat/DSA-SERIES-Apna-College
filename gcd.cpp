#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a==0){
        cout<<"gcd="<<b<<endl;
        return 0;
    }
    if(b==0){
        cout<<"gcd="<<a<<endl;
        return 0;
    }
    int gcd=1;
    for(int i=1;i<=min(a,b);i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    cout<<"gcd="<<gcd<<endl;

}
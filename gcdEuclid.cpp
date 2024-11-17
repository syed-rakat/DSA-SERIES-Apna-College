#include<bits/stdc++.h>
using namespace std;


int gcd(int a,int b)
{
    while(a>0 && b>0)
    {
        if(a>b)
        {
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    if(a==0)
    {
        cout<<"gcd is="<<b<<endl;
    }
    if(b==0)
    {
        cout<<"gcd is="<<a<<endl;
    }
}
int main()
{
   gcd(100,20);
}
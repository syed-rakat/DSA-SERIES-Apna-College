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
        return b;
    }
    if(b==0)
    {
       return a;
    }
}

int lcm(int a,int b)
{
    int lcm=(a*b)/gcd(a,b);
    cout<<"lcm is="<<lcm<<endl;
}
int main()
{
   lcm(20,28);
}
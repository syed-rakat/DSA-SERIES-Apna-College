#include<bits/stdc++.h>
using namespace std;


long long int N_factorial(int n)
{
    int facto=1;
    for(int i=1;i<=n;i++)
    {
        facto=facto*i;
    }
    return facto;
}


int main()
{   
    long long int c=N_factorial(7);
    cout<<c<<endl;
    
}
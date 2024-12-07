#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=3;
    int n=5;
    long long int ans=1;
    int binaryForm=n;
    while(binaryForm>0)
    {
        if(binaryForm%2==1){
            ans=ans*x;
        }
        x=x*x;
        binaryForm=binaryForm/2;
        
        
    }
    cout<<ans<<endl;
    return 0;
}
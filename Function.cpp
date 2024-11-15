#include<bits/stdc++.h>
using namespace std;

//function definition
void print()
{
    cout<<"hello Rakat";
}
int multiplication(int a,int b)
{
    int mul=a*b;
    return mul;
}

int sum()
{
    int a=290;
    int b=30;
    int sum=a+b;
    return sum;
}

int SumOfSeries(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}

int main()
{  
   // function call or invoke
//    print();
//    cout<<endl;
//    int c=sum();
//    cout<<c<<endl;
//    cout<<multiplication(23,23)<<endl;
   cout<<"sum of n natural numbers :"<<SumOfSeries(10)<<endl;


}
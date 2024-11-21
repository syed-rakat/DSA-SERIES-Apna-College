#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,3,2,5,9,16,12,19};
    int target=12;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==target)
        {
            cout<<"target found at index:"<<i<<endl;
            return 0;
        }
    }
    cout<<"target is not found";
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,4,6,8,10,23};
    int start=0;
    int end=v.size()-1;
    int i;
    while(start<end)
    {
        swap(v[start],v[end]);
        start++;
        end--;
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
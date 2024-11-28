#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "abcabacjksah";
    string part = "ab";
    
    // Continue until "part" is no longer found in "s"
    while (s.length() > 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length()); // Erase the first occurrence of "part"
    }
    
    cout << s;  // Output the modified string
    return 0;
}

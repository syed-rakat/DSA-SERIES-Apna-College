#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "abcabc"; // Example 
    
    int start = 0;
    int end = s.size() - 1;
    
    while (start < end)
    {
        // Skip non-alphanumeric characters
        if (!isalnum(s[start]))
        {
            start++;
            continue;
        }
        if (!isalnum(s[end]))
        {
            end--;
            continue;
        }
        // Compare characters, ignoring case
        if (tolower(s[start]) != tolower(s[end]))
        {
            cout << "Not a valid palindrome string";
            return 0;
        }
        // Move pointers inward
        start++;
        end--;
    }
    cout << "Valid palindrome string";
    return 0;
}

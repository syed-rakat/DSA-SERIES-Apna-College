class Solution {
public:
    string removeOccurrences(string s, string part) {
        while (s.find(part) != string::npos) { // Check if 'part' exists in 's'
            s.erase(s.find(part), part.length()); // Remove the first occurrence of 'part'
        }
        return s;
    }
};

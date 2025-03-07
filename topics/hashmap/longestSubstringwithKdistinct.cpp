#include <iostream> 
#include <unordered_map>
using namespace std; 

int findLongestSubstring(string s, int k) { 
    unordered_map<char, int> counts; 
    int left = 0; 
    int ans = 0;  
    for (int right = 0; right < s.size(); right++) { 
        counts[s[right]]++; 
        if (counts.size() > k) { 
            counts[s[left]]--; 
            if (counts[s[left]] == 0) { 
                counts.erase(s[left]);
            }
            left++; 
        }
        ans = max(ans, right - left + 1); 
    }
    return ans; 
}

int main() { 
    string test = "eceba";
    cout << findLongestSubstring(test, 2) << endl; 
    return 0; 
}
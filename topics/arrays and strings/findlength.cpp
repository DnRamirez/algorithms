/*  Problem: You are given a binary string s (a string containing only "0" and "1"). You may choose up to one "0" and flip it to a "1". What is the length of the longest substring achievable that contains only "1"?
    Time complexity: O(n) (the pointers start at n away from each other.)
    Approach: Two pointers, compare for match. 
*/

#include <iostream> 
using namespace std; 

int findLength(string s) { 
    int left = 0; 
    int curr = 0; 
    int ans = 0; 

    for (int right = 0; right < s.length(); right++) { 
        if (s[right] == '0') { 
            curr += 1; 
        }

        while (curr > 1) { 
            if (s[left] == '0') { 
                curr -= 1; 
            }
            left += 1; 
        }
        ans = max(ans, right - left + 1); 
    }
    
    return ans; 
}; 

int main() { 
    string s = "1101100111"; 
    int length = findLength(s); 
    cout << "Length of longest substring that contains only '1's is: " << length << endl; 

    return 0; 
}
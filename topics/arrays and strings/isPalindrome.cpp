#include <iostream> 
using namespace std; 
 
/*  
    Approach: Two pointers, one at beginning of string and the other at the end.
    Complexity: O(n)
    Analysis: The pointers start at n away from each other. Each iteration brings them at least one step closer. 
              We will never have more than O(n) iterations for the while loop.
*/

bool isPalindrome(string s) { 
    int left = 0; 
    int right = s.length() - 1; 
    while (left < right) { 
        if (s[left] != s[right]) {
            return false; 
        }
        left++; 
        right--; 
    }
    return true; 
}

int main() { 
    string word = "racecar"; 
    if (isPalindrome(word)) { 
        cout << word << " is palindrome" << endl; 
    } else { 
        cout << word << " is not palindrome" << endl; 
    }
    return 0;
}
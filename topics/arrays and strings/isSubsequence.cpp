#include <iostream> 
using namespace std; 

bool isSubsequence(string s1, string s2) { 
    int i = 0; 
    int j = 0; 
    while (i < s1.length() && j < s2.length()) { 
        if (s1[i] == s2[j]) { 
            i++; 
            j++; 
        } else { 
            j++; 
        }
    }
    return i == s1.length(); 
}

int main() { 
    string s1 = "axc"; 
    string s2 = "ahbgdc"; 
    if (isSubsequence(s1, s2)) { 
        cout << s1 << " was found in " << s2 << endl; 
    } else { 
        cout << s1 << " was not found in " << s2 << endl; 
    }
    return 0; 
}
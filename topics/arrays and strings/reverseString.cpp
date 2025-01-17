#include <iostream> 
using namespace std; 

void reverseString(vector<char>&s) { 
    int i = 0; 
    int j = s.size() - 1; 
    while (i < j) { 
        char tmp = s[i]; 
        s[i] = s[j]; 
        s[j] = tmp; 
        i++; 
        j--; 
    }

}

int main() { 
    vector<char> word = {'h', 'e', 'l', 'l', 'o'};
    cout << "original word: "; 
    for (int i = 0; i < word.size(); i++) { 
        cout << word[i]; 
    }
    cout << endl; 
    reverseString(word); 
    cout << "reversed word: "; 
    for (int i = 0; i < word.size(); i++) { 
        cout << word[i]; 
    }
    return 0; 
}
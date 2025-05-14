#include <iostream> 
#include <unordered_map> 
#include <unordered_set>
using namespace std; 

bool isEqual(string s) { 
    unordered_map<char, int> counts; 
    for (int i = 0; i < s.size(); i++) { 
        counts[s[i]]++; 
    }

    unordered_set<int> frequencies; 
    for (auto it : counts) { 
        // will only insert distinct integers, which is what we want. 
        frequencies.insert(it.second);  
    }

    return frequencies.size() == 1; 

}

int main() { 
    string s = "abacbc"; 
    if (isEqual(s)) { 
        cout << "Elements have equal frequencies" << endl; 
    }

    return 0; 
}
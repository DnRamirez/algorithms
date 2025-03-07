/* Problem: Given an integer array arr, count how many elements x there are, such that x + 1 is also in arr. If there are duplicates in arr, count them separately.

*/
#include <iostream> 
#include <vector> 
#include <unordered_set> 
using namespace std;

int countElements(vector<int>& arr) {
    unordered_set<int> seen(arr.begin(), arr.end());  
    int count = 0; 
    
    for (int i = 0; i < arr.size(); i++) { 
    if (seen.find(arr[i] + 1) != seen.end()) { 
        count++; 
    }
    }
    return count; 
}

int main() { 
    vector<int> arr = {1, 2, 3}; 
    cout << countElements(arr) << endl; 
    return 0; 
}


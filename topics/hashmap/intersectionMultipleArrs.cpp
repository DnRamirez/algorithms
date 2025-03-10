#include <iostream> 
#include <vector> 
#include <algorithm> 
#include <unordered_map>
using namespace std; 

vector<int> sortedArr(vector<vector<int>> nums) { 
    unordered_map<int, int> elemFreq; 
    vector<int> ans; 
    int n = nums.size(); 
    for (vector<int> arr : nums) { 
        for (int x : arr) { 
            elemFreq[x]++; 
        }
    }

    for(auto i : elemFreq) { 
        if (i.second == n) {
            ans.push_back(i.first); 
        }
    }
    sort(ans.begin(), ans.end()); 
    return ans; 
    
}

int main() {
    
    vector<vector<int>> test = {{3,1,2,4,5},{1,2,3,4},{3,4,5,6}}; 

    vector<int> answer = sortedArr(test); 

    for (int i = 0; i < answer.size(); i++) { 
        cout << answer[i] << ", "; 
    }


    return 0; 
}
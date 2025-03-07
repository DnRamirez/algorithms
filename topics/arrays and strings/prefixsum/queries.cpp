// problem: Example 1: Given an integer array nums, an array queries where queries[i] = [x, y] and an integer limit, return a boolean array that represents the answer to each query. A query is true if the sum of the subarray from x to y is less than limit, or false otherwise.
#include <iostream> 
using namespace std; 

vector<bool> evalQueries(vector<int>& nums, vector<vector<int>>& queries, int limit) { 
    vector<int> prefixSum = {nums[0]}; // first element is nums[0]; 
    for (int i = 1; i < nums.size(); i++) { 
        prefixSum.push_back(prefixSum[i-1] + nums[i]); 
    }

    vector<bool> ans; 
    for (int i = 0; i < queries.size(); i++) {
        int x = queries[i][0];
        int y = queries[i][1];
        int curr = prefixSum[y] - prefixSum[x] + nums[x]; // handles x = 0 : 
        ans.push_back(curr < limit); 
    } 

    return ans; 
    
}

int main() { 
    vector<int> arr = {1, 6, 3, 2, 7, 2}; 
    int k = 13; 
    vector<vector<int>> queries = {{1, 3}, {2, 5}, {2, 4}};
    vector<bool> ans = evalQueries(arr, queries, k); 

    for (int i = 0; i < ans.size(); i++) { 
        if (ans[i]) { 
            cout << "true "; 
        } else { 
            cout << "false "; 
        }
    }
    return 0; 
}
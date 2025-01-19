#include <iostream> 
using namespace std; 

/*  
    Problem: Given an array sorted in non-decreasing order. Return array of squared elements in non-decreasing order
    Approach: Utilize two pointers. Compare two integers, whichever is largest, append to end of new array. 
    Time complexity: O(n)
*/

vector<int> sortedSquares(vector<int>& nums) {
    vector<int> array(nums.size()); 
    int i = 0; 
    int j = nums.size() - 1; 
        for (int a = nums.size()-1; a >= 0; a--) { 
            if (abs(nums[i]) > abs(nums[j])) { 
                array[a] = nums[i] * nums[i]; 
                i++;  
            } else { 
                array[a] = nums[j] * nums[j];  
                j--; 
            }
        }
        return array; 
    }

int main() { 
    vector<int> arr;
    arr.push_back(-4); 
    arr.push_back(-2); 
    arr.push_back(0); 
    arr.push_back(1); 
    arr.push_back(3); 

    vector<int> srtdSquar; 
    srtdSquar = sortedSquares(arr); 
    for (int i = 0; i < srtdSquar.size(); i++) { 
        cout << srtdSquar[i] << " , "; 
    }
    cout << endl; 
    return 0; 
}
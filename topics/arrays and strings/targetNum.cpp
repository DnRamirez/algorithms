#include <iostream> 
using namespace std; 

bool hasTarget(vector <int>arr, int target) { 
    int left = 0; 
    int right = arr.size() - 1;
    int sum = 0; 

    while (left < right) { 
        int currSum = arr[left] + arr[right]; 
        if (currSum == target) { 
            return true; 
        }
        if (currSum > target) { 
            right--; 
        } else { 
            left++; 
        }
    }
    return false; 
    
}

int main() { 
    vector <int>nums = {1, 2, 4, 6, 8, 9, 14, 15}; 
    int target = 13;
    if (hasTarget(nums, target)) { 
        cout << "array does have target" << endl; 
    } else { 
        cout << "array does not have target" << endl; 
    }
    return 0; 
}
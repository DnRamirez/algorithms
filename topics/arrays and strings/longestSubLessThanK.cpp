#include <iostream> 
using namespace std; 

int findLength(vector<int>nums, int k) { 
    int left = 0; 
    int curr = 0; 
    int answer = 0; 
    for (int right = 0; right < nums.size(); right++) { 
        curr += nums[right]; 
        while (curr > k) {
            curr -= nums[left]; 
            left++; 
        }; 
    answer = max(answer, right - left + 1); 
    }
    return answer; 
}
int main() { 
    vector<int> arr; 
    arr.push_back(3);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(7);
    arr.push_back(4);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(5);

    for (int i = 0; i < arr.size(); i++) { 
        cout << arr[i] << " "; 
    }
    cout << endl; 
    int ans = findLength(arr, 8); 
    cout << ans << endl; 
    
    return 0; 
}
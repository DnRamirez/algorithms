#include <iostream> 
#include <unordered_map>
#include <algorithm>
#include <vector> 
using namespace std; 

vector<vector<int>> findWinners(vector<vector<int>>& matches) {
    unordered_map<int, int> lossesCount; 
    for (vector<int> match : matches) { 
        int winner = match[0]; 
        int loser = match[1]; 
        if (lossesCount.find(winner) == lossesCount.end()) { 
            lossesCount[winner] = 0; 
        }
        lossesCount[loser]++; 
    }

    vector<vector<int>> answer(2, vector<int>()); 
    for (auto [player, count] : lossesCount) { 
        if (count == 0) { 
            answer[0].push_back(player); 
        } else if (count == 1) { 
            answer[1].push_back(player); 
        }
    }

    sort(answer[0].begin(), answer[0].end());
    sort(answer[1].begin(), answer[1].end());
    
    return answer; 
}

int main() { 
    vector<vector<int>> matches = {{1,3},{2,3},{3,6},{5,6},{5,7},{4,5},{4,8},{4,9},{10,4},{10,9}};
    vector<vector<int>> result = findWinners(matches);  
    
    for (auto row : result) { 
        for (auto element : row) { 
            cout << element << " "; 
        }
    }
    
    return 0; 
}
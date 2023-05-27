#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        
        sort(nums.begin(),nums.end());
        int value = 0;
        for (int i = 0 ; i < nums.size(); i ++) { 
            if(nums[i] != i) { 
                value = i -1 ;
            }
            if(nums[n -1] != n) { 
                value = n;
            }
        }
        if(nums[0] !== 0) { 
            return 0;
        }
        return value;      
    }
};
int main() {
   
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main ()
{
    int n;
    int maxCount = 0 , minCount = 0 , maxValue = 0 , minValue = 0;
    cin >>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    cin >>nums[i];
    for (int i = 0 ; i < nums.size(); i++) { 
        if(i == 0) {
            maxValue = nums[i];
            minValue = nums[i];
            continue;
        };
        if (nums[i] > maxValue) { 
            maxValue = nums[i];
            maxCount +=1;
        }else if (nums[i] < maxValue && nums[i] < minValue) {
             minValue = nums[i];
                minCount +=1;
        }
    }
    cout << maxCount << " " << minCount << endl;

 return 0;
} 
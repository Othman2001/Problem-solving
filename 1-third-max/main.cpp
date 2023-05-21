class Solution {
public:
    int thirdMax(vector<int>& nums) {
              long long max1=INT_MIN-1LL;
      long long max2=INT_MIN-1LL;
      long long max3=INT_MIN-1LL;
        for (auto& num : nums) { 
           if (num  > max1) { 
                max3 =max2;
                max2 = max1;
                max1 = num;
            }else if (num > max2 && num != max1)  {
                 max3 = max2;
                max2 = num;
            }else if (num > max3 && num != max2 && num != max1) { 
                max3 = num;
            }
        }
         if(max3==INT_MIN-1LL)
        return max1;
        return max3;
    }
};
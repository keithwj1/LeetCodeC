#include <algorithm>    // std::sort
#include <vector>       // std::vector

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (auto iter = nums.begin(); iter != nums.end(); iter++){
            int second = target - *iter;
            auto itsecond = std::find(iter+1,nums.end(),second);
            if (itsecond != nums.end()){
                std::vector<int> rvec;
                rvec.push_back(iter - nums.begin());
                rvec.push_back(itsecond - nums.begin());
                return rvec;
            }
        }
        return nums;
    }
};
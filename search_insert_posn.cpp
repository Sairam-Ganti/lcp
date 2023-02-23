#include <vector>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int len = nums.size();
        if(target>nums[len-1]){
            return len;
        }
        else if(target<nums[0]){
            return 0;
        }
        else {
            int count(0);
            for(int i:nums){
                if (i == target){
                    return count;
                }
                else if(i>target){
                    return count;
                }
                count++;
            }
        }
    return 0;
    }
};
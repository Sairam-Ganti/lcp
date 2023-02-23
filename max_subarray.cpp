#include <vector>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int locSum(0);
        int maxSum(INT_MIN);
        int maxE(INT_MIN);
        for(int i:nums){
            locSum += i;

            if(locSum<0){
                locSum = 0;
            }
            if(locSum>maxSum){
                maxSum = locSum;
            }
            if(i>maxE){
                maxE = i;
            }
        }
        if(maxSum==0)
            return maxE;
        return maxSum;
    }
};
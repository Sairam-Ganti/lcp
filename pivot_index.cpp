#include <vector>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> sums;
        int sum = 0;
        for(int i:nums){
            sum = sum+i;
            sums.push_back(sum);
        }
        int lsum(0), rsum(0);
        for(int j = 0; j<nums.size(); j++){
            lsum = 0; rsum = 0;
            if(j==0) 
                lsum=0;
            else 
                lsum = sums.at(j-1);
            rsum = sum - lsum - nums.at(j);

            if(rsum == lsum){
                return j;
            }
        }
    return -1;
    }

};

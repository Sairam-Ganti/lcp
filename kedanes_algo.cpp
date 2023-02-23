#include <vector>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        //Three part solution
        //Check within 1-n numbers
        //anything beyond that boundary is irrelavant
        //mark the locations with respective entries
        //check for the first unmarrked entry encountered
        //3 passess over the vector, remains O(N), no additional space used. 

        int l(nums.size());
        for(int i=0;i<l;i++){
            if(nums[i]<1 || nums[i]>l){
                nums[i] = l+1;
            }
        }      
        for(int i=0;i<l;i++){
            int k = std::abs(nums[i])-1;
            if(k>=l){
                continue;
            }
            if(nums[k]>0){
            nums[k] = -1 * nums[k];
            }
        }
        for(int i=0;i<l;i++){
            if(nums[i]>0)
                return i+1;
        }
    return l+1;
    }
};
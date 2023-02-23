#include <vector>
#include <string>
#include <map>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int maxSize = nums.size();
        for(int i = 0; i<maxSize; i++){
            if (nums[i] == val){
                nums[i] = nums[maxSize-1];
                maxSize--;
                i--;
            }
        }
    return maxSize;
    }
};
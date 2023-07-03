class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mi = 0;
        int ma = nums.size()-1;
        int mid = (mi+ma)/2;
        sort(nums.begin(), nums.end());
        while(mi<=ma){
            mid = (mi+ma)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>target){
                ma = mid-1;
            }
            else{
                mi = mid+1;
            }
        }
        return -1;

    }
};
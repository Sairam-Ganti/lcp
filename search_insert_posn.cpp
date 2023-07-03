class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size()-1;
        int m = 0;
        int o = (m+n)/2;
        sort(nums.begin(),nums.end());
        while(m<=n){
            // printf("Value of o : %d\n",o);
            o = (m+n)/2;
            if(nums[o]==target){
                return o;
            }
            if(nums[o]>target){
                // printf("Value of n : %d\n",n);
                n = o-1;
            }
            else{
                // printf("Value of m : %d\n",m);
                m = o+1;
            }
        }
        return m;
    //     if(target>nums[len-1]){
    //         return len;
    //     }
    //     else if(target<nums[0]){
    //         return 0;
    //     }
    //     else {
    //         int count(0);
    //         for(int i:nums){
    //             if (i == target){
    //                 return count;
    //             }
    //             else if(i>target){
    //                 return count;
    //             }
    //             count++;
    //         }
    //     }
    // return 0;
    }
};
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = nums.size() - 1;
        vector<vector<int>> ans;
        // this approach uses the 2-sum approach
        // it first iterates over the array called target and finds 2 numbers whose sum is equal to -target so that summing them all gives 0. 
        for (int i = 0; i < nums.size(); i++) {
            if(i>0 and nums[i-1]==nums[i]) continue;
            int target = nums[i] * (-1);
            int l = i + 1, r = nums.size() - 1;
            while (l < r) {
                if (nums[l] + nums[r] == target) {
                    ans.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;

                    // skip duplicates
                    while (l < r && nums[l] == nums[l - 1])
                        l++;
                    while (l < r && nums[r] == nums[r + 1])
                        r--;
                }else if(nums[l]+nums[r]>target){
                    r--;
                }else{
                    l++;
                }
            }
        }
        return ans;
    }
};

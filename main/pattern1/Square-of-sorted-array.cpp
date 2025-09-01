class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i] *=nums[i];
        }

        vector<int> ans;
        int l=0;
        int r=nums.size()-1;
        while(l<=r){
            if(nums[l]==nums[r]){
                ans.push_back(nums[l]);
                if(l!=r){
                    ans.push_back(nums[r]);
                }
                l++;
                r--;
            }else if(nums[l]>nums[r]){
                ans.push_back(nums[l]);
                l++;
            }else{
                ans.push_back(nums[r]);
                r--;
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};

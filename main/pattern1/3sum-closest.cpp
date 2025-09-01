class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int minDiff = INT_MAX;
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            int l = i+1;
            int r = nums.size()-1;
            bool exactFound = false;
            while(l<r){
                int sum = nums[i]+nums[l]+nums[r];
                if(sum == target){
                    ans = target;
                    exactFound = true;
                    break;
                }else if(sum>target){
                    
                    r--;
                }else{
                    l++;
                }
                if(abs(target-sum) <  minDiff){
                        ans = sum;
                        minDiff = abs(target-sum);
                    }
            }

            if(exactFound) break;
        }

        return ans;
    }
};

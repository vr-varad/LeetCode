class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        set<vector<int>> ans;
        for (int i = 0; i < nums.size(); i++) {
            if (i != 0 and nums[i] == nums[i - 1])
                continue;
            for (int j = i + 1; j < nums.size() - 1; j++) {
                if (j != i + 1 and nums[j] == nums[j - 1])
                    continue;
                int l = j + 1;
                int r = nums.size() - 1;
                while (l < r) {
                    long long int sum = 0;
                    sum += nums[i];
                    sum += nums[j];
                    sum += nums[l];
                    sum += nums[r];

                    if (sum == target) {
                        ans.insert({nums[i], nums[j], nums[l], nums[r]});
                        l++;
                        r--;

                        while (l < r && nums[l] == nums[l - 1]) {
                            l++;
                        }

                        while (l < r && nums[r] == nums[r + 1]) {
                            r--;
                        }
                    } else if (sum > target) {
                        r--;
                    } else {
                        l++;
                    }
                }
            }
        }
        vector<vector<int>> res(ans.begin(), ans.end());
        return res;
    }
};

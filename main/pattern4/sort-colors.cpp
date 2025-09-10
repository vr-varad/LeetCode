// Bucket Sort
class Solution1 {
public:
    void sortColors(vector<int>& nums) {
        int r = 0, w = 0, b = 0;
        for (auto x : nums) {
            if (x == 0)
                r++;
            else if (x == 1)
                w++;
            else
                b++;
        }
        nums.clear();
        for (int i = 0; i < r; i++) {
            nums.push_back(0);
        }
        for (int i = 0; i < w; i++) {
            nums.push_back(1);
        }
        for (int i = 0; i < b; i++) {
            nums.push_back(2);
        }
    }
};

// Two Pointer
class Solution2 {
public:
    void sortColors(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                swap(nums[i], nums[l]);
                l++;
            } else if (i < r && nums[i] == 2) {
                swap(nums[i], nums[r]);
                r--;
                if(nums[i]!=1){
                    i--;
                }
            }
        }
    }
};

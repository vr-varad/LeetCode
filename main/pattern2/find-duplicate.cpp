// Solution 1

class Solution1 {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> v(100002, 0);
        for (auto x : nums) {
            v[x]++;
        }
        int ans = -1;
        for (int i = 1; i <= 100002; i++) {
            if (v[i] > 1) {
                ans = i;
                break;
            }
        }

        return ans;
    }
};

// Solution 2
class Solution2 {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int boats = 0;
        int l = 0;
        int r = people.size() - 1;
        while (l <= r) {
            if (people[l] + people[r] <= limit) {
                l++;
                r--;
            } else {
                r--;
            }
            boats++;
        }
        return boats;
    }
};

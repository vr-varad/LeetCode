class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> st;
        while (true) {
            if (n == 1)
                break;
            int sum = 0;
            while (n > 0) {
                int num = n % 10;
                sum += num * num;
                n /= 10;
            }
            if(st.find(sum) != st.end()){
                return false;
            }
            st.insert(sum);
            n = sum;
        }
        return true;
    }
};

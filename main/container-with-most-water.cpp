class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        long long int ans = 0;
        while(l<r){
            long long int cap = min(height[l], height[r]) * (r-l);
            ans = max(ans, cap);
            if(height[l]<height[r]){
                l++;
            }else{
                r--;
            }
        }
        return ans;
    }
};

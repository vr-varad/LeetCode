class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> pair;
        for(int i=0;i<position.size();i++){
            pair.push_back({position[i], speed[i]});
        }

        sort(pair.rbegin(), pair.rend());
        stack<double> st;
        for(auto x: pair){
            double currTime = (double)((target-x.first)/(x.second*1.0));
            if(st.empty() || st.top() < currTime){
                st.push(currTime);
            }
        }

        return st.size();
    }
};

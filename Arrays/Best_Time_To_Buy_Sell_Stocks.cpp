class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n = p.size();
        int maxi = INT_MIN;
        int ans = INT_MIN;
        for(int i = n-1; i >= 0; --i){
            maxi = max(maxi,p[i]);
            ans = max(ans, maxi - p[i]);
        }
        return ans;
    }
};
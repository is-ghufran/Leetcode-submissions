class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int m = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int curr = prices[i];
                if (prices[j] < curr) {
                    continue;
                } else {
                    m = max(m,prices[j]-curr);
                }
            }
        }
        return m;
    }
};

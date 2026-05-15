class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int ht=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                ht=max(ht,min(heights[i],heights[j])*(j-i));
            }
        }
        return ht;
    }
};

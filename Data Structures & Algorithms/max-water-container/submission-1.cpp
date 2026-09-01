class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ma{}, l{}, r(heights.size()-1);
        while(l<r){
            ma = max(ma,(r-l)*min(heights[l],heights[r]));
            if(heights[l]<heights[r])l++;
            else r--;
        }
        return ma;
    }
};

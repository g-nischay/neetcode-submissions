class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pro{},m{prices[0]};
        for(int i{1};i<prices.size();i++){
            m=min(prices[i],m);
            pro=max(pro,prices[i]-m);
        }
        return pro;
    }
};

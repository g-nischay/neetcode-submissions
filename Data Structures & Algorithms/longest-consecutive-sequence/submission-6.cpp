class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        if(!nums.size())return 0;
        unordered_set<int> st(nums.begin(),nums.end());
        int m{0},n{0};
        for(int x:st)if(!st.contains(x-1)){
            while(st.contains(x++))n++;
            m=max(n,m);
            n=0;
        }
        return m;
    }
};

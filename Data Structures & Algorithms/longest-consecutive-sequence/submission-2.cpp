class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size())return 0;
        unordered_set<int> st(nums.begin(),nums.end());
        nums.clear();
        nums.reserve(st.size());
        for(int x:st)nums.push_back(x);
        sort(nums.begin(), nums.end());
        int n{1},m{1};
        for(int i{};i<nums.size()-1;i++){
            if(nums[i]+1==nums[i+1]){
                n++;
                m=max(m,n);
                }
            else n=1;
        }
        return m;
    }
};

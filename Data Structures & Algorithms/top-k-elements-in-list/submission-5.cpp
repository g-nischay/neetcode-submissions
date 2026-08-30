class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        unordered_map<int,int>mp{};
        for(int x:nums)mp[x]++;
        vector<pair<int,int>>buck{};
        for(const auto& x:mp)buck.push_back({x.second,x.first});
        sort(buck.begin(),buck.end());
        vector<int> res(k,0);
        while(k--){
            res[k]=buck.back().second;
            buck.pop_back();
        }
        return res;
    }
};

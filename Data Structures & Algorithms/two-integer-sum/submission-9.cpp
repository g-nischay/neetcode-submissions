class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp{};
        for(int i{};i<nums.size();i++){
            int other{target-nums[i]};
            if(mp.count(other))return{mp[other], i};
            mp[nums[i]]=i;
        }
        return{0,1};
    }
};

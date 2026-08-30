class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp{};
        for(int i{};i<nums.size();i++){
            if(mp.count(target-nums[i]))return{mp[target-nums[i]], max(mp[target-nums[i]],i)};
            mp[nums[i]]=i;
        }
        return{0,1};
    }
};

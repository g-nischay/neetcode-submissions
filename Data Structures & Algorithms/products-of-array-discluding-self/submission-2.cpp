class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int pro{1},z{};
        
        for(const int& x:nums){
            if(!x)z++;
            else pro*=x;
        }
        if(!z)for(int i{};i<nums.size();i++)nums[i]=pro/nums[i];
        else if(z==1)for(int i{};i<nums.size();i++){
            if(!nums[i])nums[i]=pro;
            else nums[i]=0;
            }
        else for(int i{};i<nums.size();i++)nums[i]=0;
        return nums;
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l{},r(numbers.size()-1);
        while(l<r){
            if(target==numbers[l]+numbers[r])break;
            else if(target<numbers[l]+numbers[r])r--;
            else l++;
        }
        return {l+1,r+1};
    }
};

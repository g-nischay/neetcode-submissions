class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()<=2)return 0;
        int l{0},r(height.size()-1),trap{};
        int lm{height[l]},rm{height[r]};
        int big{};
        for(int x:height)big = max(x,big);
        while(height[l]<big){
            lm = max(height[l],lm);
            trap+=lm-height[l];
            l++;
        }while(height[r]<big){
            rm = max(height[r],rm);
            trap+=rm-height[r];
            r--;
        }
        while(l<r)trap+=big-height[l++];
        return trap;
    }
};

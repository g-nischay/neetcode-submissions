class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()<=2)return 0;
        int l{0},r(height.size()-1),trap{};
        int lm{height[l]},rm{height[r]};
        int big{*max_element(height.begin(),height.end())};
        while(height[l]<big){
            if(lm>height[l]) trap+=lm-height[l++];
            else lm=height[l++];
        }while(height[r]<big){
            if(rm>height[r])trap+= rm-height[r--];
            else rm=height[r--];
        }
        while(l<r)trap+=big-height[l++];
        return trap;
    }
};

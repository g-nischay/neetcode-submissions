class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>pre(height.size(),0),suf(height.size(),0);
        pre[0]=height.front();
        suf[height.size()-1]=height.back();
        for(int i{1};i<height.size();i++){
            if(height[i]>pre[i-1])pre[i]=height[i];
            else pre[i]=pre[i-1];
        }
        for(int i(height.size()-2);i>0;i--){
            if(height[i]>suf[i+1])suf[i]=height[i];
            else suf[i]=suf[i+1];
        }
        int m{};
        for(int i{1};i<height.size()-1;i++){
            m+=min(suf[i],pre[i])-height[i];
        }
        return m;
    }
};

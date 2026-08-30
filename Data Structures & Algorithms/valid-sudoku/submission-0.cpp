class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board){
        for(int i{};i<9;i++){
            unordered_map<char, int>mp{};
            for(int j{};j<9;j++)mp[board[i][j]]++;
            for(auto& x:mp)if(x.first!='.')if(x.second>1)return false;
        }
        for(int i{};i<9;i++){
            unordered_map<char, int>mp{};
            for(int j{};j<9;j++)mp[board[j][i]]++;
            for(auto& x:mp)if(x.first!='.')if(x.second>1)return false;
        }
        for(int i{};i<9;i+=3)for(int j{};j<9;j+=3){
            unordered_map<char, int>mp{};
            for(int k{};k<3;k++)for(int l{};l<3;l++)mp[board[j+k][i+l]]++;
            for(auto& x:mp)if(x.first!='.')if(x.second>1)return false;
        }
        return true;
    }
};

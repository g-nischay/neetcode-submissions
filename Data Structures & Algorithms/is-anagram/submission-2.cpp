class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> ch{};
        for(char x:s)ch[x]++;
        for(char x:t)ch[x]--;
        for(pair<char,int> x:ch)if(x.second!=0)return 0;
        return 1;
    }
};

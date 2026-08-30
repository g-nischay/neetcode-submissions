class Solution {
public:

    string encode(vector<string>& strs) {
        string st{};
        for(const auto& x:strs)st+=to_string(x.size())+";"+x;
        return st;
    }

    vector<string> decode(string s) {
        vector<string>res{};
        int n{};
        for(int i{};i<s.size();i++){
            if(s[i]==';'){
                string temp{};
                for(int j{1};j<n+1;j++)temp+=s[i+j];
                res.push_back(temp);
                i+=n;
                n=0;
            }else{
                n*=10;
                n+=s[i]-'0';
            }
        }
        return res;
    }
};

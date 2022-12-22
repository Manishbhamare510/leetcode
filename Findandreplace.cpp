class Solution {
public:
    bool helper(string s,string pattern){
        if(s.size()!=pattern.size()){
            return false;
        }
        int n=s.length();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(s[i]==s[j] && pattern[i]!=pattern[j]){
                    return false;
                }
                else if(s[i]!=s[j] && pattern[i]==pattern[j]){
                    return false;
                }
            }
        }
        return true;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        for(auto &i:words){
            if(helper(i,pattern)){
                ans.push_back(i);
            }   
        }
        return ans;
    }
};

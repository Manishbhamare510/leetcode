class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char,int>mp;
        int n=s.length();
        vector<int>ans;
        for(int i=0;i<s.length();i++){
            mp[s[i]]=i+1;
        }
        for(auto &i:mp){
            cout<<i.first<<" "<<i.second<<endl;
        }
        int start=0;
        while(start<n){
            int last=mp[s[start]];
            for(int k=start;k<last;k++){
                last=max(last,mp[s[k]]);
            }
            int res=last-start;
            ans.push_back(res);
            start=last;
        }
        return ans;
    }
};

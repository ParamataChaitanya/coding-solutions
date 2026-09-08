class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(const string& s:strs)
        {
            string k=s;
            sort(k.begin(),k.end());
            mp[k].push_back(s);
        }
        vector<vector<string>>ans;
        ans.reserve(mp.size());
        for(auto& a:mp)
        {
            ans.push_back(move(a.second));
        }
        return ans;
    }
};
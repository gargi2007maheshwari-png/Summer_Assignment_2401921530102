class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string,vector<string>> no;
        for( auto it:strs)
    
        {
            string t=it;
            sort(it.begin(),it.end());
            no[it].push_back(t);
        }
        vector<vector<string>> ans;
        for( auto x:no)
        ans.push_back(x.second);
        return ans;
        

    }
};
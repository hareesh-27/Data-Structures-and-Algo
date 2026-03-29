class Solution {
public:
    vector<int> simulationResult(vector<int>& windows, vector<int>& queries) {
       set<int> st; vector<int> ans;
       for(int i=queries.size()-1; i>=0 ; i--)
       {
            if(st.find(queries[i]) == st.end())
            {
                ans.push_back(queries[i]);
                st.insert(queries[i]);
            }
       }

       for(int i=0;i<windows.size();i++)
       {
            if(st.find(windows[i]) == st.end()) ans.push_back(windows[i]);            
       }

       return ans;
    }
};

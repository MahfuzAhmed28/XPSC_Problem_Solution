void p(int idx,vector<int>& nums,vector<vector<int>>& ans,vector<int>& a){
    if(idx==nums.size())
    {
        return;
    }
    for(int i=idx;i<nums.size();i++)
    {
        a.push_back(nums[i]);
        ans.push_back(a);
        p(i+1,nums,ans,a);
        a.pop_back();
    }
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans,res;
        vector<int> a,b;
        p(0,nums,ans,a);
        set<vector<int>> st;
        for(vector<int> v:ans)
        {
            int sz=st.size();
            sort(v.begin(),v.end());
            st.insert(v);
            if(sz<st.size())
            {
                res.push_back(v);
            }
        }
        res.push_back(b);
        return res;
    }

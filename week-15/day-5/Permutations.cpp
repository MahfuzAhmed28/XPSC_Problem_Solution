void p(vector<int>& nums,vector<int>& a,vector<vector<int>>& ans,vector<int>& freq){
    if(nums.size()==a.size())
    {
        ans.push_back(a);
        return;
    }
    for(int i=0;i<nums.size();i++)
    {
        if(!freq[i])
        {
            a.push_back(nums[i]);
            freq[i]=1;
            p(nums,a,ans,freq);
            freq[i]=0;
            a.pop_back();
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    int n=nums.size();
    vector<vector<int>> ans;
    vector<int> a,freq(n);
    for(int i=0;i<n;i++)
    {
        freq[i]=0;
    }
    p(nums,a,ans,freq);
    return ans;

}

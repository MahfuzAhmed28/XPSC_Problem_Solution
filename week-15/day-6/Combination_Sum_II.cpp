void p(int idx,vector<int>& nums,vector<vector<int>>& ans,vector<int>& a,int& sum,int target){
    if(target==0)
    {
        ans.push_back(a);
        return;
    }
    for(int i=idx;i<nums.size();i++)
    {
        if(i>idx && nums[i]==nums[i-1]) continue;
        if(nums[i]>target) break;
        a.push_back(nums[i]);
        p(i+1,nums,ans,a,sum,target-nums[i]);
        sum-=a[a.size()-1];
        a.pop_back();
    }





}


vector<vector<int>> combinationSum2(vector<int> candidates, int target) {
    vector<vector<int>> ans;
    vector<int> a;
    int sum=0;
    sort(candidates.begin(),candidates.end());
    p(0,candidates,ans,a,sum,target);

    return ans;
}

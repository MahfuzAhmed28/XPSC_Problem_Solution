void p(int idx,vector<int>& nums,vector<vector<int>>& ans,vector<int>& a,int& sum,int target){
    if(sum==target)
    {
        ans.push_back(a);
        return;
    }
    if(sum>target || idx==nums.size())
    {
        return;
    }

    sum+=nums[idx];
    a.push_back(nums[idx]);


    p(idx,nums,ans,a,sum,target);
    sum-=a[a.size()-1];
    a.pop_back();
    p(idx+1,nums,ans,a,sum,target);



}


vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    vector<int> a;
    int sum=0;
    p(0,candidates,ans,a,sum,target);

    return ans;
}

int lenOfLongestSubarr(vector<int>& arr, int k) {
        // code here
        int n=arr.size();

        int ans=0;
        long long int sum=0;
        map<long long int,int> mp;
        mp[0]=-1;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            auto it=mp.find(sum-k);
            if(it!=mp.end())
            {
                ans=max(ans,i-mp[sum-k]);
            }
            auto it1=mp.find(sum);
            if(it1==mp.end())
            {
                mp[sum]=i;
            }
        }
        return ans;
}

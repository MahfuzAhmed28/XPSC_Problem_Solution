long long maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        long long int sum=0,ans=0;
        int r=0,l=0;
        while(r<n)
        {
            sum+=arr[r];
            if(r-l+1==k)
            {
                ans=max(ans,sum);
                sum-=arr[l];
                l++;
            }
            r++;
        }
        return ans;
    }

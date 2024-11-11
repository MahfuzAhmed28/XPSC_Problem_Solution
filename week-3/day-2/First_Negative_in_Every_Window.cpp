vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        // write code here
        int n=arr.size();
        vector<int> ans;
        deque<int> dq;
        int l=0,r=0;
        while(r<n)
        {
            if(arr[r]<0)
            {
                dq.push_back(arr[r]);
            }
            if(r-l+1==k)
            {
                if(dq.size()!=0)
                {
                    ans.push_back(dq.front());
                }
                else
                {
                    ans.push_back(0);
                }
                if(arr[l]<0)
                {
                    dq.pop_front();
                }
                l++;
            }
            r++;
        }
        return ans;
    }

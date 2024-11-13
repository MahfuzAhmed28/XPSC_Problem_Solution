int search(string pat, string txt) {
	    // code here
	    int sz1=txt.size();
	    int sz2=pat.size();
	    int l=0,r=0,ans=0;
	    int arr1[26]={0};
	    int arr2[26]={0};
	    for(int i=0;i<sz2;i++)
	    {
	        int x=pat[i]-'a';
	        arr1[x]++;
	    }
	    while(r<sz1)
	    {
	        int x=txt[r]-'a';
	        arr2[x]++;

	        if(r-l+1==sz2)
	        {
	            int c=0;
	            for(int i=0;i<26;i++)
	            {
	                if(arr2[i]<arr1[i])
	                {
	                    c=1;
	                }
	            }
	            if(c==0)
	            {
	                ans++;
	            }
	            x=txt[l]-'a';
    	        arr2[x]--;
    	        l++;
	        }
	        r++;
	    }
	    return ans;
	}

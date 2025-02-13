bool isPalindrome(string s,int l,int r){
    while(l<=r)
    {
        if(s[l]!=s[r])
        {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

void p(int idx,vector<vector<string>>& ans,vector<string>& a,string s,int n){
    if(n==idx)
    {
        ans.push_back(a);
        return;
    }
    for(int i=idx;i<n;i++)
    {
        if(isPalindrome(s,idx,i)){
            a.push_back(s.substr(idx,i-idx+1));
            p(i+1,ans,a,s,n);
            a.pop_back();
        }
    }
}


vector<vector<string>> partition(string s) {
    vector<vector<string>> ans;
    vector<string> a;
    int n=s.size();
    p(0,ans,a,s,n);
    return ans;
}

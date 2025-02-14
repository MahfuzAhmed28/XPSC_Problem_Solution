bool pos(int r,int c,vector<int>& v){
    for(int i=0;i<r;i++)
    {
        if(v[i]==c) return false;
        if(abs(v[i]-c)==abs(r-i)) return false;
    }
    return true;
}
void p(int idx,int n,vector<vector<string>>& ans,vector<string>& a,vector<int>& v){
    if(idx==n){
        ans.push_back(a);
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(pos(idx,i,v)){
            a[idx][i]='Q';
            v[idx]=i;
            p(idx+1,n,ans,a,v);
            a[idx][i]='.';
        }
    }
}


vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>> ans;
    vector<string> a=vector<string>(n,string(n,'.'));
    vector<int> v(9,0);
    p(0,n,ans,a,v);
    return ans;
}

class Solution{
    void solve(int i,int j, vector<vector<int>>&m,int n, vector<string>&ans,string move,
    vector<vector<int>>&vis, int di[],int dj[]){
        if(i==n-1 && j==n-1){
            ans.push_back(move);
            return;
        }
        string dir="DLRU";
        for(int idx=0;idx<4;idx++){
            int ni=i+di[idx];
            int nj=j+dj[idx];
            if(ni>=0 && ni<n && nj>=0 && nj<n && !vis[ni][nj] && m[ni][nj]==1){
                vis[i][j]=1;
                solve(ni,nj,m,n,ans,move+dir[idx],vis,di,dj);
                vis[i][j]=0;
            }
        }
    }
    public:
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>ans;
        vector<vector<int>>vis(n,vector<int>(n,0));
        int di[]={1,0,0,-1};
        int dj[]={0,-1,1,0};
        if(m[0][0]==1){
            solve(0,0,m,n,ans,"",vis,di,dj);
        }
        return ans;
        
    }
};


class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    // Code here
	    int n=grid.size();
	    int m=grid[0].size();
	    vector<vector<int>> ans(n,vector<int>(m,INT_MAX));
	    vector<vector<int>> vis(n,vector<int>(m,0));
	    queue<pair<int,int>> q;
	    for(int i=0;i<n;i++)
	        for(int j=0;j<m;j++){
	            if(grid[i][j]==1){
	                q.push({i,j});
	                ans[i][j]=0;
	                vis[i][j]=1;
	            }
	        }
	    while(!q.empty()){
	        auto fr=q.front();
	        q.pop();
	        int i=fr.first;
	        int j=fr.second;
	        
	        if(i+1<n and !vis[i+1][j]){
	            q.push({i+1,j});
	            ans[i+1][j]=ans[i][j]+1;
	            vis[i+1][j]=1;
	        }if(i-1>=0 and !vis[i-1][j]){
	            q.push({i-1,j});
	            ans[i-1][j]=ans[i][j]+1;
	            vis[i-1][j]=1;
	        }if(j+1<m and !vis[i][j+1]){
	            q.push({i,j+1});
	            vis[i][j+1]=1;
	            ans[i][j+1]=ans[i][j]+1;
	        }if(j-1>=0 and !vis[i][j-1]){
	            q.push({i,j-1});
	            vis[i][j-1]=1;
	            ans[i][j-1]=ans[i][j]+1;
	        }
	    }
	    
	    return ans;
	}
};

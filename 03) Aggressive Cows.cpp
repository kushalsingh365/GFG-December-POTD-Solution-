// User function Template for C++

class Solution {
public:
    bool isAnsPossible(int k,vector<int> &stalls,int ans)
    {
        int prev=stalls[0];
        k--;
        for(int i=1;i<stalls.size();i++)
        {
            if(abs(stalls[i]-prev)>=ans)
            {
                prev=stalls[i];
                k--;
            }
        }
        return k<=0;
    }
    int solve(int n, int k, vector<int> &stalls) {
    
        sort(begin(stalls),end(stalls));
        int l=1,r=stalls[n-1],mid,ans=0;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(isAnsPossible(k,stalls,mid))l=mid+1;
            else r=mid-1;
        }
        return r;
    }
};

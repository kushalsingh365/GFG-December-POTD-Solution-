class Solution{   
public:
    int waysToBreakNumber(int n)
    {
        long long int mod = 1000000007;
        int ans = ((n + 1) % mod * (n + 2) % mod) / 2;
        return ans;
    }
};

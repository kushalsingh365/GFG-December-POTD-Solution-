class Solution
{
public:
    vector<int> threeDivisors(vector<long long> query, int q)
    {
        // Write your code here
        bool isPrime[1000001];
        memset(isPrime, true, sizeof(isPrime));
        for(int i = 2; i * i <= 1000000; i++) {
            if(isPrime[i]) {
                for(int j = i * i; j <= 1000000; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        
        vector<int> S;
        
        for(int i = 2; i <= 1000000; i++) {
            if(isPrime[i]) S.push_back(i);
        }
        
        vector<int> ans;
        for(long long Q : query) {
            int root = sqrt(Q);
            int sz = upper_bound(S.begin(), S.end(), root) - S.begin();
            ans.push_back(sz);
        }
        
        return ans;
    }
};

class Solution{
public:
    //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n ) {
        //code here
        long long int ans = 0, s = 0;
        unordered_map<long long int, long long int> m;
        m[0] = 1;
        for(int i : arr) ans += m[s += i]++;
        return ans;
    }
};

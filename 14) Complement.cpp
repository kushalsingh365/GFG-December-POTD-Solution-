class Solution{
public:
    vector<int> findRange(string str, int n) {
        // code here
        int sum = 0;
        int mxSum = INT_MIN;
        int left = -1, right = -1;
        int start = 0;
        for(int end = 0; end < n; end++) {
            char ch = str[end];
            sum += (ch == '0' ? 1: -1);
            if(sum > mxSum) {
                mxSum = sum;
                left = start, right = end;
            }
            if(sum < 0) {
                sum = 0;
                start = end + 1;
            }
        }
        if(mxSum == -1) return {-1};
        return {left + 1, right + 1};
    }
};

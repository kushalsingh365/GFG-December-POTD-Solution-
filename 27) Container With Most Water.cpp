long long maxArea(long long A[], int len)
{
    // Your code goes here
     int i = 0;
    int j = len - 1;
    long long ans = 0;
    while(i < j){
        ans = max(ans, min(A[i], A[j])*(j - i));
        if(A[i] > A[j]){
            j--;
        }
        else{
            i++;
        }
    }
    return ans;
}

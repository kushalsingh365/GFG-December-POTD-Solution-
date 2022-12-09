//Function to find out the number of ways we can place a black and a 
//white Knight on this chessboard such that they cannot attack each other.
long long numOfWays(int N, int M)
{
    // write code here
    long long res = 0, t = M*N, mod = 1e9 + 7;
    auto isValid = [&](int i,int j){ return i >= 0 and i < M and j >=0 and j < N; };
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            int ans = 0;
            int f1 = i-2, s1 = j-1; if(isValid(f1,s1)) ans++;
            int f2 = i-2, s2 = j+1; if(isValid(f2,s2)) ans++;
            int f3 = i-1, s3 = j-2; if(isValid(f3,s3)) ans++;
            int f4 = i+1, s4 = j-2; if(isValid(f4,s4)) ans++;
            int f5 = i-1, s5 = j+2; if(isValid(f5,s5)) ans++;
            int f6 = i+1, s6 = j+2; if(isValid(f6,s6)) ans++;
            int f7 = i+2, s7 = j-1; if(isValid(f7,s7)) ans++;
            int f8 = i+2, s8 = j+1; if(isValid(f8,s8)) ans++;
            res = (res + t - (ans+1)) % mod;
        }
    }
    return res;
}

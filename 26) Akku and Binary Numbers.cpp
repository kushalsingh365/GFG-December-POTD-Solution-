class Solution{
public:
    void precompute()
    {
        // Code Here
    }
    
    long long solve(long long l, long long r){
        // Code Here
         long long count=0;

        for(int i=0; i<61; i++)

        {

            for(int j=i+1; j<62; j++)

            {

                for(int k=j+1; k<63; k++)

                {

                    long long x= 1ULL<<i | 1ULL<<j | 1ULL<<k;

                    if(x>=l and x<=r) 

                        count++;

                }

            }

        }

        return count;

    
    }
    
};

class Solution {

  public:

    long long maxGcd(int N) {

        // code here

         long long int ans1 = N*(N-1);

        long long int ans2 = (N-2)*(N-1);

        int a=0;

        long long int  i=N-2;

        while(a<2 && i>2){

            if(__gcd(ans1,i)==1){

                a++;

                ans1*=i;

            }

            i--;

        }

        a=0;

        i=N-3;

        while(a<2 && i>2){

            if(__gcd(ans2,i)==1){

                a++;

                ans2*=i;

            }

            i--;

        }

        return max(ans1,ans2);

    }

};

// User function Template for C++

class Solution {
  public:
    int isItPossible(string S, string T, int M, int N) {
        // code here
         if(M != N) return 0;

        

        int i =0;

        int j =0;

        while(i < M && j < N ){

            

            while(S[i] == '#') {

                i++;

                

            }

             while(T[j] == '#') {

                j++;

                

            }

            

            

            if(S[i] != T[j]) return 0;

            

            if(S[i] == T[j] && T[j] == 'A' ) {

                

                if(i < j) return 0;

                

            }

           if(S[i] == T[j] && T[j] == 'B' ) {

               

                if(i > j) return 0;

                

            }

            

            i++;

            j++;

            

            

        }

        return 1;
    }
};

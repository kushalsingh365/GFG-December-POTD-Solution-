class Solution {
  public:
    string BalancedString(int N) {
        // code here
        string finalString="";

        string atoz="abcdefghijklmnopqrstuvwxyz";

        

        int sumdigits=0;

        int temp=N;

        int lc=97;

        while(temp>0){

            sumdigits+=((temp)%10);

            temp=temp/10;

        }

        while(N>26){

            finalString+=atoz;

            N=N-26;

        }

        string tempString="";

        if(N%2==0){

            for(int i=0;i<(N/2);i++){

                finalString+=(char)lc++;

            }

            lc=122;

            for(int j=0;j<(N/2);j++){

                tempString=((char)(lc--))+tempString;

                

            }

        }

        else{

            if(sumdigits%2==0)

            {

                for(int i=0;i<((N+1)/2);i++){

                finalString+=(char)lc++;

                }

                lc=122;

                for(int i=0;i<((N-1)/2);i++){

                tempString=((char)(lc--))+tempString;

                }

            }

            else{

                for(int i=0;i<((N-1)/2);i++){

                finalString+=(char)lc++;

                }

                lc=122;

                for(int i=0;i<((N+1)/2);i++){

                tempString=((char)(lc--))+tempString;

                }

            }

            

        }

        finalString+=tempString;

        return finalString;
    }
};

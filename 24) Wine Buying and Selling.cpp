class Solution{
  public:
  long long int wineSelling(vector<int>& Arr, int N){
      //Code here.
      long long totalCost = 0, sum = 0;
      for(int i = 0; i < N - 1; i++){
          sum += Arr[i];
          totalCost += abs(sum);
      }
      return totalCost;
  }
};

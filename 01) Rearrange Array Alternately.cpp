class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
    	int maxi = arr[n-1]+1;
    	for(int i=0; i<n; i++){
    	    if(i&1){
    	        arr[i] =  arr[i]+maxi*(arr[i/2]%maxi);
    	    }
    	    else{
    	        arr[i] =  arr[i]+maxi*(arr[n-i/2-1]%maxi);
    	   }
    	}
    	for(int i=0; i<n; i++){
    	    arr[i] /= maxi;
    	}    	 
    
    	 
    }
};

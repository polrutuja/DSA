// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(int arr[], int n) {
	    // code here
	   int maxi = arr[0];
	   for(int i=0 ; i<n; i++){
	       if(arr[i] > maxi){
	           maxi = arr[i];
	       }
	   }
	   
	   int secMax = -1;
	   for(int i=0;i<n;i++){
	       if(arr[i] > secMax && arr[i] != maxi){
	          secMax = arr[i];
	       }
	   }
	   return secMax;
	    
	}
};
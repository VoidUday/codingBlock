#include<iostream>
using namespace std;
int main(){
    int n, i; 
    int currentSum = 0;
    int maxSum = 0;
    cin >> n;
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    //Kadane's Algorithms for maxmimum sum subarray
    for(int i=0; i<n; i++){
         currentSum = currentSum + arr[i];
         if(currentSum<0){
             currentSum = 0;
         }
         maxSum = max(currentSum , maxSum);
    }
    cout << "Maximum sum is : "<< maxSum << endl;
     return 0;
    
}
// T = O(n)

// Algorithms :
/*

Initialize:
    max_so_far = INT_MIN 
    max_ending_here = 0

Loop for each element of the array
  (a) max_ending_here = max_ending_here + a[i]
  (b) if(max_so_far < max_ending_here)
            max_so_far = max_ending_here
  (c) if(max_ending_here < 0)
            max_ending_here = 0
return max_so_far


// Explanation: 
/*

The simple idea of Kadane’s algorithm is to look for all positive contiguous 
segments of the array (max_ending_here is used for this). And keep track of maximum 
sum contiguous segment among all positive segments (max_so_far is used for this). Each 
time we get a positive-sum compare it with max_so_far and update max_so_far if it is
 greater than max_so_far 

 */
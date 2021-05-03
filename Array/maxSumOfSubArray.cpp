#include<iostream>
using namespace std;
int main(){
    int n, left =-1, right = -1, i; 
    int maxSum=0;
    int curentSum ={0};
    int cumSum[1000];
    cin >> n;
    int arr[n];
    cin >> arr[0];
    cumSum[0] = arr[0];
    for ( i = 1; i < n; i++)
    {
        cin >> arr[i];
        cumSum[i] =  cumSum[i-1] + arr[i];
    }
    
     for (int j = 0; j < n; j++)
     {
         for (int k = j; k < n; k++)
         {
             //generating all subarray and add it
             curentSum = 0;
             curentSum = cumSum[k] - cumSum[j-1];
             if(curentSum >maxSum){
                 maxSum = curentSum;
                 left = j;
                 right = k;
             }
         }
         
     }
     cout << maxSum<<endl;
     //print array that have maximum sum
     for(int m=left; m<=right; m++){
         cout<< arr[m]<< ",";
     }
     return 0;
    
}


//little bot optimized than previous one time complexity O(N + n^2);
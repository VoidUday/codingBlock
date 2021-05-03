#include<iostream>
using namespace std;
int main(){
    int n, left =-1, right = -1; 
    int maxSum=0;
    int curentSum =0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
     for (int j = 0; j < n; j++)
     {
         for (int k = j; k < n; k++)
         {
             //generating all subarray and add it
             curentSum = 0;
             for (int l = j; l < k; l++)
             {
              curentSum +=arr[l];
             }
             if(curentSum >maxSum){
                 maxSum = curentSum;
                 left = j;
                 right = k;
             }
         }
         
     }
     cout << maxSum<<endl;
     //print array that have maximum sum
     for(int m=left; m<right; m++){
         cout<< arr[m]<< ",";
     }
     return 0;
    
}
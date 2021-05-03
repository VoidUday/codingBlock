#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    //taking input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
     for (int j = 0; j < n; j++)
     {
         for (int k = j; k < n; k++)
         {
              //generating all subarray and add it
             for (int l = j; l < k; l++)
             {
               cout << arr[l]<< ",";
             }
             cout << endl;
         }
         
     }
     return 0;
    
}
#include<bits/stdc++.h>
using namespace std;

int peakElement(int arr[], int n)
    {
       // Your code here
       
      if(arr[0] >= arr[1]){
          return 0;
          
      }
      
      if(arr[n-1]>=arr[n-2]){
          return n-1;
      }
      
      for(int i=1; i <=n-1 ;i++){
          
          if(arr[i-1] <= arr[i] && arr[i+1]<=arr[i]){
              return i;
          }
      }
    }

int main(){




    int arr[]={1,1,1,2,1,1,1};

    int ans=peakElement(arr,7);
    cout<< ans << endl;
}
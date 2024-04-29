#include<bits/stdc++.h>

using namespace std ;


  void segregateElements(int arr[],int n)
    {
        // Your code goes here
      vector<int>ans;
       for(int i=0;i<n;i++)
           if(arr[i]>=0) ans.push_back(arr[i]);
       
       for(int i=0;i<n;i++)
           if(arr[i]<0) ans.push_back(arr[i]);
           
       for(int i =0;i<n;i++)
           arr[i] = ans[i];
     
      
      
    }
int main (){

int arr[]={1 ,-1 ,3 ,2 ,-7 ,-5 ,11 ,6};
int n=8;

segregateElements(arr,n);

for(int i =0;i<n;i++){
    cout<<arr[i]<<endl;

}





}
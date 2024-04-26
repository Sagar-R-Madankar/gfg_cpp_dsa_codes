#include<bits/stdc++.h>

using namespace std;
 pair<long long, long long> getMinMax(long long a[], int n) {
        // code here
        pair<long long , long long> pa;
        
        pa.first=*min_element(a,a+n);
        pa.second=*max_element(a,a+n);
        
        return pa;
    }

int main(){

long long arr[]={3,2,1,56,1000,167};
long long n=6;

pair<long long , long long> pa=getMinMax(arr,n);

cout<<pa.first<<" "<<pa.second<<endl;

}
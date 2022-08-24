//challenge 2
#include <bits/stdc++.h>
using namespace std;
int subAsum(vector <int> &arr,int n){
    int sum=0;
    for ( int i=0;i<n;i++)
    {
        int sum=0;
       for (int j=i;j<n;j++){
           sum=sum+arr[j];
           cout<<sum<<" "<<endl;
       }
     
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0;i<n;i++){
      cin>>arr[i];
    }
    
    cout<<subAsum(arr,n)<<endl;
    }

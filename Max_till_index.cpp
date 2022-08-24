// Online C++ compiler to run C++ program online
//challenge 1
#include <bits/stdc++.h>
using namespace std;
vector<int> MaxTill(vector <int> arr,int n){
    vector<int> arr2;
    int m;
    for (int i=1;i<=n;i++)
    {
        m=*max_element(arr.begin(),arr.begin()+i);
        arr2.push_back(m);
    }
   
    return arr2;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0;i<n;i++){
      cin>>arr[i];
    }
   vector<int> arr2=MaxTill(arr,n);
    for (int i=0;i<n;i++){
      cout<<arr2[i]<<" ";
    }
}
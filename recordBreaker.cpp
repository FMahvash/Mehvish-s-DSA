// Online C++ compiler to run C++ program online
//challenge 3
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
   int mx=0;
   int count=0;
   for (int i=0;i<n;i++){
       if (a[i]>mx){
           if (i==n-1){
               count++;
           }
           else if (a[i]>a[i+1]){
               count++;
           }
           mx=a[i];
       }
   }
    cout<<count<<" record breaking days";
    return count;
}

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
   int gSum;
   cin>>gSum;
   int s=0;
   int e=0;
   while (s<n){
       int sum=0;
       for (e=s;e<n;e++){     //e=s because we want to start from sth position in the next iteration
           sum+=a[e];
           if (sum==gSum){
           cout<< s+1<<" "<< e+1<<endl;
            break;            // to break inner loop if condition is true
      }
   }
   s++;
  
   }
   return 0;
}
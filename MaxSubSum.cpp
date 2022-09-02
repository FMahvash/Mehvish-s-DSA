// Online C++ compiler to run C++ program online
//max sum of subarrays
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int arr[n][n];
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        arr[i][i]=a[i];
        mx=max(mx,arr[i][i]);
    }
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            arr[i][j]=arr[i][j-1]+a[j];
             mx=max(mx,arr[i][j]);
            
        }
    }
    cout<< mx;
    return 0;
}
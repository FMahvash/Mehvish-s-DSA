// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    bool e[n];
    for (int i=0;i<n;i++){
        e[i]=0;
    }
    for (int i=0;i<n;i++){
        if (a[i]>=0 && a[i]<n){
            e[a[i]]=1;
        }
    }
    int i;
    for (i=0;i<n;i++){
        if (e[i]==0){
            cout<<i;
            return 0;
        }
    }
    cout<<n;
    return 0;
}
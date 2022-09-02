// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    map<int,int> m;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int mn=n;
    for (int i=0;i<n;i++){
        if (m.find(a[i])==m.end()){
            m[a[i]]=i;
        }
        else
        {
            mn=min(mn,m[a[i]]);
        }
    }
   cout<< mn;
}
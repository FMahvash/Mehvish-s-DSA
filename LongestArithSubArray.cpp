// Online C++ compiler to run C++ program online
//challenge 3
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int pd=arr[1]-arr[0];
    int curr=2;
    int j=0;
    int ans=2;
    while (j<n){
        if (pd==arr[j-1]-arr[j])
        {
            curr++;
        }
        else if (pd!=arr[j-1]-arr[j]){
            pd=arr[j-1]-arr[j];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
        
    }
    cout<<ans;
    return 0;
}
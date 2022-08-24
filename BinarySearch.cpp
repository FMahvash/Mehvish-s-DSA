// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector <int> arr,int n,int k){
    int start=0;
    int end=n;
    int i;
    while (start<end){
        int mid=start+ (end-start)/2;
        if (arr[mid]==k){
            return mid;
        }
        else if (arr[mid]>k){
            end=mid-1;
            
        }
        else if (arr[mid]<k){
            start=mid+1;
        }
    }
    return -1;
    
}
    
    
int main(){
    int n;
    cin>>n;
    vector<int> arr(n, 0);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k;
    cin>>k;
    cout<< binarySearch(arr,n,k)<<endl;
    
}

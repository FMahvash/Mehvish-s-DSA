
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void InsertionSort(vector <int> &arr,int n){
    int i,j;
    for (i=1;i<n;i++){
        for (j=i-1;j>=0;j--){
            if (arr[j]>arr[i]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            else{
                break;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0;i<n;i++){
      cin>>arr[i];
    }
    InsertionSort(arr,n);
    for (int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
}

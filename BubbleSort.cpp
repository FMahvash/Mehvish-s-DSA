// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void BubbleSort(vector <int> &arr,int n){
    int i,j;
    for (i=1;i<=n-1;i++){
        for (j=0;j<n-i;j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
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
    BubbleSort(arr,n);
    for (int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
}

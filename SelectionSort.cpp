
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void SelectionSort(vector <int> &arr,int n){
    int i,j;
    for (i=0;i<n-1;i++){
        int minInd=i;
        for (j=i+1;j<n;j++){
            if (arr[j]<arr[minInd]){
                minInd=j;
            }
        }
     int temp=arr[minInd];
     arr[minInd]=arr[i];
     arr[i]=temp;
    }
}
    
int main(){
    int n;
    cin>>n;
    vector<int> arr(n, 0);
    for (int i=0;i<n;i++){
      cin>>arr[i];
    }
    SelectionSort(arr,n);
    for (int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
}

// Online C++ compiler to run C++ program online
#include <iostream>
#include<math.h>
using namespace std;
int Linearsearch(int arr[],int n,int k){
    int i;
    for (i=0;i<n;i++){
        if (arr[i]==k){
            return i;
        }
        
    }

    return -1;
    
}
    
    
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<Linearsearch(arr,n,k)<<endl;
}
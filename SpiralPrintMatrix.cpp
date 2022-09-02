// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[n][m];
    int sum=0;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;i++)
        {
        cin>>arr[i][j];
        }
    }
    int row_start=0;
    int row_end=n-1;
    int col_start=0;
    int col_end=m-1;
    
    while (row_start<=row_end && col_start<=col_end)
    {
        //for first row traversal  --->
        for (int col=col_start;col<=col_end;col++){
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;
        
        //for last column traversal v
         for (int row=row_start;row<=row_end;row++){
            cout<<arr[row][col_end]<<" ";
        }
        col_end--;
        
        //for last col to first  <----
        for (int col=col_end;col>=col_start;col--){
            cout<<arr[row_end][col]<<" ";
        }
        row_end--;
        
        //for bottom up column traversal ^
         for (int row=row_end;row>=row_start;row--){
            cout<<arr[row][col_start]<<" ";
        }
        col_start++;
        }
        
    return 0;
}
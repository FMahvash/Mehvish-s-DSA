#include <bits/stdc++.h>
//matrix transpose
using namespace std;
int main() {
    
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector <vector<int>> arr(n,vector <int> (m));
    vector <vector<int>> t_arr(m,vector <int> (n));
    //taking input
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
        cin>>arr[i][j];
        }
    }
   //transpose 
   for (int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            // int temp=arr[i][j];
            // arr[i][j]=arr[j][i];
            // arr[j][i]=temp;
            t_arr[j][i]=arr[i][j];
        }
    } 
   //display output
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        {
            cout<<t_arr[i][j]<<" ";
        }
        cout<<endl;
    } 
    
    return 0;
}
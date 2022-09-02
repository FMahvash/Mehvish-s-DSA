// Online C++ compiler to run C++ program online
//matrixSearch
#include <bits/stdc++.h>
using namespace std;
int main() {
    int row;
    cin>>row;
    int col;
    cin>>col;
    int elem;
    cin>>elem;
    vector<vector<int>>  mat(row,vector<int> (col));
    //input
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++)
        {
            cin>>mat[i][j];
        }
    }
    //search
    int r=0;
    int c=col-1;
    bool gotIt=false;
    while (r<row && c>=0 )            
    {
        if (mat[r][c]==elem)
        {
            gotIt=true;
            break;
        }
        else if (mat[r][c]>elem)
        {
            c--;
        
        }
        else
        {
            r++;
        }
    }
    if (gotIt)
    {
        cout <<"found it";
        
    }
    else
    {
        cout <<"not here";
    }
    return 0;
}
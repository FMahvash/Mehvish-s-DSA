// A C/C++ Program to generate OTP (One Time Password)
//Kadenes algorithm to find max subarray sum in O(n)
include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int CurrSum=0;
    int maxS=INT_MIN;
    for (int i=0;i<n;i++)
    {
        CurrSum+=a[i];
        if (CurrSum<0)
        {
           CurrSum=0;
        }
        maxS=max(maxS,CurrSum);
    }
    cout<<maxS;
    return 0;
}

// A C/C++ Program to generate OTP (One Time Password)
//find max subarray sum in O(n) in a circular array
#include<bits/stdc++.h>
using namespace std;
int kadenes(int n,int a[])
{
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
    return maxS;
    
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int nonwrapsum=kadenes(n,a);
    int wrapsum=0;
    int totalsum=0;
    for (int i=0;i<n;i++)
    {
        totalsum+=a[i];
        a[i]=-a[i];
    }
    wrapsum=totalsum+kadenes(n,a);
    cout<<max(nonwrapsum,wrapsum);
    return 0;
}

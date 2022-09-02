// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    int sum=0;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int Dsum;
    cin>>Dsum;
    int i=0;
    int j=n-1;
    
    while (i<j)
    {
        sum=arr[i]+arr[j];
        if (sum==Dsum){
            cout << arr[i]<<" "<<arr[j]<<endl;
            i++;
            j--;
        }
        else if(sum>Dsum)
        {
            j--;
        }
         else if(sum<Dsum)
        {
            i++;
        }
    }
    return 0;
}
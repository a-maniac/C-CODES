#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    long long int  a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        int min_index=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[min_index]>a[j])
            min_index=j;
        }
        swap(a[min_index],a[i]);
    }
     for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}


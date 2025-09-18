#include <bits/stdc++.h>
using namespace std;

int isSorted(int *arr,int n)
{
    if(n==1)
    {
        if(arr[1]>=arr[0])
        {
            return 1;
        }
        else
            return 0;
    }
    else if(arr[n-1]>=arr[n-2])
    {
        return isSorted(arr,n-1);
    }
    else
    {
        return 0;
    }
}
int main() {

    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int value = isSorted(ar,n);
    if(value==1)
    {
        cout<<"sorted";
    }
    else
    {
        cout<<"Not sorted";
    }
}

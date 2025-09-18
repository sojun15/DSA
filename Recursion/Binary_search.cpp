#include <bits/stdc++.h>
using namespace std;

int recursion_binary_search(int *arr,int first,int last, int target)
{
    if(first>last)
    {
        return -1;
    }
    int mid = first + (last-first)/2;
    if(arr[mid]==target)
    {
        return mid;
    }
    else if(arr[mid]>target)
    {
        return recursion_binary_search(arr, first, mid-1,target);
    }
    else
    {
        return recursion_binary_search(arr, mid+1, last, target);
    }
}

int main() {

    int n;
    cout<<"enter length of the array:";
    cin>>n;
    int ar[n],target;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cout<<"enter target:";
    cin>>target;
    int first=0, last = n-1; 
    int value = recursion_binary_search(ar,first,last,target);
    
    if(value==-1)
    {
        cout<<"not found";
    }
    else
    {
        cout<<"found at index "<<value;
    }
}

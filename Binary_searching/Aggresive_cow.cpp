#include<bits/stdc++.h>
using namespace std;

bool check(int *arr, int minimum_allowed_distance, int number_cows, int number)
{
    int cows=1,place = arr[0];
    for(int i=0;i<number;i++)
    {
        if((arr[i]-place)>=minimum_allowed_distance)
        {
            cows++;
            place = arr[i];
        }
    }
    if(cows>=number_cows)
        return 1;
    else
        return 0;
}
int main()
{
    int number,number_cows;
    cin>>number>>number_cows;
    int arr[number];
    for(int i=0;i<number;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+number);
    int first=0,last=arr[number-1]-arr[0];
    int mid, answer=-1;
    while(first<=last)
    {
        mid = first + (last-first)/2;
        if(check(arr,mid,number_cows,number))
        {
            answer = max(answer,mid);
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }
    cout<<answer;
}

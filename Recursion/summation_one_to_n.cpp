#include<stdio.h>
#include<iostream>
using namespace std;

int summation(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n + summation(n - 1);
    }
}

int main()
{
    int n;
    cout<<"Enter a positive integer: ";
    cin>>n;
    int sum = summation(n);
    cout<<"The sum of all integers from 1 to n is: "<<sum<<endl;
}
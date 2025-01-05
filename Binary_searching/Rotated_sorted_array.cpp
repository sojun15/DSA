#include <bits/stdc++.h>
using namespace std;

int main()
{
    int length,target,middle;
    cout<<"enter length and target:";
    cin>>length>>target;
    int number[length];
    for(int i=0;i<length;i++)
    {
        cin>>number[i];
    }
    int first = 0;
    int last = length-1;
    while(first<=last)
    {
        middle = first + (last-first)/2;
        if(target==number[middle])
        {
            cout<<middle+1<<endl;
            break;
        }
        else if(number[first]<=number[middle])
        {
            if(target>=number[first] && target<=number[middle])
            {
                last = middle - 1;
            }
            else
            {
                first = middle+1;
            }
        }
        else
        {
            if(target>=number[middle] && target<=number[last])
            {
                first = middle + 1;
            }
            else
            {
                last = middle - 1;
            }
        }
    }
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> elements,superior;
    int length,input;
    cin>>length;
    for(int i=0;i<length;i++)
    {
        cin>>input;
        elements.push_back(input);
    }
    int maximum = INT_MIN;
    for(int i=length-1;i>=0;i--)
    {
        if(elements[i]>maximum)
        {
            maximum = elements[i];
            superior.push_back(elements[i]);
        }
    }
    for(int i=0;i<superior.size();i++)
    {
        cout<<superior[i]<<" ";
    }
}
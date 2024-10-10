#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> number = {0, 5, 10, 15};
    for (int i = 0; i < number.size(); i++)
    {
        for (int j = i + 1; j < number.size(); j++)
        {
            if (number[i] + number[j] == 15)
            {
                cout << '(' << i << ',' << j << ')' << endl;
            }
        }
    }
}
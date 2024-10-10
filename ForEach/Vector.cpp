#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> number;
    number.push_back(5);
    number.push_back(15);
    number.push_back(25);
    number.push_back(31);
    number.push_back(37);
    number.pop_back();
    // foreach loop in cpp
    for (int single : number)
    {
        cout << single << endl;
    }
    cout << "first number:" << number.front() << endl;
    cout << "last number:" << number.back() << endl;
    cout << "number at 2nd index :" << number.at(2) << endl;
}
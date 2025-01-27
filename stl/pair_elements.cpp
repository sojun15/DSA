#include <bits/stdc++.h>
using namespace std;

void print_elements(vector<pair<int, string>> element)
{
    // we can print elements in both ways
    for (pair<int, string> single : element)
    {
        cout << single.first << ", ";
        cout << single.second << endl;
    }

    // auto will determine variable type automatically
    for (auto single : element)
    {
        cout << single.first << ", ";
        cout << single.second << endl;
    }
}

void pair_function(int number)
{
    vector<pair<int, string>> student;

    int id;
    string name;
    for (int i = 0; i < number; i++)
    {
        cout << "id:";
        cin >> id;
        cout << "name:";
        cin >> name;
        student.push_back(make_pair(id, name));
    }

    print_elements(student);
}

int main()
{
    int number;
    cout << "how many number of student you want to input:";
    cin >> number;

    pair_function(number);
}
#include <bits/stdc++.h>
using namespace std;

void print_element(queue<pair<int, string>> element)
{
    while (!element.empty())
    {
        cout << element.front().first << "->";
        cout << element.front().second << endl;
        element.pop();
    }
}

void push_element()
{
    queue<pair<int, string>> element;
    element.push(make_pair(1, "rahad"));
    element.push(make_pair(2, "partho"));
    element.push(make_pair(15, "sojun"));

    print_element(element);
}

int main()
{
    push_element();
}
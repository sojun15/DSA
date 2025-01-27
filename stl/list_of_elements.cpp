#include <bits/stdc++.h>
using namespace std;

list<int> push_element(list<int> element)
{
    element.push_back(15);
    element.push_front(2);
    element.push_back(31);
    element.push_front(1);
    element.push_back(42);
    element.push_front(5);

    return element;
}

list<int> pop_element(list<int> element)
{
    element.pop_back();
    element.pop_front();

    return element;
}

void print_element(list<int> element)
{
    for (int single : element)
    {
        cout << single << ' ';
    }
}

int main()
{
    list<int> element;

    // push elements in list
    element = push_element(element);

    // pop elements from list
    element = pop_element(element);
    print_element(element);
}
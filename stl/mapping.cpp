#include <bits/stdc++.h>
using namespace std;

void print_element(map<int, string> product)
{
    for (auto p : product)
    {
        cout << p.first << ' ';
        cout << p.second << endl;
    }
}

void insert_element()
{
    map<int, string> product;
    product[5] = "mobile";
    product[13] = "headphone";
    product[11] = "laptop";
    product[17] = "mouse";

    print_element(product);
}

int main()
{
    insert_element();
}
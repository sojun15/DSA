#include <bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost:: multiprecision;

int main() {
	int test;
	cin>>test;
    while(test--)
    {
        int number;
        cin>>number;
        cpp_int factorial = 1;
        for(int i=2;i<=number;i++)
        {
            factorial *= i;
        }
        cout<<factorial<<endl;
    }
}

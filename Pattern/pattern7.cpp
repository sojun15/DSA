#include<bits/stdc++.h>
using namespace std;

// demo result 
// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

int main(){
    int number,value=1;
    cout<<"how many number you want to see same number:";
    cin>>number;
    for(int i=1;i<=number;i++){
        for(int j=1;j<=i;j++){
            cout<<value++<<" ";
        }
        cout<<endl;
    }
}
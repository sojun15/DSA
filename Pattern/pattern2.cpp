#include<bits/stdc++.h>
using namespace std;

// demo result pattern 
// 1 2 3 4 5 
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25

int main(){
    int number,temporary=1,j;
    cout<<"how many number you want to see number:";
    cin>>number;
    for(int i=0;i<number;i++){
        for(j=temporary;j<(number+temporary);j++){
            cout<<j<<' ';
        }
        temporary = j;
        cout<<endl;
    }
}
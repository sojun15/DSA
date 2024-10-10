#include<bits/stdc++.h>
using namespace std;

// demo result pattern 
// A B C D
// A B C D
// A B C D
// A B C D

int main(){
    int number;
    cout<<"how many number you want to see alphabet";
    cin>>number;
    for(int i=0;i<number;i++){
        for(int j=0;j<number;j++){
            cout<<(char)(65+j)<<' ';
        }
        cout<<endl;
    }
}
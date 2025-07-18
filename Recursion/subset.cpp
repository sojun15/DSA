#include<bits/stdc++.h>
using namespace std;

void subsets(vector<int> &arr,vector<int> &output, int index){
    // when the base case will be true then it will print the output and backtracking will happen
    if(index==arr.size()){
        for(int i=0;i<output.size();i++){
            cout << output[i] << " ";
        }
        cout << endl;
    }
    else {
        // Include the current element
        output.push_back(arr[index]);
        subsets(arr, output, index + 1);

        // Exclude the current element
        output.pop_back();
        subsets(arr, output, index + 1);
    }
}

int main(){
    vector<int> arr = {1, 2, 3};
    vector<int> answer;

    subsets(arr,answer,0);
}
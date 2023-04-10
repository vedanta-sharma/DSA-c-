#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size: ";
    cin >> n;
    for(int row = 0; row<n; row = row + 1){
        for(int col = 0; col< row+1; col = col+1){
            cout<<"*";
        }
        cout<< endl;
    }
    for(int row = 0; row<n-1; row = row + 1){
        for(int col = 0; col< n- row-1; col = col+1){
            cout<<"*";
        }
        cout<< endl;
    }
}
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size: ";
    cin >> n;
    int k=1;
    for(int row = 0; row<n; row = row + 1){
        for(int col = 0; col<=row; col = col+1){
            cout<< k <<" ";
            k++;
        }
        cout<< endl;
    }
}
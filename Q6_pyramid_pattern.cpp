#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size: ";
    cin >> n;
    for(int row = 0; row<n; row = row + 1){
        int k =0;
        for(int col = 0; col< 2*n- 1; col = col+1){
            if(col<n-row-1){
                cout<<" ";
            }
            else if(k<2*row+1){
                cout<<"*";
                k++;
            }
            else{
                cout<<" ";
            }
        }
        cout<< endl;
    }
}
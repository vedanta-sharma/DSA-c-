#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size: ";
    cin >> n;
    for(int row = 0; row<n; row = row + 1){
        for(int col = 0; col< n-row; col = col+1){
            if(col==0 || col == n-row-1 || row == 0){
                cout<<col+1;
            }
            else{
                cout<<" ";
            }
        }
        cout<< endl;
    }
}
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size: ";
    cin >> n;
    for(int row = 0; row<n; row = row + 1){
        int k = n;
        for(int col = 0; col< k; col = col+1){
            if(col==0 || col == row || row == n-1){
                cout<<col+1;
            }
            else{
                cout<<" ";
            }
        }
        cout<< endl;
    }
}
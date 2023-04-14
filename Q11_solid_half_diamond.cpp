#include <iostream>
using namespace std;

//# Attempt 1
// int main(){
//     int n;
//     cout<<"Enter the size: ";
//     cin >> n;
//     for(int row = 0; row<n; row = row + 1){
//         for(int col = 0; col< row+1; col = col+1){
//             cout<<"*";
//         }
//         cout<< endl;
//     }
//     for(int row = 0; row<n-1; row = row + 1){
//         for(int col = 0; col< n- row-1; col = col+1){
//             cout<<"*";
//         }
//         cout<< endl;
//     }
// }

//Attempt 2
int main(){
    int n;
    cout<<"Enter the size: ";
    cin >> n;
    for(int row = 0; row<2*n-1; row = row + 1){
        int cond=0;
        if(row<n){
            cond=row;
        }
        else{
            cond=n-(row%n)-2;
        }
        for(int col = 0; col<=cond; col = col+1){
            cout<<"*";
        }
        cout<< endl;
    }
}
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size: ";
    cin >> n;
    for(int row = 0; row<2*n+1; row = row + 1){
        int num=1;
        for(int col = 0; col<=n+2; col = col+1){
            cout<<num;
        }
        cout<< endl;
    }
}
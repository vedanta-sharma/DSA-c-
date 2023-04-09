#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size: ";
    cin >> n;
    int k = n;
    for(int row = 0; row<n; row = row + 1){
        int c =1;
        for(int col = 0; col< k; col = col+1){
            if(col<n-row-1){
                cout<<" ";
            }
            else if(col<n){
                cout<<c;
                c++;
            }
            else if(col == n){
                c=c-2;
                cout<<c;
                c--;
            }
            else{
                cout<<c;
                c--;
            }
        }
        k++;
        cout<< endl;
    }
}
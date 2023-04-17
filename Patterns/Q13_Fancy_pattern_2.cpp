#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size: ";
    cin >> n;
    int c=1;
    for(int row = 0; row<n; row = row + 1){
        for(int col = 0; col<=row; col = col+1){
            cout<<c;
            c++;
            if(col<row){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    int start=c-n;
    for(int row=0; row<n; row=row+1){
        int k= start;
        for(int col=0; col<=n-row-1;col=col+1){
            cout<<k;
            k++;
            if(col<n-row-1){
                cout<<"*";
            }
        }
        start=start-(n-row-1);
        cout<< endl;
    }
}
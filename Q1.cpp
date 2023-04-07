#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if (a > b){
        if (a > c){
            cout<<a<<" is largest between 3 numbers."<<endl;
        }
        else{
            cout<<c<<" is largest between 3 numbers."<<endl;
        }
    }
    else{
        if (b > c){
            cout<<b<<" is largest between 3 numbers."<<endl;
        }
        else{
            cout<<c<<" is largest between 3 numbers."<<endl;
        }
    }
    return 0;
}
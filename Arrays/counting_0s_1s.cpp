#include <iostream>
using namespace std;

int main(){
    int arr[]={1,1,0,0,0,1,0,1,5};
    int l= sizeof(arr)/sizeof(arr[0]);
    int zeros = 0;
    int ones = 0;
    
    //Linear Search

    for(int i = 0; i < l; i++){
        if(arr[i] == 0){
            zeros++;
        }
        if(arr[i]==1){
            ones++;
        }
    }
    cout<<"Number of Zeros are:"<<zeros<<endl;
    cout<<"Number of Ones are:"<<ones<<endl;
}
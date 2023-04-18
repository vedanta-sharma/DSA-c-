#include <iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int l= sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"Enter the element to be found in the array: ";
    cin >> key;
    bool value = 0;
    //Linear Search

    for(int i = 0; i < l; i++){
        if(arr[i] == key){
            value = 1;
        }
    }
    if(value){
       cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
}

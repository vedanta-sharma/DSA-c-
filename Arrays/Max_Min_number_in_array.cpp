#include <iostream>
#include <limits.h>
using namespace std;

int main(){
    int arr[]={1,1,1,1,1,1,1,2,3,4,5};
    int l= sizeof(arr) / sizeof(arr[0]);
    int maxim = INT_MIN;
    int minim = INT_MAX;
    //To Find Max number in array
    for(int i = 0; i < l; i++){
        if(arr[i] > maxim){
            maxim = arr[i];
        }
    }
    cout<<"Maximum Number of array is: "<< maxim << endl;

    //To Find Min number in array
    for(int i = 0; i < l; i++){
        if(arr[i] < minim){
            minim = arr[i];
        }
    }
    cout<<"Minimum Number of array is: "<< minim << endl;
}
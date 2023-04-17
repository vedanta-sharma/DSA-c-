#include <iostream>
using namespace std;

int main(){

    //Taking input in arrays

    int arr[10];
    cout << "Enter the values of array: "<<endl;
    for(int index=0; index<10; index++){
        cin>>arr[index];
    }

    //Printing values in the array

    cout << "printing the values in the array: "<<endl;
    for(int index=0; index< 10; index++){
        cout<<arr[index]<<" ";
    }
    return 0;
}
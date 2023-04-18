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
    cout<<endl;

    //Printing doubles

    cout << "Doubles are: "<<endl;
    for(int index=0; index< 10; index++){
        cout<<2*arr[index]<<" ";
    }
    cout<<endl;

    //Changing elements of array to 1

    cout << "Changed array: "<<endl;
    for(int index=0; index< 10; index++){
        arr[index]=1;
        cout<<arr[index]<<" ";
    }
    return 0;
}
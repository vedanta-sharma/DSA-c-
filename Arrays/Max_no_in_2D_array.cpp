#include <iostream>
#include <limits.h>
using namespace std;

//Creating function to print Max no of the array
int MaxElement(int arr[][3], int rows, int cols){
    int maxim = INT_MIN;
    for(int i=0; i < rows;i++){
        for(int j=0; j < cols; j++){
            if(arr[i][j] > maxim){
                maxim=arr[i][j];
            }
        }
    }
    return maxim;
}

//Defining the function
int main(){
    int arr[3][3];
    int rows =3;
    int cols =3;

    //Taking Input for the array
    cout<<"Enter the elements: "<<endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin>>arr[i][j];
        }
    }

    //Printing the array
    cout<<"Printing row-wise : "<<endl;
    for(int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The maximum element in the array is : "<<MaxElement(arr, rows, cols);
    return 0;
}
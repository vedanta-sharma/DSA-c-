#include <iostream>
using namespace std;

//Creating function to print Transpose of the array
void TransposeArr(int arr[][3], int rows, int cols){
    for(int i=0; i < rows;i++){
        for(int j=0; j < cols; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
}


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
    cout<<"The Transpose of the array is : "<< T(arr, rows, cols);
    return 0;
}
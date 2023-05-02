#include <iostream>
using namespace std;

//Creating function to print Transpose of the array
void TransposeArr(int arr[][3], int rows, int cols, int transpose[][3]){
    for(int i=0; i < rows;i++){
        for(int j=0; j < cols; j++){
            transpose[j][i]= arr[i][j];
        }
    }
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }
}


int main(){
    int arr[3][3];
    int rows =3;
    int cols =3;
    int transpose[3][3];

    //Taking Input for the array
    cout<<"Enter the elements: "<<endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin>>arr[j][i];
        }
    }
    cout<<"The Transpose of the array is : "<<endl;
    TransposeArr(arr, rows, cols, transpose);
}
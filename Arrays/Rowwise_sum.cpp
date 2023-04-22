#include <iostream>
using namespace std;

//Creating function to print row-wise sum of the array
void printRowwiseSum(int arr[][3], int rows, int cols){
    cout<<"The row-wise sum would be: "<<endl;
    for(int i=0; i < rows;i++){
        int sum=0;
        for(int j=0; j < cols; j++){
            sum = sum + arr[i][j];
        }
        cout<<sum<<endl;
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
    printRowwiseSum(arr, rows, cols);
    return 0;
}
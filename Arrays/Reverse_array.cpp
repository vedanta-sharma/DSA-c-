#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = size-1;

    //swapping elements
    while (start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    //printing the elements of array
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }   
}
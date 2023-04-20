#include <iostream>
#include <vector>
using namespace std;

int main(){
    //Initializing the vectors
    int n;
    cout<<"Enter the size of the brr array: "<<endl;
    cin>>n;
    vector<int> arr;
    vector<int> brr(n,10);
    vector<int> crr{10,20,30,40,50};

    cout<<"The size of array is: "<<brr.size()<<endl;
    cout<<"The capacity of array is: "<<brr.capacity()<<endl;

    //To insert the element
    cout<<"Inserting elements: ";
    arr.push_back(5);
    arr.push_back(6);

    //printing the elements of array
    for(int i=0; i<brr.size(); i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;

    //To delete the element
    cout<<"Deleting elements: ";
    arr.pop_back();

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"The size of array is: "<< arr.size()<<endl;
    cout<<"The capacity of array is: "<<arr.capacity()<<endl;
    cout<<"The vector arr is empty or not?: "<<arr.empty()<<endl; //To check if array is empty or not
    return 0;
}
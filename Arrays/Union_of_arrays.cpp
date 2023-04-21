#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array1 : "<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements: "<<endl;

    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }

    int m;
    cout<<"Enter the size of array2 : "<<endl;
    cin>>m;
    vector<int> brr(m);
    cout<<"Enter the elements: "<<endl;

    for(int i=0; i<brr.size(); i++){
        cin>>brr[i];
    }

    vector<int> ans;

    //pushing all the elemets of arr in the ans
    for(int i=0; i<arr.size(); i++){
        ans.push_back(arr[i]);
    }

    //pushing all the elemets of brr in the ans
    for(int i=0; i<brr.size(); i++){
        ans.push_back(brr[i]);
    }

    //printing all the elements in the ans
    cout<<"Final array is : "<< endl;
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    } 
}

#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

int main(){
    vector<int> arr{1,2,2,2,2,2,3,4,5,6,7,8,9};
    vector<int> brr{1,2,2,2,7};

    vector<int> ans;
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<brr.size(); j++){
            if(arr[i] == brr[j]){
                brr[j]=INT_MIN; //to mark the element
                if(brr[j] != INT_MIN){
                    ans.push_back(arr[i]);
                }
            }
        }
    }
    //Printing the ans array
    cout<<"The final elements after the union are: ";
    for(auto i : ans) cout << i << " ";
}
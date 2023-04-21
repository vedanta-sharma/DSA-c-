#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr{1,2,2,2,2,2,3,4,5,6,7,8,9};
    vector<int> brr{1,2,7};

    vector<int> ans;
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<brr.size(); j++){
            if(arr[i] == brr[j]){
                brr[j]=-1; //to mark the element
                ans.push_back(arr[i]);
            }
        }
    }
    //Printing the ans array
    cout<<"The final elements after the intersection are: ";
    for(int k=0; k<ans.size(); k++){
        cout<<ans[k]<<" ";
    }
}
#include <iostream>
#include <vector>
using namespace std;

//Main function
int main(){
    vector<int> nums{1,2,3,5,6,7,2,4};
    while(nums[0] != nums[nums[0]]){
        swap(nums[0], nums[nums[0]]);
    }
    cout<<"The duplicate number is: "<<nums[0];
}
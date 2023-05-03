#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums{1,0,-1,-2,2,3,-3,4,-4,-1};
    int l=0, m=0, h=nums.size()-1;
    while(m<=h){
        if(nums[m]<0){
            swap(nums[l], nums[m]);
            l++, m++;
        }
        else{
            swap(nums[m],nums[h]);
            h--;
        }
    }
    for(int k=0; k<nums.size(); k++){
        cout<<nums[k]<<" ";
    }
}

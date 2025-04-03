#include<iostream>
using namespace std;
int main(){
    int nums[]={5,15,22,1,-15,-24};
    int size = 6;

    int smallest = INT8_MAX;

    for(int i = 0; i < size;i++){
        if(nums[i]<smallest){
            smallest = nums[i];
        }
    }
    cout << "smallest="<< smallest<< endl;
    return 0;
}
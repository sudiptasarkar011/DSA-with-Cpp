#include <iostream>
using namespace std;

int main(){
    int nums[] = {24,12,55,4,2,28};
    int size = 6;

    int smallest = INT_MAX;

    for(int i = 0; i<size; i++){
        if(nums[i]<smallest){
            smallest = nums[i];
        }
    }

    //alternative
    //smallest = min(nums[i], smallest); in the for loop

    cout << "Smallest : " << smallest << endl;
    return 0;
}
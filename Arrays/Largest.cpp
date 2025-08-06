#include <iostream>
using namespace std;

int main(){
    int nums[] = {32,41,20,27,38,47,43};
    int size = 7;

    int largest = INT_MIN;

    for (int i = 0; i < size; i++){
        if(nums[i]>largest){
            largest = nums[i];
        }
    }

    cout << "Largest = " << largest << endl;
    return 0;
}
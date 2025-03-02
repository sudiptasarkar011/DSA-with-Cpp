#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for(int i = 0; i<size; i++){
        if(arr[i]== target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {4,1,7,3,5,6,2,8};
    int size = 8;
    int target = 5;

    linearSearch(arr, 8, 5);

    cout << linearSearch(arr, size, target) << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    bool isPrime = true;

    for (int i = 2; i <= n-1; i++){
        if (n%i == 0){
            isPrime = false;
            break;
        }

    }

    if (isPrime == true){
        cout << "prime \n";
    }

    if (isPrime == false){
        cout << "non prime \n";
    }


    return 0;


}
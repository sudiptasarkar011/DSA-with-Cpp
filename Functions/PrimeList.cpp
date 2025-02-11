#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

void printPrimes(int N) {
    for (int i = 1; i <= N; i++) {
        if (isPrime(i))
            cout << i << " ";
    }
    cout << endl;
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    cout << "Prime numbers from 1 to " << N << " are: ";
    printPrimes(N);
    return 0;
}
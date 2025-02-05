#include <iostream>
using namespace std;

int main (){
    int marks;
    cout << "Enter the marks : ";
    cin >> marks;

    if (marks >= 90){
        cout << "A Grade" << endl;
    }
    else if (marks < 90 && marks >= 80){
        cout << "B Grade" << endl;
    }
    else {
        cout << "C Grade" << endl;
    }

    
    return 0;
}
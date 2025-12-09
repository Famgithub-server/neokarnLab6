#include<iostream>
using namespace std;

int main(){
    int sumOdd = 0, sumEven = 0, n;
    while (1) {
        cout << "Enter an integer: ";
        cin>>n;
        if (n == 0) break;
        if (n % 2 == 0) sumEven++;
        else sumOdd++;
    }
    cout << "#Even numbers = "<<sumEven;
    cout << "\n#Odd numbers = "<<sumOdd;
    return 0;
}
#include <iostream>
using namespace std;

int add(int a, int b){
    int total = a + b;
    return total;
}

int subtract(int a, int b){
    int total = a - b;
    return total;
}

int main(){
    int firstNum, secondNum;
    cout << "Enter First Number: ";
    cin >> firstNum;

    cout << "Enter Second Number: ";
    cin >> secondNum;

    cout << "The Sum is: " << add(firstNum,secondNum);
    cout << " The Difference is: " << subtract(firstNum,secondNum);
    return 0;
}
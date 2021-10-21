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

int multiply(int a, int b){
    int total = a * b;
    return total;
}

int divide(int a, int b){
    int total = a / b;
    return total;
}

int modulo(int a, int b){
    int total = a % b;
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
    cout << "The Product is: " << multiply(firstNum,secondNum);
    cout << "The Quotient is: " << divide(firstNum,secondNum);
    cout << "The Modulo is: " << modulo(firstNum,secondNum);
    return 0;
}
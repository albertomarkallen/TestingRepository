#include <iostream>
using namespace std;

int add(int a, int b){
    int total = a + b;
    return total;
}

int main(){
    int firstNum, secondNum;
    cout << "Enter First Number: ";
    cin >> firstNum;

    cout << "Enter Second Number: ";
    cin >> secondNum;

    cout << "The Result is: " << add(firstNum, secondNum);
        return 0;
}
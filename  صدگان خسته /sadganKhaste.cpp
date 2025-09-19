#include <iostream>

using namespace std;

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    int copyNum1 = num1;
    int copyNum2 = num2;
    int newNum1 = 0;
    int newNum2 = 0;
    while(num1 != 0 && num2 != 0){
        newNum1 = newNum1 * 10;
        newNum2 = newNum2 * 10;
        newNum1 = newNum1 + (num1 % 10);
        newNum2 = newNum2 + (num2 % 10);
        num1 = num1 / 10;
        num2 = num2 / 10;
    }
    if(newNum1 < newNum2){
        cout << copyNum1 << " < " << copyNum2 << "\n";
    }
    else if(newNum2 < newNum1){
        cout << copyNum2 << " < " << copyNum1 << "\n";
    }
    else{
        cout << copyNum1 << " = " << copyNum2 << "\n";
    }
}
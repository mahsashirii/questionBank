#include <iostream>
#include <string>

using namespace std;

int main(){
    string number;
    cin >> number;
    for(int i = 0; i < number.size(); i ++){
        cout << number[i] << ":" << " ";
        int digit = number[i] - '0';
        for(int j = 0; j < digit; j ++){
            cout << digit;
        }
        cout << "\n";
    }
}
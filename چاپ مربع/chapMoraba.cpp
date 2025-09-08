#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i ++){
        cout << "*";
    }
    cout << "\n";
    for(int i = 2; i < n; i ++){
        cout << "*";
        for(int j = 2; j < n; j ++){
            cout << " ";
        }
        cout << "*" << "\n";
    }
    for(int i = 0; i < n; i ++){
        cout << "*";
    }
    cout << "\n";
}
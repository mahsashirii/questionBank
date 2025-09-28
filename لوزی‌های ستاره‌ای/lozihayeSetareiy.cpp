#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int half = n / 2;
    for (int i = 0; i < n; i++) {
        int stars = n - 2 * abs(half - i); 
        int spaces = abs(half - i);      
        for (int j = 0; j < spaces; j++) cout << " ";
        for (int j = 0; j < stars; j++) cout << "*";
        for (int j = 0; j < 2 * spaces; j++) cout << " ";
        for (int j = 0; j < stars; j++) cout << "*";
        cout << "\n";
    }
    return 0;
}

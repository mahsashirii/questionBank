#include <iostream>

using namespace std;

int main(){
    int a, b, l;
    cin >> a >> b >> l;
    if(l % 2 == 0){
        cout << (a * (l / 2)) + (b * (l / 2)) << "\n";
    }
    else{
        cout << (a * (l / 2)) + (b * (l / 2)) + a << "\n";
    }
}
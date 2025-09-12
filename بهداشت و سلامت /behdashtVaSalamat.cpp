#include <iostream>

using namespace std;

int main(){
    int score, n;
    cin >> score >> n;
    if(n == 0){
        cout << 20 << "\n";
    }
    else if(n == 7){
        cout << score << "\n";
    }
    else{
        if(n >= score){
            cout << 0 << "\n";
        }
        else{
            cout << score - n << "\n";
        }
    }
}
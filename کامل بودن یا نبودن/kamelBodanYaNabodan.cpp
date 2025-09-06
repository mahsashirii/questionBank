#include <iostream>

using namespace std;

int main(){
    int number;
    cin >> number;
    int ans = 0;
    for(int i = 1; i < number; i ++){
        if(number % i == 0){
            ans += i;
        }
    }
    if(ans == number){
        cout << "YES" << "\n";
        return 0;
    }
    cout << "NO" << "\n";
    return 0;
}
#include <iostream>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < k; i ++){
        if(n >= 0){
            n = n / 2;
        }
        else if(n % 2 == 0){
            n = n / 2;
        }
        else{
            n = (n / 2) - 1;
        }
    }
    cout << n << "\n";
}
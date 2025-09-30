#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n){
    if(n == 1)
        return 0;
    for(int i = 2; i <= sqrt(n); i ++)
        if(n % i == 0)
            return 0;
    return 1;
}

int main(){
    int a, b;
    cin >> a >> b;
    int flag = 0;
    for(int i = a + 1; i < b; i ++){
        if(isPrime(i)){
            if(flag == 0){
                cout << i;
                flag = 1;
            }
            else{
                cout << ',' << i;
            }
        }
    }
    cout << "\n";
}
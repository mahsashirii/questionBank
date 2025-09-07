#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long n;
    cin >> n;
    long long ans = 1;
    while(ans <= n){
        ans = ans * 2;
    }
    cout << ans << "\n";
}
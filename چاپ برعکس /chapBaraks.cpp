#include <iostream>

using namespace std;

int main(){
    int numbers[1000];
    int n = 1;
    int cnt = 0;
    while(n != 0){
        cin >> n;
        numbers[cnt] = n;
        cnt ++;
    }
    for(int i = cnt - 2; i >= 0; i --){
        cout << numbers[i] << "\n";
    }
}
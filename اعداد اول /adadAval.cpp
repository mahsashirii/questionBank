#include <iostream>

using namespace std;

int main(){
    int n1, n2;
    cin >> n1 >> n2;
    int flag = 1;
    if(n1 == 1){
        n1 = 2;
    }
    for(int i = n1; i <= n2; i ++){
        for(int j = 2; j <= i / 2; j ++){
            if(i % j == 0){
                flag = 0;
            }
        }
        if(flag == 1){
            cout << i << "\n";
        }
        flag = 1;
    }
}
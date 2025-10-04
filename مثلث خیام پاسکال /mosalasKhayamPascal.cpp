#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    long long row[101] = {0};
    row[1] = 1;
    for(int i = 1; i <= n; i ++){
        row[i] = 1;
        for(int j = i - 1; j > 1; j --){
            row[j] = row[j] + row[j - 1];
        }
        for(int j = 1; j <= i; j ++){
            if(j > 1){
                cout << " ";
            }
            cout << row[j];
        }
        cout << "\n";
    }
}
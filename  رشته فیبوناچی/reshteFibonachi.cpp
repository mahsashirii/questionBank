#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> fibonachi;
    int a = 0;
    int b = 1;
    int next;
    vector<char> isFib(n, '-');
    while(a <= n){
        isFib[b - 1] = '+';
        fibonachi.push_back(b);
        next = a + b;
        a = b;
        b = next;
    }
    for(int i = 0; i < n; i ++){
        cout << isFib[i];
    }
    cout << "\n";
}
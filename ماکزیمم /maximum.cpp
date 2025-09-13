#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a;
    int maximum = 1;
    for(int i = 0; i < n; i ++){
        cin >> a;
        if(maximum < a){
            maximum = a;
        }
    }
    cout << maximum << "\n";
}
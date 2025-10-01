#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int w;
    int maximum = 0;
    int maximumIndex = 0; 
    for(int i = 1; i <= n; i ++){
        cin >> w;
        if(maximum < w){
            maximum = w;
            maximumIndex = i;
        }
    }
    cout << maximumIndex << "\n";
}
#include <iostream>

using namespace std;

int main(){
    string str[7];
    str[0] = "sib";
    str[1] = "sabze";
    str[2] = "soamagh";
    str[3] = "sonbol";
    str[4] = "samanoo";
    str[5] = "senjed";
    str[6] = "sir";
    int n;
    cin >> n;
    for(int i = 0; i < n; i ++){
        cout << str[i] << "\n";
    }
}
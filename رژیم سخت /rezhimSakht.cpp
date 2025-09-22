#include <iostream>

using namespace std;

int main(){
    string str;
    cin >> str;
    int nRed = 0;
    int nYellow = 0;
    for(int i = 0; i < str.size(); i ++){
        if(str[i] == 'R'){
            nRed ++;
        }
        else if(str[i] == 'Y'){
            nYellow ++;
        }
    }
    if(nRed >= 3 || (nRed >= 2 && nYellow >= 2) || nRed + nYellow == 5){
        cout << "nakhor lite" << "\n";
    }
    else{
        cout << "rahat baash" << "\n";
    }
}
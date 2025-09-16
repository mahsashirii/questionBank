#include <iostream>
#include <string>

using namespace std;

int main(){
    string str1;
    cin >> str1;
    string str2 = "";
    for(int i = str1.size() - 1; i >= 0; i --){
        str2 = str2 + str1[i];
    }
    if(str1 == str2){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }
}
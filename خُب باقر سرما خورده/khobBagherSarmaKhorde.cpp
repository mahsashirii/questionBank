#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    int flag = 0;
    for(int i = 1; i < 5 + 1; i ++){
        cin >> str;
        if(str.find("MOLANA") != string::npos || str.find("HAFEZ") != string::npos){
            if(flag != 0){
                cout << " ";
            }
            cout << i;
            flag = 1;
        }
    }
    if(flag == 0){
        cout << "NOT FOUND!" << "\n";
    } 
    else{
        cout << "\n";
    }
}
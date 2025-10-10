#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    string name;
    int cnt;
    int ch[26];
    int ans = 0;
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < 26; j ++){
            ch[j] = 0;
        }
        cnt = 0;
        cin >> name;
        for(int j = 0; j < name.size(); j ++){
            if(ch[name[j] - 97] == 0){
                cnt ++;
                ch[name[j] - 97] = 1;
            }
        }
        if(ans < cnt){
            ans = cnt;
        }
    }
    cout << ans << "\n";
}
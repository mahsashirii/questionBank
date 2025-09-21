#include <iostream>
#include <set>

using namespace std;

int main(){
   set<string> days{};
   string day;
   int n;
   for(int i = 0; i < 3; i ++){
      cin >> n;
      for(int j = 0; j < n; j ++){
         cin >> day;
         if(days.find(day) == days.end()){
            days.insert(day);
         }
      }
   }
   cout << 7 - days.size() << "\n";
}
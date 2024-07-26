#include <iostream>
#include <map>
using namespace std;

int main() {
  string str = "goodmorning";
  map<char, int> myMap;

  for (char ch: str) {
    auto it = myMap.find(ch);

    if (it != myMap.end()) {
      it->second = it->second + 1;
    } else {
      myMap.insert(pair<char, int>(ch, 1));
    }
  }

  for(auto it = myMap.begin(); it != myMap.end(); it++) {
    cout << it->first << ": " << it->second << "\n";
  }

  return 0;
}
#include <cstddef>
#include <iostream>
#include <string>
using namespace std;

bool verifyIntegrity(string *str) {
  if (stoi(str[0]) > stoi(str[1])) {
    return false;
  }
  return true;
}

string* genereteSubstr(string orig,size_t pos) {
  string *strAr = new string[2];
  string str1, str2;
  size_t i = 0;
  for (i = 0; i<=pos; i++) {
    str1+=orig[i];
  }
  for (; i<orig.length(); i++) {
    str2+=orig[i];
  }
  strAr[0] = str1;
  strAr[1]=str2;
  return strAr;
}

int main() {
  string s;
  cin >> s;
  size_t i;
  int zrCount=0;
  for (i = 0; i < s.length(); i++) {
    if (s[i] == '0') {
      zrCount++;
      continue;
    }
  string *strs = genereteSubstr(s, i);
  bool answ=verifyIntegrity(strs);
  if (!answ) {
    break;
  }
  }
  cout<<i-zrCount;
  return 0;
}

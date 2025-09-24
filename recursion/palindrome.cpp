#include <iostream>
#include <math.h>
#include<string.h>
#include<array>
using namespace std;
bool palindrome(int i, string &s) {
    if (i >= s.size() / 2) return true;
    if (s[i] != s[s.size() - i - 1]) return false;
    return palindrome(i + 1, s);
}

int main(){
  string s;
  cout<<"enter the name or number";
  cin>>s;
  cout<<palindrome(0,s);
  return 0;
}
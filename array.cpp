#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
using namespace std;
int main(){
  int arr[2][5];
  string str;
  cout<< "enter a string\n";
  getline(cin,str);
  string s = str;
  int len = s.length();
  cout<<"enter 5 numbers of 1st row\n";
  cin>>arr[0][0]>>arr[0][1]>>arr[0][2]>>arr[0][3]>>arr[0][4];
  cout<<"enter 5 numbers of 2nd row\n";
  cin>>arr[1][0]>>arr[1][1]>>arr[1][2]>>arr[1][3]>>arr[1][4];

  cout<<"the numbers of 1st row are\n"<<arr[0][0]<<"\n"<<arr[0][1]<<"\n"<<arr[0][2]<<"\n"<<arr[0][3]<<"\n"<<arr[0][4]<<"\n";
  cout<<"the numbers of 2nd row are\n"<<arr[1][0]<<"\n"<<arr[1][1]<<"\n"<<arr[1][2]<<"\n"<<arr[1][3]<<"\n"<<arr[1][4]<<"\n";
  cout<<"the string first and last word is "<<s[0]<<" "<<s[s.length()-1];
  return 0;
}
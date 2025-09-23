#include <iostream>
#include <math.h>
#include<string.h>
using namespace std;
int cnt = 0;
void print(){
if (cnt==5){
    return;
  }
  else
  cnt++;
  cout<<cnt<<endl;
  print();
}

int main(){
  print();
  return 0;
}
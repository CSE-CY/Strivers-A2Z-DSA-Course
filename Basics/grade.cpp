#include <iostream>
#include <math.h>
#include<string.h>
using namespace std;
int main(){
  int marks;
  cout<<"enter the marks";
  cin>>marks;
  if(marks>=80){
    cout<<"A";
  }
  else if(marks>=60){
    cout<<"B";
  }
  else if(marks>=50){
    cout<<"C";
  }
  else if(marks>=45){
    cout<<"D";
  }
  else if(marks>=25){
    cout<<"E";
  }
  else{
    cout<<"F";
  }
  return 0;
}

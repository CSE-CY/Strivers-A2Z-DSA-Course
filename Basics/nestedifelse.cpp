#include <iostream>
#include <math.h>
#include<string.h>
using namespace std;
int main(){
  int age;
  cout <<"enter the age";
  cin>>age;
  if(age<18){
    cout<<"not eligible for job";
  }
  else if(age<58){
    cout<<"eligible for job";
    if(age<58 && age>54){
      cout<<" but retirement soon";
    }
  }
  // else if(age<55){
  // cout<<"eligible for job";
  // }
  // else if(age<58){
  //   cout<<" eligible for job but retirement soon";
  // }
  else{
    cout<<"retirement soon";
  }
  return 0;
}

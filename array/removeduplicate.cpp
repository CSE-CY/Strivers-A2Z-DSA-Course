#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
#include<vector>
using namespace std;
int duplication(vector<int> &arr,int n){
  int i=0;
  for(int j=1;j<n;j++){
    if(arr[i] !=arr[j]){
      arr[i+1]=arr[j];
      i++;
    }}
  return i+1;}
int main(){
int n;
  cout<<"array size"<<endl;
  cin>>n;
  vector<int>arr(n);
  cout<<"enter the value"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"total count of number without duplictaion is "<<duplication(arr,n)<<endl;
  return 0;}
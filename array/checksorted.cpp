#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
#include<vector>
using namespace std;
int checksorted(vector<int> &arr,int n){
  for(int i=0;i<n-1;i++){
    if(arr[i]<=arr[i+1]){}
    else{return false;}}
  return true;}
int main(){
int n;
  cout<<"array size"<<endl;
  cin>>n;
  vector<int>arr(n);
  cout<<"enter the value"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int result=checksorted(arr,n);
  if (result==1)
  cout<<"array is sorted";
else
 {cout<<"array is not sorted";}
  return 0;}
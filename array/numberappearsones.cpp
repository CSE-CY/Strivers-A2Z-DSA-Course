#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
#include<vector>
using namespace std;
int appearonce(vector<int> &arr,int n){
  int xorr=0;
  for(int i=0;i<n;i++){
    xorr=xorr^arr[i];
  }
  return xorr;
}
int main(){
int n;
  cout<<"array size"<<endl;
  cin>>n;
  vector<int>arr(n);
  cout<<"enter the value"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  
  cout<<"number that appears once "<<appearonce(arr,n)<<endl;
  return 0; 

}
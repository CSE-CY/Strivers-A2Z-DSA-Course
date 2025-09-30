#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
#include<vector>
using namespace std;
int linear( vector<int> &arr,int n,int y){
  for(int i=0;i<n;i++){
    if(arr[i]==y){
      return i;
    }
  }
  return-1;
}
int main(){
int n;
int y;
  cout<<"array size"<<endl;
  cin>>n;
  vector<int>arr(n);
  cout<<"enter the value"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"enter the number to search";
    cin>>y;
  cout<<"the index of the number is "<<linear(arr,n,y);
  

  return 0;}
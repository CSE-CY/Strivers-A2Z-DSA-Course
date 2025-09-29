#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
#include<vector>
using namespace std;
vector<int> shift(vector<int> &arr,int n){
  int temp= arr[0];
  for(int i=1;i<n;i++){
    arr[i-1]=arr[i];}
  arr[n-1]=temp;
  return arr;

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
  cout<<"the array is ";
   shift(arr,n);
  for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";}
  return 0; 

}
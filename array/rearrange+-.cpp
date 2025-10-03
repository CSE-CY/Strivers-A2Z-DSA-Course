#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
#include<vector>
using namespace std;
void rearrange(vector<int> &arr,int n){
  vector<int>result(n);
  int positiveindex=0;
  int negativeindex=1;
  for(int i=0;i<n;i++){
    if(arr[i]<0){
      result[negativeindex]=arr[i];
      negativeindex+=2;
    }
    else{
      result[positiveindex]=arr[i];
      positiveindex+=2;
    }
  }
  for(int i=0;i<n;i++){
    cout<<result[i]<<" ";
  }
}
int main(){
int n;
  cout<<"even array size"<<endl;
  cin>>n;
  vector<int>arr(n);
  cout<<"enter half + and - value"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  rearrange(arr,n);
  return 0;
}
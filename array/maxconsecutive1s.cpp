#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
#include<vector>
using namespace std;
int findmaxconsecutive1s(vector<int> &arr,int n){
  int maxi=0;
  int count=0;
  for(int i=0;i<n;i++){
    if(arr[i]==1){
      count++;
      maxi=max(maxi,count);
    }else{
        count=0;}}
    return maxi;
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
  
  cout<<"maximum consecutive 1s number = "<<findmaxconsecutive1s(arr,n)<<endl;
  return 0; 

}
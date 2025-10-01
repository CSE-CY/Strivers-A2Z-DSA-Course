#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
#include<vector>
using namespace std;
int missing(vector<int> &arr,int n){
  int sum= n*(n+1)/2;
  int total=0;
  for(int i=0;i<n-1;i++){
    total=total+arr[i];
  }return sum-total;
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
  
  cout<<"missing number = "<<missing(arr,n+1)<<endl;
  return 0; 

}
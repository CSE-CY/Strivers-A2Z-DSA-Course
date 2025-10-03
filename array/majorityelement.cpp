#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;
int majority(vector<int> &arr,int n) {
  int count=0;
  int el;
  for(int i=0;i<n;i++)
  {
    if(count==0){
      count=1;
      el=arr[i];
    }
    else if(arr[i]==el){ 
      count++;
    }
    else{
      count--;
    }
  }
  int count1=0;
  for(int i=0;i<n;i++){
    if(arr[i] == el){count1++;
  }}
  if(count1>n/2){
    return el;
  }
  return -1;
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
  cout<<"Majority element in array is "<<majority(arr,n)<<endl;
  return 0; 

}
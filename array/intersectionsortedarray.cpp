#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
#include<vector>
using namespace std;
vector<int> intersection( vector<int> &a,vector<int> &b,int n,int m){
  int i=0;
  int j=0;
  vector<int> temp;
  while(i<n&&j<m){
    if(a[i]<b[j]){
    i++;}
    else if(b[j]>a[i]) {
      j++;}
      else{
        temp.push_back(a[i]);
        i++;
      }}
return temp;}
int main(){
int n;
int m;
  cout<<"array size"<<endl;
  cin>>n;
  vector<int>a(n);
  cout<<"enter the value"<<endl;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  cout<<"array size"<<endl;
  cin>>m;
  vector<int>b(m);
  cout<<"enter the value"<<endl;
  for(int j=0;j<m;j++){
    cin>>b[j];
  }
  vector<int>result = intersection(a,b,n,m);
  cout<<"union of the array is ";
  for(int i=0;i<result.size();i++){
    cout<<result[i]<<"";
  }

  return 0;}
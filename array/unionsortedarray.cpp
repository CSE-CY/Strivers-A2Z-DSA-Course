#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
#include<vector>
using namespace std;
vector<int> arrunion( vector<int> &a,vector<int> &b){
  int n1=a.size();
  int n2=b.size();
  int i=0;
  int j=0;
  vector<int> temp;
  while(i<n1&&j<n2){
    if(a[i]<=b[j]){
      if (temp.size()==0 || temp.back() !=a[i]){
      temp.push_back(a[i]);
    }
    i++;}
    else {
        if (temp.size()==0 || temp.back() !=b[j]){
      temp.push_back(b[j]);
    }
    j++;}
  }
  while(j<n2){
    if (temp.size()==0 || temp.back() !=b[j]){
      temp.push_back(b[j]);
    }
    j++;}
  while(i<n1){
   if (temp.size()==0 || temp.back() !=a[i]){
      temp.push_back(a[i]);
    }
    i++;}
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
  vector<int>result = arrunion(a,b);
  cout<<"union of the array is ";
  for(int i=0;i<result.size();i++){
    cout<<result[i]<<"";
  }

  return 0;}
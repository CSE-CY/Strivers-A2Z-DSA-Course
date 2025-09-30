#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
#include<vector>
using namespace std;
vector<int>movezero(vector<int> &arr,int n){
  int j=-1;
  for(int i=0;i<n;i++){
    if(arr[i]==0){
    j=i;
    break;}
  }
  if(j==-1)return arr;

  for(int i=j+1 ;i<n;i++){
    if(arr[i] !=0){
     swap(arr[i],arr[j]);
      j++;
    }}
  return arr;}
int main(){
int n;
  cout<<"array size"<<endl;
  cin>>n;
  vector<int>arr(n);
  cout<<"enter the value"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  movezero(arr,n);
   cout << "Array after moving zeros: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
  return 0;}
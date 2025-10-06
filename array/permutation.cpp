#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> nextgreaterpermutation(vector<int> &arr,int n){
  int index=-1;
  for(int i=n-2;i>=0;i--){
    if(arr[i]<arr[i+1]){
      index=i;
      break;
    }
  }
  if (index==-1){
    reverse(arr.begin(),arr.end());
    return arr;
  }
  for(int i=n-1;i>index;i--){
    if(arr[i]>arr[index]){
      swap(arr[i],arr[index]);
      break;
    }
  }
  reverse(arr.begin()+index+1,arr.end()); 
  
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
int main(){
int n;
  cout<<" array size"<<endl;
  cin>>n;
  vector<int>arr(n);
  cout<<"enter the elements of the array"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  nextgreaterpermutation(arr,n);
  return 0;
}
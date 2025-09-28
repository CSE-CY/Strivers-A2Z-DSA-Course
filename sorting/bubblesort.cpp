#include <iostream>
#include <math.h>
#include<string.h>
#include<array>
#include<vector>
using namespace std;
void sorting(vector<int>&arr,int n){
  for(int i=n-1;i>=0;i--)
  {
    // int didswap=0;
    for(int j = 0; j <= i-1; j++)
    {
      if(arr[j] > arr[j+1]){
        int temp = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = temp;
        // didswap=1;
      }
    }
    // if(didswap==0)
    // { break;}
    // cout<<"runs"<<endl;
  }
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
  sorting(arr,n);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0; 
}
// tc = o(n^2)worst and average , bestcase=o(n)
#include <iostream>
#include <math.h>
#include<string.h>
#include<array>
#include<vector>
using namespace std;
void sorting(vector<int> &arr,int n){
 {
  for(int i=0;i<=n-2;i++)
  {
    int mini = i;
    for(int j = i; j <= n-1; j++)
    {
      if(arr[j] < arr[mini]){
        mini = j;
      }
    }
    int temp = arr[i];
    arr[i] = arr[mini];
    arr[mini] = temp;
  }
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
// tc = o(n^2)
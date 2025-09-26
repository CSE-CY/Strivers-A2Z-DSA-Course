#include <iostream>
#include <math.h>
#include<string.h>
#include<array>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
  int n;
  cout<<"enter the size of array";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cout<<"enter the number"<<endl;
    cin>>arr[i];
  }
  unordered_map<int,int>mpp;
  for(int i=0;i<n;i++){
    mpp[arr[i]]++;
  }
  int q;
  cout<<"enter the number of query"<<endl;
  cin>>q;
  while(q--)
  {
    int number;
    cout<<"enter the number for detais ";
    cin>>number;
    cout<<mpp[number]<<endl;
  }
  return 0;
}

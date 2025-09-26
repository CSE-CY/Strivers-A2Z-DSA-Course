#include <iostream>
#include <math.h>
#include<string.h>
#include<array>
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
  int hash[13]={0};
  for(int i=0;i<n;i++){
    hash[arr[i]]+=1;
  }
  int q;
  cout<<"enter the number of query"<<endl;
  cin>>q;
  while(q--)
  {
    int number;
    cout<<"enter the number for detais ";
    cin>>number;
    cout<<hash[number]<<endl;
  }
  return 0;
}

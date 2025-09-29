#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
#include<vector>
using namespace std;
int largestelement(vector<int> &arr,int n){
  int largest= arr[0];
  for(int i=0;i<n;i++){
    if(arr[i]>largest)
    largest=arr[i];
  }return largest;
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
  
  cout<<"largest number = "<<largestelement(arr,n)<<endl;
  return 0; 

}

#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
#include<vector>
#include<climits>
using namespace std;
int secondlargest(vector<int> &arr,int n){
  int largest= arr[0];
  int secondlargest =-1;
  for(int i=0;i<n;i++){
    if(arr[i]>largest){
      secondlargest=largest;
    largest=arr[i];}
    else if(arr[i]<largest&&arr[i]>secondlargest){
      secondlargest=arr[i];
    }
  }return secondlargest;
}
int secondsmallest(vector<int> &arr,int n){
  int smallest= arr[0];
  int secondsmallest =INT_MAX;
  for(int i=0;i<n;i++){
    if(arr[i]<smallest){
      secondsmallest=smallest;
    smallest=arr[i];}
    else if(arr[i]!=smallest&&arr[i]<secondsmallest){
      secondsmallest=arr[i];
    }
  }return secondsmallest;
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
  
  cout<<"2nd largest number & 2nd smallest number = "<<secondlargest(arr,n)<<" and "<< secondsmallest(arr,n)<<endl;
  return 0; 

}
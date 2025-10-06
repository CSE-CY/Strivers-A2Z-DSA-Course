#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
void leaders(vector<int> &arr,int n){
  vector<int> result;
  int maxi=INT_MIN;
  for(int i=n-1;i>=0;i--){
    if(arr[i]>=maxi){
      result.push_back(arr[i]);
    }
    maxi=max(maxi,arr[i]);
  }
  reverse(result.begin(),result.end());
  for(int i=0;i<result.size();i++){
    cout<<result[i]<<" ";
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
  leaders(arr,n);
  return 0;
}
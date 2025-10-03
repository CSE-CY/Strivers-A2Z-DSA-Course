#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
#include<vector>
using namespace std;
int profit(vector<int> &arr,int n){
  int mini=arr[0];
  int maxprofit=0;
  for(int i=0;i<n;i++){
    int cost=arr[i]-mini;
    maxprofit=max(maxprofit,cost);
    mini=min(mini,arr[i]);
  }
  return maxprofit;
}
int main(){
int n;
  cout<<"total days"<<endl;
  cin>>n;
  vector<int>arr(n);
  cout<<"enter the prices"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"maximum profit you can make on stocks is = "<<profit(arr,n)<<endl;
  return 0; 

}
#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
#include<vector>
#include<algorithm>
#include<climits>
#include<unordered_set>
using namespace std;
void longestconsecutive(vector<int> &arr,int n){
  if(n==0){
    cout<<0;
    return;
  }
  int longest=1;
  unordered_set<int> s;
  for(int i=0;i<n;i++){
    s.insert(arr[i]);
  }
  for(auto it:s){
    if(s.find(it-1)==s.end()){
      int count=1;
      int x=it;
      while(s.find(x+1)!=s.end()){
        x++;
        count++;
      }
      longest=max(longest,count);
    }
  }
  cout<<longest;
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
  longestconsecutive(arr,n);
  return 0;
}
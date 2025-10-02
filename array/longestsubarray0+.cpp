#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
#include<vector>
#include<map>
using namespace std;
int getLongestSubarray(vector<int>& a, int k,int n) {
  int left=0;
  int right=0;
    long long sum = a[0];
    int maxLen = 0;
    while(right<n){
      while(left<=right && sum>k){
        sum-=a[left];
        left++;
      }
      if(sum==k){
        maxLen=max(maxLen,right-left+1);
      }
      right++;
      if(right<n)sum+=a[right];
    }
    return maxLen;
}
int main(){
int n;
int k;
cout<<"Sum";
cin>>k;
  cout<<"array size"<<endl;
  cin>>n;
  vector<int>arr(n);
  cout<<"enter the value"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"Longest sub array for sum  = "<<getLongestSubarray(arr,k,n)<<endl;
  return 0; 

}
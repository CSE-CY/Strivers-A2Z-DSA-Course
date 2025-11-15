#include <iostream>
#include <math.h>
#include<string.h>
#include<array>
#include<vector>
#include<algorithm>
using namespace std;
int lowerbound(vector<int>& arr, int target,int n) {
    int low = 0, high = n - 1, ans = n;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] >= target) {
            ans = mid;
          high = mid - 1;}
        else low = mid + 1;
    }
    return ans;
}
int upperbound(vector<int>& arr, int target,int n) {
    int low = 0, high = n - 1, ans = n;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] > target) {
            ans = mid;
          high = mid - 1;}
        else low = mid + 1;
    }
    return ans;
}
pair<int, int> firstandlastpostion(vector<int>& arr, int n, int x) {
	int l = lowerbound(arr, x, n);
  if(l==n || arr[l]!=x){
    return {-1,-1};
  }
	return {l, upperbound(arr, x, n) - 1};
}
int main(){
  int n;
  cout<<"array size"<<endl;
  cin>>n;
  cout<<"enter the number to find"<<endl;
  int target;
  cin>>target;
  vector<int>arr(n);
  cout<<"enter the value"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  pair<int, int> result = firstandlastpostion(arr, n, target);
  cout<<"the first and last position is "<<result.first<<" "<<result.second<<endl;
  return 0;
}
#include <iostream>
#include <math.h>
#include<string.h>
#include<array>
#include<vector>
#include<algorithm>
using namespace std;
int firstoccurrence(vector<int>& arr, int target,int n) {
    int low = 0, high = n - 1, first = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            first = mid;
          high = mid - 1;}
        else if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return first;
}
int lastoccurence(vector<int>& arr, int target,int n) {
    int low = 0, high = n - 1, last = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            last = mid;
          low = mid + 1;}
        else if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return last;
}
pair<int, int> firstandlastpostion(vector<int>& arr, int n, int x) {
	int first = firstoccurrence(arr, x, n);
  if(first==-1){
    return {-1,-1};
  }
  int last = lastoccurence(arr, x, n);
	return {first,last};
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
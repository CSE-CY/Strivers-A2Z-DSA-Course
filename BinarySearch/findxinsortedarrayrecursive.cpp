#include <iostream>
#include <math.h>
#include<string.h>
#include<array>
#include<vector>
#include<algorithm>
using namespace std;
int binarySearch(vector<int>& arr, int target,int n, int low, int high) {
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) return mid;
        else if (target > arr[mid]) return binarySearch(arr, target, n, mid + 1, high);
        else return binarySearch(arr, target, n, low, mid - 1);
    }
    return -1;
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
  if(binarySearch(arr,target,n,0,n-1)==-1)
    cout<<"the value is not found"<<endl;
  else
  cout<<"the index is "<<binarySearch(arr,target,n,0,n-1)<<endl;
  cout<<"the value is "<<arr[binarySearch(arr,target,n,0,n-1)]<<endl;

  return 0; 
}
// Time Complexity: O(log₂(n))

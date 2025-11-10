// floor is the greatest element less than or equal to x
// ceil is the smallest element greater than or equal to x
#include <iostream>
#include <math.h>
#include<string.h>
#include<array>
#include<vector>
#include<algorithm>
using namespace std;
int findFloor(vector<int>& arr, int n, int x) {
	int low = 0, high = n - 1;
	int ans = -1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] <= x) {
			ans = arr[mid];
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return ans;
}
int findCeil(vector<int>& arr, int n, int x) {
	int low = 0, high = n - 1;
	int ans = -1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] >= x) {
			ans = arr[mid];
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}
	return ans;
}

pair<int, int> getFloorAndCeil(vector<int>& arr, int n, int x) {
	int f = findFloor(arr, n, x);
	int c = findCeil(arr, n, x);
	return make_pair(f, c);
}

int main(){
  int n;
  cout<<"array size"<<endl;
  cin>>n;
  cout<<"enter the number to find floor and ceil of"<<endl;
  int target;
  cin>>target;
  vector<int>arr(n);
  cout<<"enter the value"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  pair<int, int> result = getFloorAndCeil(arr, n, target);
  cout<<"the floor and ceil are "<<result.first<<" and "<<result.second<<endl;

  return 0;
}
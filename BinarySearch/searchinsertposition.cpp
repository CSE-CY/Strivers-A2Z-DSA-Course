#include <iostream>
#include <math.h>
#include<string.h>
#include<array>
#include<vector>
#include<algorithm>
using namespace std;
int searchposition(vector<int>& arr, int target,int n) {
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

int main(){
  int n;
  cout<<"array size"<<endl;
  cin>>n;
  cout<<"enter the number to insert"<<endl;
  int target;
  cin>>target;
  vector<int>arr(n);
  cout<<"enter the value"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"the index where "<<target<<" can be inserted is "<<searchposition(arr,target,n)<<endl;
  
  return 0; 
}
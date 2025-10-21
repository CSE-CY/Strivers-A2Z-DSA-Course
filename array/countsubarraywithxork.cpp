#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
#include<vector>
#include<map>
#include<unordered_map> 
#include<set>
using namespace std;
int subarraysWithXorK(vector<int> &a, int k,int n) {
    int xr = 0;
    map<int, int> mpp;
    mpp[xr]++;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        xr = xr ^ a[i];
        int x = xr ^ k;
        cnt += mpp[x];
        mpp[xr]++;
    }
    return cnt;
}
int main(){
int n;
int k;
cout<<"XOR";
cin>>k;
  cout<<"array size"<<endl;
  cin>>n;
  vector<int>arr(n);
  cout<<"enter the value"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"count of subarrays with XOR  = "<<subarraysWithXorK(arr,k,n)<<endl;
  return 0;

}
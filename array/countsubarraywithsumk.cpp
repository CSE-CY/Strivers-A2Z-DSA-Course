#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
#include<vector>
#include<map>
using namespace std;
int findSubarrayCountwithSumK(vector<int>& a, int k,int n) {
    map<int, int> mpp;
    int presum = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        presum += a[i];
        int rem = presum - k;
        count += mpp[rem];
        mpp[presum]++;
    }
    return count;
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
  cout<<"count of subarrays with sum  = "<<findSubarrayCountwithSumK(arr,k,n)<<endl;
  return 0; 

}
#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
#include<vector>
#include<map>
using namespace std;
int getLongestSubarray(vector<int>& a, int k,int n) {
    map<int, int> preSumMap;
    int sum = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }
        int rem = sum - k;
        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
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
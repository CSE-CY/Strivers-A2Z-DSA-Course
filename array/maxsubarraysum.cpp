#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
#include<vector>
#include<climits>
using namespace std;
long long maxSubarraysum(vector<int>& a,int n) {
  long long maxi=LONG_MIN;
  long long sum=0;
  int start = 0;
  int ansStart = -1, ansEnd = -1;
    for (int i = 0; i < n; i++) {
      if(sum==0)start=i;
        sum += a[i];
        if (sum > maxi) {
            maxi = sum;
            ansStart=start;
            ansEnd=i;
        }
        if (sum < 0) {
            sum = 0;
        }
    }
    cout << "The subarray is: [";
    for (int i = ansStart; i <= ansEnd; i++) {
        cout << a[i] << " ";
    }
    cout << "]"<<endl;
    return maxi;
}
int main(){
int n;
  cout<<"array size"<<endl;
  cin>>n;
  vector<int>arr(n);
  cout<<"enter the value"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"subarray sum = "<<maxSubarraysum(arr,n)<<endl;
  return 0; 

}
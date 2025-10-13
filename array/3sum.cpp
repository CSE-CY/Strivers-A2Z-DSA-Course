#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
vector<vector<int>> triplet(vector<int> &arr,int n) {
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) {
        if (i != 0 && arr[i] == arr[i - 1]) continue;
        int j = i + 1;
        int k = n - 1;
        while (j < k) {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum < 0) {
                j++;
            }
            else if (sum > 0) {
                k--;
            }
            else {
                vector<int> temp = {arr[i], arr[j], arr[k]};
                ans.push_back(temp);
                j++;
                k--;
                while (j < k && arr[j] == arr[j - 1]) j++;
                while (j < k && arr[k] == arr[k + 1]) k--;
            }
        }
    }
    return ans;
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
  cout<<"Triplets in array are "<<endl;
  vector<vector<int>>ans=triplet(arr,n);
   for (auto it : ans) {
        cout << "[";
        for (auto i : it) {
            cout << i << " ";
        }
        cout << "] ";
    }
    cout << "\n";
  return 0;

}
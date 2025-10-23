#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>mergesortedarray(vector<int>&arr1,vector<int>&arr2,int n,int m){
    int left=n-1;
    int right=0;
    while(left>=0 && right<m){
      if(arr1[left]>arr2[right]){
        swap(arr1[left],arr2[right]);
        left--;
        right++;
      }
      else{
        break;
      }
    }
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    return arr1,arr2;
}
int main() {
    int n,m;
    cout << "Enter two sorted Array size: ";
    cin >> n>>m;
    vector<int> arr1(n);
    vector<int> arr2(m);

    cout << "Enter the values for array1: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    cout << "Enter the values for array2: ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    mergesortedarray(arr1, arr2, n, m);
    cout << "Sorted array 1: ";
    for (int i = 0; i < (n); i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << "Sorted array 2: ";
    for (int i = 0; i < (m); i++) {
        cout << arr2[i] << " ";
    }
    return 0;
}

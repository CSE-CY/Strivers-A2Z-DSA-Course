#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>mergesortedarray(vector<int>&arr1,vector<int>&arr2,int n,int m){
    vector<int>ans(n+m);
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            ans[k++]=arr1[i++];
        }
        else{
            ans[k++]=arr2[j++];
        }
    }
    while(i<n){
        ans[k++]=arr1[i++];
    }
    while(j<m){
        ans[k++]=arr2[j++];
    }
    return ans;
}
int main() {
    int n,m;
    cout << "Enter two sorted Array size: ";
    cin >> n>>m;
    vector<int> arr(n);
    vector<int> arr2(m);

    cout << "Enter the values for array1: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the values for array2: ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    vector<int> merged = mergesortedarray(arr, arr2, n, m);
    cout << "Sorted array: ";
    for (int i = 0; i < (n+m); i++) {
        cout << merged[i] << " ";
    }
    return 0;
}

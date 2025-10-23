#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>missingandrepeatingnumber(vector<int>&a,int n){
long long sum=n*(n+1)/2;
long long sumsq=n*(n+1)*(2*n+1)/6;
long long S = 0, S2 = 0;
    for (int i = 0; i < n; i++) {
        S += a[i];
        S2 += (long long)a[i] * (long long)a[i];
    }
    long long val1 = S - sum;
    long long val2 = S2 - sumsq;
    val2 = val2 / val1;
    long long x = (val1 + val2) / 2;
    long long y = x - val1;

    return {(int)x, (int)y};
}
int main() {
    int n;
    cout << "Enter Array size: ";
    cin >> n;
    vector<int> arr1(n);
  

    cout << "Enter the values for array1: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    vector<int> result = missingandrepeatingnumber(arr1, n);
    cout << "Repeating and Missing numbers are: ";
    cout << result[0] << " " << result[1] << endl;
    return 0;
  }
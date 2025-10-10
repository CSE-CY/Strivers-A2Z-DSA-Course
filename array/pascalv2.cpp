#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
#include<vector>
using namespace std;
void pascalTriangle(int n) {
    long long ans = 1;
    cout << ans << " ";
    for (int i = 1; i < n; i++) {
        ans = ans * (n - i);
        ans = ans / i;
        cout << ans << " ";
    }
    cout << endl;
}
int main(){
  int n;
  cout<<"enter the row"<<endl;
  cin>>n;
  pascalTriangle(n);
  return 0;
}
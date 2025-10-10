#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
#include<vector>
using namespace std;
int nCr(int n, int r) {
    long long res = 1;
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}
int pascalTriangle(int r, int c) {
    int element = nCr(r - 1, c - 1);
    return element;
}
int main(){
int r,c;
int element;
  cout<<"enter the row and column"<<endl;
  cin>>r>>c;
  element=pascalTriangle(r,c);
  cout<<"element = "<<element<<endl;
  int n;
  
  return 0;
}
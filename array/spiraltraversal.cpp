#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
vector<int> spiralmatrix(vector<vector<int>> &matrix, int n, int m) {
  int left=0,right=m-1,top=0,bottom=n-1;
  vector<int> ans;
  while(left<=right && top<=bottom){
  
  for(int i=left;i<=right;i++){
      ans.push_back(matrix[top][i]);
  }
    top++;
  for(int i=top;i<=bottom;i++){
      ans.push_back(matrix[i][right]);
  }
    right--;
    if(top<=bottom){
  for(int i=right;i>=left;i--){
      ans.push_back(matrix[bottom][i]);
  }
    bottom--;}
    if(left<=right){
  for(int i=bottom;i>=top;i--){
      ans.push_back(matrix[i][left]);
  }
    left++;
  }
}
  return ans;
}
int main()
{
    int n, m;
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Enter number of columns: ";
    cin >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    cout << "Enter matrix elements: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    vector<int> result = spiralmatrix(matrix, n, m);
    cout << "Spiral Traversal of the matrix is: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}
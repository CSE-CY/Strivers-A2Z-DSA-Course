#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

void rotateMatrixby90(vector<vector<int>> &matrix, int n, int m) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
          swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0;i<n;i++){
      reverse(matrix[i].begin(),matrix[i].end());
    }
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
    rotateMatrixby90(matrix, n, m);
    cout << "The Final matrix is:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
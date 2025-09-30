#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;
void leftrotate(int arr[],int n,int x){
  reverse(arr,arr+x);
  reverse(arr+x,arr+n);
  reverse(arr,arr+n);


}
int main(){
int n;
  cout<<"array size"<<endl;
  cin>>n;
 int arr[n];
  cout<<"enter the value"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];}
    int x;
  cout<<"number of place to shift ";
  cin>>x;
  leftrotate(arr,n,x);
   cout << "Array after left rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
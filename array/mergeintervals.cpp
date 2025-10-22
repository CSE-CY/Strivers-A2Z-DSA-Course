#include <iostream>
#include <math.h>
#include<string.h>
#include <string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
vector<vector<int>> mergeoverlappingintervals(vector<vector<int>>&intervals) {
 sort(intervals.begin(), intervals.end());
        vector<vector<int>> merged;
        for (auto interval : intervals) {
            if (merged.empty() || merged.back()[1] < interval[0]) {
                merged.push_back(interval);
            } else {
                merged.back()[1] = max(
                    merged.back()[1],
                    interval[1]
                );
            }
        }
        return merged;
    }
int main(){
int n;
  cout<<"Total intervals"<<endl;
  cin>>n;
  vector<vector<int>>arr(n);
  cout<<"enter the value"<<endl;
  for(int i=0;i<n;i++){
    int start,end;
    cin>>start>>end;
    arr[i].push_back(start);
    arr[i].push_back(end);
  }
  vector<vector<int>>ans=mergeoverlappingintervals(arr);
  cout<<"merged intervals are "<<endl;
  for(auto it:ans){
    cout<<"["<<it[0]<<","<<it[1]<<"] ";
  }
  return 0;

}
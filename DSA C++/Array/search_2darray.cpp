// better solution using binary search
#include<iostream>
#include<vector>
using namespace std;

bool binarySearch(vector<vector<int>>& matrix, int target)
{
    int m = matrix.size();
    int n = matrix[0].size();
  int l = 0;
  int h = (m*n)-1;
  if (matrix.empty() || matrix[0].empty()) {
    return false;
}
  while(l<=h){
   int mid = l + (h-l)/2;
   int row = mid /n ;
   int col = mid % n;
   if(matrix[row][col] == target){
    return true;
   }
   else if(matrix[row][col]> target){
    h = mid - 1;

   }
   else{
    l = mid + 1; 
   }

  }
  return false;

}


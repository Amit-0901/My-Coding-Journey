#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
      bool can_eat(vector<int> &a ,int mid ,  int h){
        int hours = 0 ;
         for(int &x : a){
            hours += x/mid;
            if( x % mid != 0){
                hours++ ;
            }
         }
         return hours <= h;
      }


      int koko_speed(vector<int> &a , int h){
        int n = a.size();
        int l = 1;
        int r = *max_element(a.begin(),a.end());
        while(l<r){
            int mid = l + (r-l)/2;
            if(can_eat(a , mid , h)){
                r = mid;
            }
            else{
                l = mid +1;
            }
        }
        return l ;
      }

};
#include <iostream>;
using namespace std;
int main(){
int n;
cin>>n;
int ans = 0;
int power = 1;
while(n>1){
   int digit = digit%2;
    ans += digit * power;
    power *= 10;
    n/2;
}
cout<<ans<<endl;

return 0;
}
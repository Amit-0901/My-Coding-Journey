// #include <iostream>;
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n :";
//     cin>>n;

//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//     cout<<sum;
// return 0;
// }
#include <iostream>;
using namespace std;
int main(){
int n;
cout<<"enter the n:"<<endl;
cin>>n;
int sum=0;

for (int i=1 ; i<=n ; i++){
    sum=sum+i;

}
cout<<"sum of "<<n<<"\t natural numbers is:"<<sum<<endl;

return 0;
}
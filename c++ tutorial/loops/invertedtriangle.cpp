#include <iostream>;
using namespace std;
int main(){
int n;
cin>>n;
for(int i = n; i>=1 ; i--){
    for(int y=1; y<=i ;y++){
        cout<<y<<" ";

    }
    cout<<endl;

}
return 0;
}
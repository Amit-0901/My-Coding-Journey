#include<iostream>
using namespace std;
int cnt = 0;
class Const{
    public:
    Const()
    {
        cnt++;
        cout<<"no of objects called "<<cnt<<endl;
    }
    ~Const(){
        cout<<"no of times object destroyed "<<cnt<<endl;
        cnt--;
    }
};
int main(){
    Const c,c1,c2,c3,c4;
    return 0;

}
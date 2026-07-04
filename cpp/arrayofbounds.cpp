#include <iostream>
using namespace std;
void Program(){
        int arr[5] = {10, 20, 30, 40, 50};
    int index;
// try throw catch block
    try
    {
        cout << "Enter index value: ";
        cin >> index;

        if(index < 0 || index >= 5)
        {
            throw index;   // throwing exception
        }

        cout << "Element at index " << index << " is: " << arr[index] << endl;
    }

    catch(int i)
    {
        cout << "Exception caught: Array index out of bounds (" << i << ")" << endl;
    }


}
int main()
{
Program(); //calling function
    return 0;
}
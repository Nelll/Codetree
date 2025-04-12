#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int sex;
    int years;

    cin >> sex >> years;

    if(sex == 0)
    {
        if(years >=19)
        {
            cout << "MAN";
        }
        else
        {
            cout << "BOY";
        }
    }
    else
    {
        if(years >=19)
        {
            cout << "WOMAN";
        }
        else
        {
            cout << "GIRL";
        }
    }
    return 0;
}
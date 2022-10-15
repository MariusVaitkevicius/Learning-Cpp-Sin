#include <iostream>
#include <cmath>
#define PI 3.142

using namespace std;

//                 o                                1
// Calculate sin(30 ) and make sure it is equal to --- .
//                                                  2

int main()
{
    float radian;
    cout << "Enter the angle in degrees: "<< endl;
    cin >> radian;
    cout << "sinus is: " << radian << " is: " <<sin(radian * PI / 180) << endl;
    return 0;
}

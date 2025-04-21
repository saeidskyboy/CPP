#include <iostream>
#include <cmath>

using namespace std;
int main()
{

    const double Pi = 3.14159;
    cout << "Enter the radius of the circle: ";
    double Radius;
    cin >> Radius;
    double Area = Pi * pow(Radius, 2);
    cout << "The area of the circle is: " << Area << endl;
}

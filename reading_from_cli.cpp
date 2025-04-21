#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the temperature in Fahrenheit: ";
    double DegreeF;
    double DegreeC;

    cin >> DegreeF;
    DegreeC = (DegreeF - 32) * 5 / 9;
    cout << "The degree in Celsius is: " << DegreeC << endl;
    return 0;
}
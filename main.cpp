#include <iostream> // this is an in out library

using namespace std;
int main()
{
    double Sales = 95000;
    cout << "Sales: $" << Sales << endl;

    const double StateTaxRate = 0.04;
    const double CountyTaxRate = 0.02;

    double CountyTax = Sales * CountyTaxRate;
    cout << "County Tax: $" << CountyTax << endl;

    double StateTax = Sales * StateTaxRate;
    cout << "State Tax: $" << StateTax << endl;

    double TotalTax = StateTax + CountyTax;
    double NetIncom = Sales - TotalTax;
    cout << "Total Tax: $" << TotalTax << endl
         << "Total Sales after Tax: $" << NetIncom << endl;
    return 0;
}
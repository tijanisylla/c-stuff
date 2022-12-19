#include <iostream>
using namespace std;

int main()
{
    double sales = 95000;
    const double state_taxt_rate = .04;                  // 4%
    const double county_taxt_rate = .02;                 // 2%
    const double state_tax = sales * state_taxt_rate;    // 4% of sales
    const double county_taxt = sales * county_taxt_rate; // 2% of sales
    double total_tax = state_tax + county_taxt;
    cout << "Sales: $" << sales << endl
         << "State Tax: $" << state_tax << endl
         << "County Tax: $" << county_taxt << endl
         << "Total Tax: $" << total_tax;

    return 0;
}
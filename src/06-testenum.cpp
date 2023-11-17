#include <iostream>
#include <iomanip>
using namespace std;

enum struct CarrierVariableType {
    CarrierDensity,
    QuasiFermiPotential
};

int main()
{
    int index0 = (int)CarrierVariableType::CarrierDensity;
    int index1 = (int)CarrierVariableType::QuasiFermiPotential;

    cout << "index0 = " << index0 << endl;
    cout << "index1 = " << index1 << endl;

}

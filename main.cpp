#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string month1, month2, month3;
    double rainfall1, rainfall2, rainfall3, avg;

    
    cin >> month1 >> rainfall1;
    cin >> month2 >> rainfall2;
    cin >> month3 >> rainfall3;

    avg = (rainfall1 + rainfall2 + rainfall3) / 3.0;

    cout << fixed << setprecision(2);

    cout << "The average rainfall for "
         << month1 << ", "
         << month2 << ", and "
         << month3
         << " is " << avg << endl;

    return 0;
}

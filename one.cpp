#include <iostream>
#include <math.h>
using namespace std;
int main() {
    const double pi = acos(-1);
    int r;
    cin >> r;
    double area = (((double)r*r) * pi);
    double cic = 2 * pi * (double)r;
    cout << fixed << setprecision(6) << area << " " << cic << "\n";
    return 0;
}
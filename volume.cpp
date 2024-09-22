#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    double radius, height, volume;

    cout << "Enter the radius of the cylinder: ";
    cin >> radius;

    cout << "Enter the height of the cylinder: ";
    cin >> height;
    volume = M_PI * pow(radius, 2) * height;

    cout << "The volume of the cylinder is: " << volume << " cubic units" << endl;

    return 0;
}

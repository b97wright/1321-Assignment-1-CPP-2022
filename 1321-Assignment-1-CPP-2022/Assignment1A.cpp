#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double height, width, res;

	cout << "[Print Resolution]" << endl;

	cout << "Enter the width (in pixels): ";
	cin >> height;

	cout << "Enter the height (in pixels): ";
	cin >> width;

	cout << "Enter the resolution (PPI):  ";
	cin >> res;

	width = width / res;
	height = height / res;

	cout << fixed << showpoint;
	cout << setprecision(2);
	cout << "At " << res << " PPI, the image is " << height << "\" wide by " << width << "\" high.";


}
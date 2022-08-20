#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double labG, assignG, midExamG, finalExamG, finalG;

	cout << "[CSE 1321L Final Grade Calculator]" << endl;

	cout << "Enter your average lab grade: ";
	cin >> labG;

	cout << "Enter your average lab grade: ";
	cin >> assignG;

	cout << "Enter your average lab grade: ";
	cin >> midExamG;

	cout << "Enter your average lab grade: ";
	cin >> finalExamG;
	cout << endl;

	labG = labG * .1;
	assignG = assignG * .4;
	midExamG = midExamG * .2;
	finalExamG = finalExamG * .3;

	std::cout << std::fixed << std::showpoint;
	std::cout << std::setprecision(2);

	cout << "Your weighted lab average is " << labG << endl;
	cout << "Your weighted assignment average is " << assignG << endl;
	cout << "Your weighted midterm exam average is " << midExamG << endl;
	cout << "Your weighted final exam average is " << finalExamG << endl;
	cout << endl;

	finalG = labG + assignG + midExamG + finalExamG;

	std::cout << std::fixed << std::showpoint;
	std::cout << std::setprecision(3);
	cout << "Adding numbers..." << endl;
	cout << "Your final grade in CSE 1321L is " << finalG;

	return 0;
}
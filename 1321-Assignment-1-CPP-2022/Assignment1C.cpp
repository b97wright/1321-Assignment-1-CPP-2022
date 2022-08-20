#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	char letter;

	cout << "[And the next letter is]" << endl;
	cout << "Please enter a letter: ";
	cin >> letter;
	cout << "The next letters after " << letter << " are " << (char)(letter + 1) << ", " << (char)(letter + 2) << ", and " << (char)(letter + 3) << "!";

	return 0;
}
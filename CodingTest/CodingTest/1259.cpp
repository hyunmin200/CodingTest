#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;


int main()
{
	string input;
	while (true)
	{
		cin >> input;
		if (input == "0")
			break;

		string bInput = input;

		reverse(input.begin(), input.end());

		if (bInput == input)
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}
	}
}
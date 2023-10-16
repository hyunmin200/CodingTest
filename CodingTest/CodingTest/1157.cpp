#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main1()
{
	/*
	 * 아스키 코드
	 * 대문자 65 ~ 90
	 * 소문자 97 ~ 122
	 */

	int alpha[26] = { 0, };

	string str;

	cin >> str;

	for (int i = 0; i < str.size(); i++)
	{
		str[i] = ::tolower(str[i]);
		alpha[str[i] - 97]++;
	}

	int max = 0;
	int idx = 0;

	for (int i = 0; i < 26; i++)
	{
		if (max < alpha[i])
		{
			max = alpha[i];
			idx = i;
		}
	}

	int count = 0;

	for (int i = 0; i < 26; i++)
	{
		if (max == alpha[i])
			count++;
	}

	if (count > 1)
		cout << "?";
	else
		cout << static_cast<char>(idx + 65);

	return 0;
}
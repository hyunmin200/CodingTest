//#include <bits/stdc++.h>
//using namespace std;
//
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//
//	string s;
//	cin >> s;
//
//	int cnt = 0;
//	long long result = 0;
//
//	for (int i = 0; i < s.size(); i++)
//	{
//		long long h = static_cast<int>(s[i]) - 96;
//		for (int j = 0; j < cnt; j++)
//		{
//			h *= 31;
//			h = h % 1234567891;
//		}
//
//		result += h;
//		result = result % 1234567891;
//		cnt++;
//	}
//
//	cout << result;
//
//	return 0;
//}
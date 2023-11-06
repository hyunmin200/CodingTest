//#include <bits/stdc++.h>
//using namespace std;
//
//int FindResidentNum(int k, int n)
//{
//	if (k == 0) return n;
//	if (n == 0) return 0;
//
//	return FindResidentNum(k - 1, n) + FindResidentNum(k, n - 1);
//}
//
//int main()
//{
//	int T = 0, k = 0, n = 0;
//	cin >> T;
//
//	for (int i = 0; i < T; i++)
//	{
//		cin >> k >> n;
//		cout << FindResidentNum(k, n) << endl;
//	}
//
//	return 0;
//}
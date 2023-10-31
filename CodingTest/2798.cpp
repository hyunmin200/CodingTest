//#include <bits/stdc++.h>
//using namespace std;
//
//
//int main()
//{
//	int n = 0, m = 0;
//	cin >> n >> m;
//
//	vector<int> v;
//
//	if (n < 3) return 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		int t;
//		cin >> t;
//		v.push_back(t);
//	}
//
//	::sort(v.begin(), v.end());
//
//	if (n == 3) cout << v[0] + v[1] + v[2];
//
//	int result = 0, tSum;
//
//	for (int i = 0; i < n - 2; i++)
//	{
//		for (int j = i + 1; j < n - 1; j++)
//		{
//			for (int k = j + 1; k < n; k++)
//			{
//				tSum = v[i] + v[j] + v[k];
//				if (tSum > result && m >= tSum)
//					result = tSum;
//			}
//		}
//	}
//
//	cout << result;
//
//	return 0;
//}
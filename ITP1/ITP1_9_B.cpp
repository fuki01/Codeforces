//    created: 11.05.2021 20:56:05

#include <iostream>
#include <numeric>
#include <cmath>
#include <algorithm>
#include<vector>

using namespace std;
#define REP(i,n) for(int i=0;i<int(n);i++)
#define REPD(i,n) for(int i=n-1;i>=0;i--)
#define FOR(i,a,b) for(int i=a;i<=int(b);i++)
#define FORD(i,a,b) for(int i=a;i>=int(b);i--)

int main()
{
	int n, m;
	cin >> n >> m;
	vector<vector<int> > matrix(n, vector<int>(m));
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> matrix[i][j];
		}
	}
	vector<int> vec(m);
	for (int i = 0; i < m; ++i)
	{
		cin >> vec[i];
	}
	for (int i = 0; i < n; ++i)
	{
		int sum = 0;
		for (int j = 0; j < m; ++j)
		{
			sum += matrix[i][j] * vec[j];
		}
		cout << sum << endl;
	}
}
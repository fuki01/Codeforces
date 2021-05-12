//    created: 12.05.2021 20:00:23

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

int d[3][4]={{0,4,5,1},{0,2,5,3},{4,2,1,3}};//d,u,l,r

void dice(int a[6], int n){
	int tmp = a[d[n][0]];
	a[d[n][0]] = a[d[n][1]];
	a[d[n][1]] = a[d[n][2]];
	a[d[n][2]] = a[d[n][3]];
	a[d[n][3]] = tmp;
}

int check(int a[6], int b[6]){
	REP(i,6)if(a[i] != b[i])return 0;
	return 1;
}

int func(int a[6], int b[6]){
	REP(i,6){
		for(int j = 0;j < 4;j++){
			dice(b, 0);
			if(check(a, b))return 1;
		}
		if(i%2 == 0)dice(b, 1);
		else dice(b, 2);
	}
	return 0;
}

int calc(int a[100][6], int n){
	for(int i = 0;i < n-1;i++){
		int b[6], c[6];
		REP(j,6)b[j] = a[i][j];
		for(int j = i+1;j < n;j++){
			REP(k,6)c[k] = a[j][k];
			if(func(b, c))return 1;
		}
	}
	return 0;
}

int main(){
	int a[100][6];
	int n;cin >> n;
  REP(j,n)
	REP(i,6)cin >> a[j][i];
	
	if(calc(a, n))cout << "No" << endl;
	else cout << "Yes" << endl;
	return 0;
}
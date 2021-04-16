#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string> 

#include <iomanip>

using namespace std;

int main() {
  long long n = 0, max = -1000000, min = 1000000, sum = 0;
  cin >> n;
  vector<long long> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < n; i++)
  {
    sum = sum + a[i];
    if(min > a[i]){
      min = a[i];
    }
    if(max < a[i]){
      max = a[i];
    }
  }
  cout << min << " " << max << " " << sum << endl;
}

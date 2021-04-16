#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string> 

#include <iomanip>

using namespace std;

int main() {
  int a = 0, b = 0,result = 0;
  char op;
  while (1)
  {
      cin >> a >> op >> b;
    switch (op)
    {
    case '/':
      result = a / b;
      break;
    case '*':
      result = a * b;
      break;
    case '-':
      result = a - b;
      break;
    case '+':
      result = a + b;
      break;
    default:
      break;
    }
    if(op == '?'){
      break;
    }else{
    cout << result << endl;
    }
  }
}

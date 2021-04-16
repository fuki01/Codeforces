#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int main() {
    // 入力を受け取る
    int a, b, c;
    int tmp;
    cin >> a >> b >> c;
    for (int i = 0; i < 10; i++)
    {
    if (a > b){
      tmp = a;
      a = b;
      b = tmp;
    }
    if (b > c)
      {
        tmp = b;
        b = c;
        c = tmp;
      }
    }
    

    cout << a <<" "<< b<<" " << c<<"endl";
}

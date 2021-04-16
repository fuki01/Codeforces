#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int main() {
    // 入力を受け取る
    int W,H,x,y,r;
    bool an = false;

    cin >> W >> H >> x >> y >> r;
    if((x >= r && x <= W-r) && (y >= r && y <= H-r)) an = true;
    else an = false;
      if (an)
      {
        cout << "Yes" << endl;
    }
    else
    {
      cout << "No" << endl;
    }
}

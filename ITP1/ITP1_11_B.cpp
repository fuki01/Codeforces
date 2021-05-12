//    created: 12.05.2021 19:03:04

#include <iostream>
#include <numeric>
#include <cmath>
#include <algorithm>
#include<vector>
using namespace std;
using ll = long long;
#define REP(i,n) for(int i=0;i<int(n);i++)
#define REPD(i,n) for(int i=n-1;i>=0;i--)
#define FOR(i,a,b) for(int i=a;i<=int(b);i++)
#define FORD(i,a,b) for(int i=a;i>=int(b);i--)
int main(){
    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;
    
    int num;
    int g,h;
    cin >> num;
    for(int i=0; i<num; i++){
        cin >> g >> h;
        for(int i=0; !(a==g && b==h); i++){
            if(d==h || c==h){
                int tmp = a;
                a = d;
                d = f;
                f = c;
                c = tmp;
            }
            for(int i=0; b!=h; i++){
                int tmp=a;
                a = b;
                b = f;
                f = e;
                e = tmp;
            }
            for(int i=0; a!=g; i++){
                int tmp=a;
                a = d;
                d = f;
                f = c;
                c = tmp;
            }
        }
        cout << c << endl;
    }
}
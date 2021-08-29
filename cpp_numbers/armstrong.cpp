#include <iostream>
using namespace std;

int main() {
    int n,t,r,s=0;
    cout << "enter a number:";
    cin >> n;
    t = n;

    while(t != 0)
    {
        r = t % 10;
        s += r * r * r;
        t /= 10;
    }

    if(n == s)
      cout << "armstrong";
    else
      cout << "not armstrong";
    return 0;
}

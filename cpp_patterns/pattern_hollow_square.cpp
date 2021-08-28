#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter a number:";
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==0 || j==n ||i==0 || i==0)
            {
                cout << '*' << ' ';
            }
            else
            {
                cout << " ";
            }
        }
        cout << '\n';
    }
}
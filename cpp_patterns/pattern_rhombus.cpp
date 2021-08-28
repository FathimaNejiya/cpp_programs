#include <iostream>
using namespace std;

int main()
{
    int i,j,k,n;
    cout << "enter a number:";
    cin >> n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            cout << " ";
        }
        for(k=0;k<n;k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    
    return 0;
}
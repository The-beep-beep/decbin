#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    vector <int> v;
    while (n >= 2)
    {
       int c = n%2;
        n = n/2;
        v.push_back(c);
    }
    v.push_back(1);
    for ( auto it = v.rbegin(); it != v.rend(); ++it )
       cout << *it << ' ';
}

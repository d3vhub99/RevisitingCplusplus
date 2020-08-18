
//http://codeforces.com/problemset/problem/581/A

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int total = a + b;
    int result1 = 0, result2 = 0;
    while (a > 0 && b > 0)
    {
        result1++;
        a--;
        b--;
    }
    while (a > 1 || b > 1)
    {
        if(a >= 2){
            result2++;
            a -= 2;
        }
        if(b >= 2){
            result2++;
            b -= 2;
        }
    }
    cout << result1 << " " << result2;
    return 0;
}

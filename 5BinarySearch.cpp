#include <iostream>

using namespace std;

int main()
{

    int array[100];
    int i, key, n;
    cin >> n;
    int lo = 0, high = n - 1, mid;
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cin >> key;
    while (lo <= high)
    {
    mid = (lo + high) / 2;
    if (array[mid] == key)
    {
        cout << "found at " << mid;
        return 0;
    }
    else if (array[mid] < key)
    {
        lo = mid + 1;
    }
    else
    {
        high = mid - 1;
    }
}
cout << "Not found";
return 0;
}
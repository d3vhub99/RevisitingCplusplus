#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,k,answer=0, a[51];
	cin >> n >> k;
	k--;
	for (int i=0;i<n;i++) 
    cin >> a[i];
	if (a[k]==0)
	{
		for (int i=0;i<n;i++) 
        if (a[i]>0) 
        answer++;
	} else
	{
		for (int i=0;i<n;i++) 
        if (a[i]>=a[k]) 
        answer++;
	}
	cout << answer;
	return 0;
}
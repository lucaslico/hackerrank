#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
    {
      cout << t <<"\n";
      int n, k, count = 0, a;
      cin >> n >> k;
      for (int i = 1; i <= n; i++)
	{
	  cin >> a;
	  if (a <= 0)
	    count++;
	}
      if (count >= k )
	cout << "NO\n";
      else 
	cout << "YES\n";
     
    }
  return 0;
}

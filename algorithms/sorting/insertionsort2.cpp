#include <stdio.h>
#include <iostream>
#include <algorithm>
#define S 1000 + 5
#define X 10000

using namespace std;

void insert(int i, int *ar)
{
  int V = ar[i];
  while(V < ar[i - 1])
    {
      swap(ar[i], ar[i-1]);
      --i;
    }
}


int main()
{
  int s, ar[S];
  cin >> s;
  for (int i = 1; i <= s; i++)
    cin >> ar[i];
  ar[0] = - X - 5;

  for (int i = 2; i <= s; i++)
    {
      insert(i, ar);
      for (int j = 1; j <= s; j++)
	cout << ar[j] << " ";
      cout << "\n";
    }
  
  return 0;
}

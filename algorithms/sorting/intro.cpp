#include <stdio.h>
#include<iostream>
#define N 1000 + 5

using namespace std;

 int n, V , ar[N];

int busca(int V, int start, int end)
{
  if (start > end)
    return - 1;

  int half = (start + end)/2;
  if (ar[half] == V)
    return half;
  
  if (ar[half] < V)
    return busca(V, half + 1, end);
 
  return busca(V, start, half - 1);
 
}

int main()
{
  cin >> V;
  cin >> n;
  
  for (int i = 0; i < n; i++)
    cin >> ar[i];
  
  int pos = busca(V, 0, n - 1);
  
  cout << pos << "\n";
  return 0;
}

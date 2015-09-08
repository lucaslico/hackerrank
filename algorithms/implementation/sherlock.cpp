#include <stdio.h>
#include <iostream>
#include <string>
#define N 100000 + 5
using namespace std;
// X + Y = N
// X = 3X0 ; Y = 5Y0;
string beast (int n)
{
  string answer;
  answer.clear();
  int restY0 = (2*n)%3;
  if (restY0 == 0)
    {
      for (int i = 1; i <= n; i++)
	answer.push_back('5');
      return answer;
    }
  if (restY0 == 1)
    {
      if (n < 5)
	return answer = "-1";
      int t = n-5;
      for (int i = 1; i <= t; i++)
	answer.push_back('5');
      for (int i = 1; i <= 5; i++)
	answer.push_back('3');
      return answer;
    }
  if (n < 10)
    return answer = "-1";
  int t = n-10;
  for (int i = 1; i <= t; i++)
    answer.push_back('5');
  for (int i = 1; i <= 10; i++)
    answer.push_back('3');
  return answer;
  
  
}


int main()
{
  int t, n;
  string number;
  cin >> t;
  while(t--)
    {
      cin >> n;
      number = beast(n);
      cout << number << "\n";
    }

  return 0;
}

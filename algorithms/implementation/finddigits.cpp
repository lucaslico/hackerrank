#include <stdio.h>

void digitsdivisor(long long int n)
{
  int count = 0;
  long long int m = n;
  while(m > 0)
    {
      int d = m%10;
      m/=10;
      if (d!=0 && n%d==0)
	count++;
    }
  printf("%d\n",count);
}

int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
    {
      long long int n;
      scanf("%lld",&n);
      digitsdivisor(n);
    }
  return 0;
}

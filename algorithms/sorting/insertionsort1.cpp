#include <stdio.h>
#include <algorithm>
#define S 1000 + 5
using namespace std;
int main()
{
  int s, ar[S], V;
  scanf("%d",&s);
  for (int i = 1; i <= s; i++)
    scanf("%d",&ar[i]);
  V = ar[s];
  int end = s;
  ar[0] = -100000;
  while (V < ar[end - 1])
    {
      swap(ar[end],ar[end-1]);
      end--;
	for (int i = 1; i <= s; i++)
	  {
	    if (i!=end)
	      printf("%d ",ar[i]);
	    else printf("%d ",ar[end + 1]);
	  }	  
      printf("\n");
    }
  	for (int i = 1; i <= s; i++)
	  printf("%d ",ar[i]);
      printf("\n");  
}

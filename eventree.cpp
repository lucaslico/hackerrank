#include <stdio.h>
#include <vector>
#include <queue>
#define N 100 + 5
using namespace std;
vector<int> vizinho[N];
int contador[N];
int main()
{
  int n,m;
  scanf("%d%d",&n,&m);
  for (int i = 1; i <= m; i++)
    {
      int x,y;
      scanf("%d%d",&x,&y);
      deg[x]++;
      deg[y]++;
      vizinho[x].push_back(y);
      vizinho[y].push_back(x);
    }
  queue <int> folhas;
  for (int i = 1; i <= n; i++)
    if (deg[i] == 1)
      folhas.push(i);
  while(!folhas.empty())
    {
      int atual = folhas.front();
      folhas.pop();
      int sz = vizinho[atual].size();
      for (int i = 0; i < sz; i++)
	{
	  int amigo = vizinho[atual][i];
	  deg[amigo]--;
	  contador[amigo]+= contador[atual] + 1;
	  if (deg[amigo] == 1)
	    folhas.push(amigo);
	}
    }
  return 0;
}

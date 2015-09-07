#include <stdio.h>
#include <queue>
#include <string.h>
#include <vector>
#define N 1000 + 5
using namespace std;
int distancia[N];
vector<int> vizinho[N];
void resolve()
{
  for (int i = 0; i <= N; i++)
    vizinho[i].clear();
  memset(distancia, -1 , sizeof(distancia));
  queue <int> fila;
  while(!fila.empty())
    fila.pop();
  int n;
  int m;
  scanf("%d %d",&n, &m);
  for (int i = 1; i <= m; i++)
    {
      int x,y;
      scanf("%d%d",&x,&y);
      vizinho[x].push_back(y);
      vizinho[y].push_back(x);
    }
  int start;
  scanf("%d",&start);
  distancia[start] = 0;
  fila.push(start);
  while(!fila.empty())
    {
      int atual = fila.front();
      fila.pop();
      int t = vizinho[atual].size();
      for (int i = 0; i < t; i++)
	if (distancia[vizinho[atual][i]] == -1)
	  {
	    int amigo = vizinho[atual][i];
	    fila.push(amigo);
	    distancia[amigo] = distancia[atual] + 6;
	  }
    }
  for (int i = 1; i <= n; i++)
    if (i!=start)
      printf("%d ", distancia[i]);
  printf("\n");

}
int main()
{
  int t;
  scanf("%d",&t);
  for (int i = 1; i <= t; i++)
    resolve();
 
  return 0;
}

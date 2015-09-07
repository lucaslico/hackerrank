#include <stdio.h>
#include <vector>
#include <string.h>
#include <queue>
#define N 100 + 5
using namespace std;
int parent[N];
vector<int> family[N];
vector<int> edge[N];
queue<int> root;
bool marked[N];
int descendents[N];

int numberDescendents(int x)
{
  int sz = family[x].size();
  if (sz == 0) return descendents[x] = 1;
  for (int i = 0; i < sz; i++)
    {
      int son = family[x][i];
      descendents[x]+=numberDescendents(son);
    }
  return descendents[x];
}

int main()
{
  for (int i = 1; i <= N; i++)
    descendents[i] = 1;
  int n,m;
  scanf("%d%d",&n,&m);
  for (int i = 1; i <= m; i++)
    {
      int x,y;
      scanf("%d%d",&x,&y);
      edge[x].push_back(y);
      edge[y].push_back(x);
    }
  root.push(1);
  while(!root.empty())
    {
      int r = root.front();
      root.pop();
      marked[r] = true;
      int sz = edge[r].size();
      for (int i = 0; i < sz; i++)
	{
	  int son = edge[r][i];
	  if (!marked[son])
	    {
	      root.push(son);
	      parent[son] = r;
	      family[r].push_back(son);
	    }
	}
    }
  
  
  //for (int i = 1; i <= n; i++)
  //printf("%d %d\n",i, parent[i]);
  int total = numberDescendents(1);
  //
  int conta = -1;
  //printf("%d %d\n",i, descendents[i]);
  for (int i = 1; i <= n; i++)
    if (descendents[i]%2==0)
      conta++;
  printf("%d\n",conta);
  return 0;

  
}

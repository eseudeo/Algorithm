#include<stdio.h>

int m, n, sum;
int s[100], e[100], w[100];
int idx[100], group[100];

int find(int idx)
{
   int queue[100], qc = 0;

   while (idx != group[idx])
   {
      if (group[idx] != group[group[idx]]) queue[qc++] = idx;
      idx = group[idx];
   }

   while (qc--) group[queue[qc]] = idx;

   return idx;
}

void kruskal()
{
   int i, j, t, p, q;
   int cnt = 0;

   for (i = 0; i < n; i++)
      group[i] = i;

   for (i = 0; i < m; i++)
      idx[i] = i;

   for (i = 0; i < m - 1; i++)
   {
      for (j = i + 1; j < m; j++)
      {
         if (w[idx[i]] > w[idx[j]])
         {
            t = idx[i]; idx[i] = idx[j]; idx[j] = t;
         }
      }

   }

   for (i = 0; i < m; i++)
   {
      p = find(s[idx[i]]);
      q = find(e[idx[i]]);

      if (p != q)
      {
         sum += w[idx[i]];
         if (p > q) group[p] = q;
         else group[q] = p;
         printf("%d ", w[idx[i]]);
         cnt++;
      }
      if (cnt == n - 1)
         break;
   }
   printf("%d\n", sum);
}

void main()
{
   int i;
   scanf("%d %d", &n, &m);

   for (i = 0; i < m; i++)
   {
      scanf("%d %d %d", &s[i], &e[i], &w[i]);
   }

   kruskal();
}

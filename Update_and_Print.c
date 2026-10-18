#include <stdio.h>
int main()
{ 
  int n;
  scanf("%d", &n);
  int a[n];

  if (n > 0)
  {
     for (int i=0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int x;
    int v;
    scanf("%d %d", &x, &v);

    for (int i = 0; i < n; i++)
    {
       a[x] = v;
       
    }

    for (int i = n - 1 ; i >= 0; i--)
    {
       printf("%d ", a[i]);
       
    }
  }
    
  else
  {
    return 0;
  } 
}
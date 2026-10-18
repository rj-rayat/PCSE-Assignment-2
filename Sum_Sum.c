#include <stdio.h>
int main()
{ 
  int n;
  scanf("%d", &n);
  int v[n];
  if (n > 0)
  {
     for (int i=0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    int sumOfPositive = 0;
    int sumOfNegative = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > 0)
        {
            sumOfPositive = sumOfPositive + v[i];
        }

        else if (v[i] < 0)
        {
            sumOfNegative = sumOfNegative + v[i];
        }
        
       
    }

    printf("%d %d\n", sumOfPositive, sumOfNegative);
  }
    
  else
  {
    return 0;
  } 
}
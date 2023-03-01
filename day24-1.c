#include <stdio.h>
int main() {
   int i, n,m, k = 0;
   scanf("%d", &m);
   for (i = 1; i <=m; ++i, k = 0) {
      for (n = 1; n <= m - i; ++n) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
   return 0;
}


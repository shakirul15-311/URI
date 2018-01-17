#include<stdio.h>
int main()
{
 int x, y;
 scanf("%d %d", &x, &y);

 if (x == 1)
 printf("Total: R$ %.2f\n", 4.00 * y);
 else if (x == 2)
 printf("Total: R$ %.2f\n", 4.50 * y);
 else if (x == 3)
 printf("Total: R$ %.2f\n", 5.00 * y);
 else if (x == 4)
 printf("Total: R$ %.2f\n", 2.00 * y);
 else
 printf("Total: R$ %.2f\n", 1.50 * y);
 return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int Aaaaaaaaaaaaa, Aaaaaaaaaaaa2, Bbbbbbbbbbbbb, Xxxxxxxxxxxxx, Cccccccccccc1, Cccccccccccc2;
   printf("Enter Aaaaaaaaaaaaa:");
   scanf("%d", &Aaaaaaaaaaaaa);
   printf("Enter Bbbbbbbbbbbbb:");
   scanf("%d", &Bbbbbbbbbbbbb);
   for (int Aaaaaaaaaaaa2 = Aaaaaaaaaaaaa; Aaaaaaaaaaaa2 <= Bbbbbbbbbbbbb; Aaaaaaaaaaaa2++)
   printf("%d\n", Aaaaaaaaaaaa2 * Aaaaaaaaaaaa2);
   for (int Aaaaaaaaaaaa2 = Bbbbbbbbbbbbb; Aaaaaaaaaaaa2 <= Aaaaaaaaaaaaa; Aaaaaaaaaaaa2++)
   printf("%d\n", Aaaaaaaaaaaa2 * Aaaaaaaaaaaa2);
   Xxxxxxxxxxxxx = 0;
   Cccccccccccc1 = 0;
   while (Cccccccccccc1 < Aaaaaaaaaaaaa)
   {
   {
   Cccccccccccc2 = 0;
   while (Cccccccccccc2 < Bbbbbbbbbbbbb)
   {
   {
   Xxxxxxxxxxxxx = Xxxxxxxxxxxxx + 1;
   Cccccccccccc2 = Cccccccccccc2 + 1;
   }
   }
   Cccccccccccc1 = Cccccccccccc1 + 1;
   }
   }
   printf("%d\n", Xxxxxxxxxxxxx);
   Xxxxxxxxxxxxx = 0;
   Cccccccccccc1 = 1;
   do
   {
   Cccccccccccc2 = 1;
   do
   {
   Xxxxxxxxxxxxx = Xxxxxxxxxxxxx + 1;
   Cccccccccccc2 = Cccccccccccc2 + 1;
   }
   while (!(Cccccccccccc2 > Bbbbbbbbbbbbb));
   Cccccccccccc1 = Cccccccccccc1 + 1;
   }
   while (!(Cccccccccccc1 > Aaaaaaaaaaaaa));
   printf("%d\n", Xxxxxxxxxxxxx);
   system("pause");
    return 0;
}

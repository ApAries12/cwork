#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int Aaaaaaaaaaaaa, Bbbbbbbbbbbbb, Xxxxxxxxxxxxx, Yyyyyyyyyyyyy;
   printf("Enter Aaaaaaaaaaaaa:");
   scanf("%d", &Aaaaaaaaaaaaa);
   printf("Enter Bbbbbbbbbbbbb:");
   scanf("%d", &Bbbbbbbbbbbbb);
   printf("%d\n", Aaaaaaaaaaaaa + Bbbbbbbbbbbbb);
   printf("%d\n", Aaaaaaaaaaaaa - Bbbbbbbbbbbbb);
   printf("%d\n", Aaaaaaaaaaaaa * Bbbbbbbbbbbbb);
   printf("%d\n", Aaaaaaaaaaaaa / Bbbbbbbbbbbbb);
   printf("%d\n", Aaaaaaaaaaaaa % Bbbbbbbbbbbbb);
   Xxxxxxxxxxxxx = (Aaaaaaaaaaaaa - Bbbbbbbbbbbbb) * 10 + (Aaaaaaaaaaaaa + Bbbbbbbbbbbbb) / 10;
   Yyyyyyyyyyyyy = Xxxxxxxxxxxxx + (Xxxxxxxxxxxxx % 10);
   printf("%d\n", Xxxxxxxxxxxxx);
   printf("%d\n", Yyyyyyyyyyyyy);
   system("pause");
    return 0;
}

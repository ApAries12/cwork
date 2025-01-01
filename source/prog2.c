#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int Aaaaaaaaaaaaa, Bbbbbbbbbbbbb, Ccccccccccccc;
   printf("Enter Aaaaaaaaaaaaa:");
   scanf("%d", &Aaaaaaaaaaaaa);
   printf("Enter Bbbbbbbbbbbbb:");
   scanf("%d", &Bbbbbbbbbbbbb);
   printf("Enter Ccccccccccccc:");
   scanf("%d", &Ccccccccccccc);
   if ((Aaaaaaaaaaaaa > Bbbbbbbbbbbbb))
   {
   if ((Aaaaaaaaaaaaa > Ccccccccccccc))
   {
   goto Abigger;
   }
   else
   {
   printf("%d\n", Ccccccccccccc);
   goto Outofif;
Abigger:
   printf("%d\n", Aaaaaaaaaaaaa);
   goto Outofif;
   }
   }
   if ((Bbbbbbbbbbbbb < Ccccccccccccc))
   {
   printf("%d\n", Ccccccccccccc);
   }
   else
   {
   printf("%d\n", Bbbbbbbbbbbbb);
   }
Outofif:
   if (((Aaaaaaaaaaaaa == Bbbbbbbbbbbbb) && (Aaaaaaaaaaaaa == Ccccccccccccc) && (Bbbbbbbbbbbbb == Ccccccccccccc)))
   {
   printf("%d\n", 1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if (((Aaaaaaaaaaaaa < 0) || (Bbbbbbbbbbbbb < 0) || (Ccccccccccccc < 0)))
   {
   printf("%d\n", -1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if ((!(Aaaaaaaaaaaaa < (Bbbbbbbbbbbbb + Ccccccccccccc))))
   {
   printf("%d\n", (10));
   }
   else
   {
   printf("%d\n", (0));
   }
   system("pause");
    return 0;
}

#include <stdio.h>
#include <ctype.h> // belgilar bilan ishlaydigan funksiyalar uchun
#include <string.h>
int main()
{
    char  matn[100];
    printf("matnni kiriting:");
    scanf("%s",matn);
    int size=0;
       for (int i=0;i<strlen(matn); i++)
       {
         size++;
       }
       printf("seriyada %dta belgi bor\n",size);
   for (int i=0;i<strlen(matn); i++)
       {
          if (isupper(matn[i]))
            {
                matn[i]=matn['*'];
            }
       }
       for (int i=0;i<size;i++)
       {
         printf("%c",matn[i]);
       }
       return 0;
}       
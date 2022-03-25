         // bir qatorli komentariyalar 
         /* ko'p qatorli komentariyalar boshlanishi 
            \n yangi qatorga o'tqazadi
            \t tab 
            %d int  tipidagi  butun sonlar uchun ishlatiladi
            butun sonlar xotiradan 4 bayt joyni egallaydi
            %f float tipidagi haqiqiy sonlar uchun ishlatiladi
            haqiqiy sonlar xotirada 4 bayt joyni egallaydi 
            %c char belgi uchun ishlatiladigan belgilar uchun ishlatiladi
            har bir belgi xotiradan 1 bayt joyni egallaydi 
            %s char seriya uchun ishlatiladigan belgilar yig'indisi
            char seriyada qancha so'z kiritsagiz shuncha joyni egallaydi misol uchun Salom so'zi 5 beglidan iborat 5 bayt joyni egallaydi
            double numbers ham butun sonlar ham haqiqiy sonlar bilan ishlaydigan sonlar bu xotirada 8 bayt joyni egallaydi
            bool bu faqat 1 yoki 0 bilan ishlaydi 1 true 0 folse ishlaydi bool ning kutubxonasi 
            tugashi*/

#include <stdio.h>
int main() 
{
    printf("Salom bolalar!\n");               // bizga bunda ekranga printfni ichiga nima yozilsa usha narsani chiqarib beradi
    printf("Bugun sizlar bilan c dasturlash tilidagi birinchi kodimizni yozmoqdamiz\n");
    printf("I love apple!!!!!\n");
    printf("1\n2\n3\n");
    printf("5\t6\t7\t8\n");
    int son=123;                           // bunda int tipidagi butun sonlar bilan ishlaydigan spetvikator
    float number=34;                      // bunda float tipidagi haqiqiy son bilan ishlaydigan spetvikator  34.000000
    char belgi= 'c';
    char seriya[11]="Salom dunyo";
    double numbers;
   // bool t;
    printf("Son = %d\n number = %f\n belgi = %c\n seriya = %s\n", son, number, belgi, seriya);
    int x=10, y=90, c;
    c=x+y;
    printf("x=%d  y=%d \nyig'indisi = %d ",x,y, x+y);
    printf("\n");
    float a=5;
    float b=2;
    float d;
    d=a/b;
    printf("a va b ning bo'linmasi=%f\n",d);
    int q,t;
    printf("q ga butun son kiriting=");
    scanf("%d",&q);
    printf("t ga butun son kiriting=");
    scanf("%d",&t);
    char matn[100]="";
    printf("Matn kiriting:\n");
    scanf("%s",matn);
    return 0;
}
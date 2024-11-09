/*===========================================================================*/
/*                               ZADANIE 60                                  */
/*===========================================================================*/


//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    int choice=-1;
//    printf("Autor: Franciszek Wozniak\n");
//    while (choice!=0) {
//        printf("Program oblicza pole trojkata na podstawie podanych danych.\n");
//        printf("Wybierz opcje: \n");
//        printf("0. Zakonczenie programu\n");
//        printf("1. Bok i spuszczona nan wysokosc\n");
//        printf("2. Dwa boki i kat miedzy nimi\n");
//        printf("3. Trzy boki\n");
//        while (scanf_s("%d", &choice) != 1 || getchar() != '\n') {
//            printf("Zle podane dane, podaj ponownie\n");
//            while ( getchar() != '\n');
//        }
//        switch (choice) {
//            case 0:
//            {
//                printf("Wybrales opcje zakonczenia programu\n");
//            }break;
//
//            case 1:
//            {
//                double a, h;
//                printf("Podaj dlugosc boku, oraz wysokosc.\n");
//                while (scanf_s("%lf", &a) != 1 || getchar() != '\n' || scanf_s("%lf", &h) != 1 || getchar() != '\n')
//                {
//                    printf("Zle podane dane, podaj ponownie\n");
//                    while ( getchar() != '\n');
//                }
//                printf("Pole trojkata wynosi: %lf\n", a * h / 2);
//            }break;
//
//            case 2:
//            {
//                double a, b;
//                printf("Podaj dlugosc pierwszego boku, nastepnie drugiego boku.\n");
//                while (scanf_s("%lf", &a) != 1 || getchar() != '\n' || scanf_s("%lf", &b) != 1 || getchar() != '\n')
//                {
//                    printf("Zle podane dane, podaj ponownie\n");
//                    while ( getchar() != '\n');
//                }
//
//                int choice2;
//                printf("Wybierz czy chcesz podac kat w radianach czy stopniach\n1. Radiany\n2. Stopnie\n");
//                while (scanf_s("%d", &choice2) != 1 || getchar() != '\n' || (choice2!=1 && choice2!=2))
//                {
//                    printf("Zle podane dane, podaj ponownie\n");
//                    while ( getchar() != '\n');
//                }
//
//                if (choice2 == 1) {
//                    double alfa;
//                    printf("Podaj kat w radianach\n");
//                    while (scanf_s("%lf", &alfa) != 1 || getchar() != '\n')
//                    {
//                        printf("Zle podane dane, podaj ponownie\n");
//                        while ( getchar() != '\n');
//                    }
//
//                    printf("Pole trojkata wynosi: %lf\n", a * b * sin(alfa) / 2);
//                }
//                else if (choice2 == 2) {
//                    double alfa;
//                    printf("Podaj kat w stopniach\n");
//                    while (scanf_s("%lf", &alfa) != 1 || getchar() != '\n')
//                    {
//                        printf("Zle podane dane, podaj ponownie\n");
//                        while ( getchar() != '\n');
//                    }
//
//                    printf("Pole trojkata wynosi: %lf\n", a * b * sin(alfa * M_PI / 180.0) / 2);
//                }
//
//            }break;
//
//            case 3:
//            {
//                double a, b, c;
//                printf("Podaj dlugosc pierwszego boku, nastepnie drugiego boku, oraz trzeciego boku.\n");
//                while (scanf_s("%lf", &a) != 1 || getchar() != '\n' || scanf_s("%lf", &b) != 1 || getchar() != '\n' ||
//                    scanf_s("%lf", &c) != 1 || getchar() != '\n')
//                {
//                    printf("Zle podane dane, podaj ponownie\n");
//                    while ( getchar() != '\n');
//                }
//                double max;
//                if (a > b) {
//                    if (a > c)
//                        max = a;
//                    else
//                        max = c;
//                } else {
//                    if (b > c)
//                        max = b;
//                    else
//                        max = c;
//                }
//                if ((max == a && max > b + c) || (max == b && max > a + c) || (max == c && max > b + a))
//                    printf("Taki trojkat nie istnieje\n");
//                else {
//                    double p = (a + b + c) / 2;
//                    printf("Pole trojkata wynosi: %lf\n", sqrt(p * (p - a) * (p - b) * (p - c)));
//                }
//            }break;
//
//            default:
//                printf("Nie ma takiej opcji w menu\n");
//                break;
//        }
//    }
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 61                                  */
/*===========================================================================*/


//#include <stdio.h>
//
//int main()
//{
//    int h=0,m=0;
//    char temp='\0';
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program sprawdza czy wprowadzona godzina jest poprawna\n");
//    printf("Podaj godzine w formacie hh:mm: ");
//
//
//    do
//    {
//        if(temp!='\0')
//        {
//            printf("Pierwszym znakiem powinna byc cyfra 0, 1, lub 2\n");
//            printf("Podaj godzine od pierwszego znaku ponownie\n");
//            if(temp!='\n')
//                while ( getchar() != '\n');
//        }
//        temp=getchar();
//    }while(temp<'0'||temp>'2');
//    h+=10*(temp-'0');
//    temp='\0';
//
//    do
//    {
//        if(temp!='\0')
//        {
//            printf("Drugim znakiem powinna byc cyfra od 0 do 9 lub od 0 do 3 jesli pierwszym znakiem bylo 2\n");
//            printf("Podaj godzine od drugiego znaku ponownie\n");
//            if(temp!='\n')
//                while ( getchar() != '\n');
//        }
//        temp=getchar();
//    }while((temp<'0'||temp>'9')||(h==20&&temp>'4'));
//    h+=(temp-'0');
//    temp='\0';
//
//    do
//    {
//        if(temp!='\0')
//        {
//            printf("Trzecim znakiem powinien byc :\n");
//            printf("Podaj godzine od trzeciego znaku ponownie\n");
//            if(temp!='\n')
//                while ( getchar() != '\n');
//        }
//        temp=getchar();
//    }while(temp!=':');
//    temp='\0';
//
//    do
//    {
//        if(temp!='\0')
//        {
//            printf("Czwartym znakiem powinna byc cyfra od 0 do 5\n");
//            printf("Podaj godzine od czwartego znaku ponownie\n");
//            if(temp!='\n')
//                while ( getchar() != '\n');
//        }
//        temp=getchar();
//    }while(temp<'0'||temp>'5');
//    m+=10*(temp-'0');
//    temp='\0';
//
//    do
//    {
//        if(temp!='\0')
//        {
//            printf("Piatym znakiem powinna byc cyfra od 0 do 9\n");
//            printf("Podaj godzine od drugiego znaku ponownie\n");
//            if(temp!='\n')
//                while ( getchar() != '\n');
//        }
//        temp=getchar();
//    }while(temp<'0'||temp>'9');
//    m+=(temp-'0');
//    temp='\0';
//
//    do
//    {
//        if(temp!='\0')
//        {
//            printf("Szostym znakiem powinien byc enter\n");
//            printf("Podaj znak enter\n");
//            while ( getchar() != '\n');
//        }
//        temp=getchar();
//    }while (temp!='\n');
//    temp='\0';
//    printf("Oto wczytana godzina: \n%d ", m);
//    if((m>20 || m<10) && (m%10>=2 && m%10<=4))
//        printf("minuty");
//    else if(m==1)
//        printf("minuta");
//    else
//        printf("minut");
//
//    printf(" po %d\n", h);
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 62                                  */
/*===========================================================================*/


//#include <stdio.h>
//#include <ctype.h>
//
//int main()
//{
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program poprosi o imie i sprawdzi wlasciwosc podanego imienia");
//    while (1)
//    {
//        printf("\nJak masz na imie?\n");
//        char letter = getchar();
//        if (!isupper(letter))
//        {
//            printf("Imie nalezy pisac wielka litera\n");
//            while (getchar() != '\n');
//            continue;
//        }
//        printf("Masz na imie ");
//        putchar(letter);
//        while (letter != '\n')
//        {
//            letter = getchar();
//            if (!islower(letter) && letter != '\n')
//            {
//                printf("...?\n");
//                while (getchar() != '\n');
//                if (isupper(letter))
//                    printf("Poza pierwsza litera wszystkie powinny byc male.\n");
//                else
//                    printf("Imie sklada sie tylko z liter.\n");
//                break;
//            }
//            else
//            {
//                putchar(letter);
//                if (letter == '\n')
//                {
//                    printf("\nKoniec programu.");
//                    return 0;
//                }
//            }
//        }
//    }
//}


/*===========================================================================*/
/*                               ZADANIE 63                                  */
/*===========================================================================*/


//#include <stdio.h>
//#include <math.h>
//#define POCZ 0.0 //poczatek przedzialu
//#define KON 0.125 //koniec przedzialu
//#define ILE 33 //liczba punktow
//
//int main(){
//    double krok;//odleglosc miedzy pkt.
//    krok = (KON-POCZ)/(ILE-1);
//    printf("Program oblicza bledy przyblizenia");
//    printf(" funkcji sin(x) przez x\ndla %d", ILE);
//    printf(" rownoodleglych punktow z przedzialu");
//    printf(" [%.g,%g].\n\n%-14s", POCZ, KON, "x");
//    printf("%-13s%-12s","sin(x)", "x-sin(x)");
//    printf("%-12s\n", "|(x-sin(x))/x|");
//    for (int i=0;i <= ILE;i++)
//    {
//        double x = POCZ+i*krok;
//        double sin_x = sin(x);
//        double bl_b = x-sin_x;
//        double bl_w = x!=0.0?fabs(bl_b/x):-1.0;
//        printf("\n%11.9f%14.9f%12.3e",x,sin_x,bl_b);
//        if (bl_w != -1.0)
//        printf("%12.3e",bl_w);
//    }
//    printf("\n\nKoniec programu.\n");
//}


/*===========================================================================*/
/*                               ZADANIE 64                                  */
/*===========================================================================*/


//#include <stdio.h>
//#include <limits.h>
//
//int main()
//{
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program podaje 10 kolejnych liczb zaczynajac od intmax-5\n");
//    for (int i =0; i < 10; i++)
//    {
//        printf("%d. %d\n",i+1, i+(INT_MAX-5));
//    }
//}


/*===========================================================================*/
/*                               ZADANIE 65                                  */
/*===========================================================================*/


//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program podaje n poteg dwojki\n");
//    printf("Podaj ilosc poteg: ");
//    int number;
//    if(scanf_s("%d", &number)!=1||getchar()!='\n')
//        printf("Blednie podane dane\n");
//    else
//    {
//        for (int i = 1; i <= number; i++)
//        {
//            printf("%d potega dwojki wynosi: %lf\n", i, pow(2, i));
//        }
//    }
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 66                                  */
/*===========================================================================*/


//#include <stdio.h>
//
//int main()
//{
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program prosi o podanie 10 liczb a nastepnie wypisuje ich srednia arytemtyczna\n");
//    double sum=0;
//    for (int i=1; i<=10;i++) {
//        double number;
//        printf("Podaj liczbe: \n");
//        while (scanf_s("%lf", &number) != 1 || getchar() != '\n')
//        {
//            printf("Blednie podane dane\n");
//            while (getchar() != '\n');
//        }
//        sum+=number;
//    }
//    printf("Srednia arytmetyczna tych liczb wynosi: %lf\n", sum/10);
//    printf("Koniec programu.");
//}
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
//
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
//
//int main()
//{
//
//}


/*===========================================================================*/
/*                               ZADANIE 64                                  */
/*===========================================================================*/


//#include <stdio.h>
//
//int main()
//{
//
//}


/*===========================================================================*/
/*                               ZADANIE 65                                  */
/*===========================================================================*/


//#include <stdio.h>
//
//int main()
//{
//
//}


/*===========================================================================*/
/*                               ZADANIE 66                                  */
/*===========================================================================*/


//#include <stdio.h>
//
//int main()
//{
//
//}



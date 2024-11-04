/*===========================================================================*/
/*                               ZADANIE 52                                  */
/*===========================================================================*/


//#include <stdio.h>
//
//int main()
//{
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program prosi o podanie jednej linni tekstu a nastepnie przepisze ja usuwajac wielokrotne spacje\n");
//    printf("Podaj tekst: \n");
//    char previousChar = '\0';
//    while (previousChar!='\n')
//    {
//        char currentChar = getchar();
//        if(previousChar!=' ' || currentChar!=' ')
//            putchar(currentChar);
//        previousChar = currentChar;
//    }
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 53                                  */
/*===========================================================================*/


//#include <stdio.h>
//
//int main()
//{
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program prosi o podanie liczby a nastepnie entera\n");
//    printf("Podaj liczbe: \n");
//    int number;
//    while (scanf_s("%d", &number)!=1 || getchar() != '\n')
//    {
//        while ( getchar() != '\n');
//        printf("Blednie podane dane, podaj poprawne\n");
//    }
//    printf("Wprowadzona liczba: %d\n", number);
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 54                                  */
/*===========================================================================*/


//#include <stdio.h>
//
//int main()
//{
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program prosi o litery t a nastepnie entera\n");
//    printf("Podaj litere: \n");
//    while (getchar() != 't' || getchar() != '\n')
//    {
//        while ( getchar() != '\n');
//        printf("Blednie podane dane, podaj poprawne\n");
//    }
//    printf("Podane litere t\n");
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 55                                  */
/*===========================================================================*/


//#include <stdio.h>
//#include <limits.h>
//
//int main()
//{
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program prosi o podanie liczb a nastepnie wskazuje minimalna\n");
//    int minNumber = INT_MAX;
//    int number=1;
//    while (number != 0) {
//        printf("Podaj liczbe: \n");
//        while (scanf_s("%d", &number) != 1 || getchar() != '\n')
//        {
//            printf("Blednie podane dane\n");
//            while (getchar() != '\n');
//        }
//        if(number<minNumber && number!=0)
//            minNumber=number;
//    }
//    printf("Najmniejsza wprowadzona liczba jest: %d\n", minNumber);
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 56                                  */
/*===========================================================================*/


//#include <stdio.h>
//
//int main()
//{
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program prosi o podanie 10 liczb a nastepnie wypisuje ich srednia arytemtyczna\n");
//    int i=1;
//    double sum=0;
//    while (i<=10) {
//        double number;
//        printf("Podaj liczbe: \n");
//        while (scanf_s("%lf", &number) != 1 || getchar() != '\n')
//        {
//            printf("Blednie podane dane\n");
//            while (getchar() != '\n');
//        }
//        sum+=number;
//        i++;
//    }
//    printf("Srednia arytmetyczna tych liczb wynosi: %lf\n", sum/i);
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 57                                  */
/*===========================================================================*/


//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program prosi o podanie liczb a nastepnie wypisuje ich srednia arytemtyczna i geometryczna\n");
//    int i=0;
//    double sum=0;
//    double multiplie=1;
//    double number=1;
//    while (number!=0){
//        printf("Podaj liczbe: \n");
//        while (scanf_s("%lf", &number) != 1 || getchar() != '\n')
//        {
//            printf("Blednie podane dane\n");
//            while (getchar() != '\n');
//        }
//        if(number==0)
//            break;
//        sum+=number;
//        multiplie*=number;
//        i++;
//    }
//    printf("Srednia arytmetyczna tych liczb wynosi: %lf, a geometryczna: %lf\n", sum/i, pow(multiplie, 1.0/i));
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 58                                  */
/*===========================================================================*/


//#include <stdio.h>
//
//int main()
//{
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program prosi o podanie ciagu zer i jedynek a nastepnie wypisuje odpowiadajaca jej liczbe w systemie dziesietnym (maksymalnie 31 cyfr)\n");
//    printf("Podaj ciag: \n");
//    unsigned long decimalNumber=0;
//    int i=0;
//    while (i<31)
//    {
//        char number = getchar();
//        if(number=='\n')
//            break;
//        else if(number!='0' && number!='1')
//            printf("Blednie podane dane\n");
//        else
//        {
//            decimalNumber=decimalNumber*2+(number-'0');
//        }
//        i++;
//    }
//    printf("Podana liczba w systemie dziesietnym wynosi: %lu\n", decimalNumber);
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 59                                  */
/*===========================================================================*/


//#include <stdio.h>
//
//int main() {
//    double x=0, y=0;
//    int choice = -1;
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program pobiera dwie liczby i wykonuje dzialanie arytmetyczne\n");
//    while (choice!=0)
//    {
//        printf("Wybierz rodzaj akcji:\n");
//        printf("0. Zakoncz program\n");
//        printf("1. Wczytaj liczby\n");
//        printf("2. Dodaj\n");
//        printf("3. Odejmij\n");
//        printf("4. Pomnoz\n");
//        printf("5. Podziel\n");
//        if (scanf_s("%d", &choice) != 1 || getchar() != '\n')
//        {
//            printf("Zle podane dane\n");
//            while (getchar() != '\n');
//        }
//        else {
//            if(choice!=0 && choice!=1 && x==0 &&y==0)
//            {
//                printf("Nie podano liczb\n");
//                continue;
//            }
//            switch (choice) {
//                case 0:
//                    printf("Wybrano zakonczenie programu\n");
//                    break;
//
//                case 1:
//                {
//                    printf("Podaj dwie liczby:\n");
//                    while(scanf_s("%lf", &x) != 1 || getchar() != '\n' || scanf_s("%lf", &y) != 1 || getchar() != '\n')
//                    {
//                        printf("Zle podane dane\n");
//                        while (getchar() != '\n');
//                    }
//                }break;
//
//                case 2:
//                    printf("Wynik: %lf\n", x + y);
//                    break;
//
//                case 3:
//                    printf("Wynik: %lf\n", x - y);
//                    break;
//
//                case 4:
//                    printf("Wynik: %lf\n", x * y);
//                    break;
//
//                case 5:
//                    printf("Wynik: %lf\n", x / y);
//                    break;
//
//                default:
//                    printf("Nie ma takiej opcji w menu\n");
//                    break;
//            }
//        }
//    }
//    printf("Koniec programu.");
//}

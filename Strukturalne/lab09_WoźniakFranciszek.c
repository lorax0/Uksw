#include <stdio.h>
#include <math.h>

int LoadNumber(void)
{
    int number;
    while (scanf_s("%d", &number) != 1 || number <= 0 || getchar() != '\n') {
        printf("Blednie podane dane\n");
        while (getchar() != '\n');
    }
    return number;
}


/*===========================================================================*/
/*                               ZADANIE 67                                  */
/*===========================================================================*/



//int main()
//{
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program rysuje proszona ilosc gwiazdek w jednej linii\n");
//    printf("Podaj ilosc gwiazdek: ");
//    int number = LoadNumber();
//    for (int i = 0; i < number; i++)
//    {
//            putchar('*');
//    }
//    printf("\nKoniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 68                                  */
/*===========================================================================*/


//int main()
//{
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program rysuje kwadrat zlozony z gwiazdek\n");
//    printf("Podaj szerokosc kwadratu: ");
//    int number = LoadNumber();
//    for (int i = 0; i < number; i++)
//    {
//        for (int j = 0; j < number; j++)
//        {
//            putchar('*');
//        }
//        printf("\n");
//    }
//    printf("\nKoniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 69                                  */
/*===========================================================================*/


//int main()
//{
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program rysuje prostokat o dwa razy mniejszej szerokosci niz dlugosci zlozony z gwiazdek\n");
//    printf("Podaj szerokosc prostokata: ");
//    int number = LoadNumber();
//    for (int i = 0; i < number; i++)
//    {
//        for (int j = 0; j < number*2; j++)
//        {
//            putchar('*');
//        }
//        printf("\n");
//    }
//    printf("\nKoniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 70                                  */
/*===========================================================================*/


//int main()
//{
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program rysuje trojkat z warunkami z zadania z gwiazdek\n");
//    printf("Podaj szerokosc trojkata: ");
//    int number = LoadNumber();
//    for (int i = 1; i <= number; i++)
//    {
//        for (int j = 0; j < i; j++)
//        {
//            putchar('*');
//        }
//        printf("\n");
//    }
//    printf("\nKoniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 71                                  */
/*===========================================================================*/



//int main()
//{
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program rysuje trojkat z warunkami z zadania z gwiazdek\n");
//    printf("Podaj szerokosc trojkata: ");
//    int number = LoadNumber();
//    for (int i = 1; i <= number; i++)
//    {
//        for (int j = 0; j < number-i; j++)
//        {
//            putchar(' ');
//        }
//        for (int j = 0; j < i*2-1; j++)
//        {
//            putchar('*');
//        }
//        printf("\n");
//    }
//    printf("\nKoniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 72                                  */
/*===========================================================================*/

//void Header(int number)
//{
//    printf("    ");
//    for (int i = 1; i <= number; i++)
//    {
//        printf("%5d ", i);
//    }
//    printf("\n");
//}
//
//void Line(int number)
//{
//    for (int i = 0; i < 6*number+3; i++)
//    {
//        printf("-");
//    }
//    printf("\n");
//}
//
//void Table(int number)
//{
//    for (int i = 1; i <= number; i++)
//    {
//        printf("%d | ", i);
//        for (int j = 1; j <= number; j++)
//        {
//            printf("%5d ", i*j);
//        }
//        printf("\n");
//    }
//}
//
//int main()
//{
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program rysuje tabliczke mnozenia do podanej liczby\n");
//    printf("Podaj liczbe: ");
//    int number = LoadNumber();
//    Header(number);
//    Line(number);
//    Table(number);
//    printf("\nKoniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 73                                  */
/*===========================================================================*/


//void WyswietlFraze(int code)
//{
//    switch (code)
//    {
//        case 0:
//        {
//            printf("%d null\n", code);
//        }break;
//
//        case 7:
//        {
//            printf("%d bel\n", code);
//        }break;
//
//        case 8:
//        {
//            printf("%d bs\n", code);
//        }break;
//
//        case 9:
//        {
//            printf("%d ht\n", code);
//        }break;
//
//        case 10:
//        {
//            printf("%d nl\n", code);
//        }break;
//
//        case 11:
//        {
//            printf("%d vt\n", code);
//        }break;
//
//        case 12:
//        {
//            printf("%d np\n", code);
//        }break;
//
//        case 13:
//        {
//            printf("%d cr\n", code);
//        }break;
//
//        case 26:
//        {
//            printf("%d eof\n", code);
//        }break;
//
//        case 27:
//        {
//            printf("%d esc\n", code);
//        }break;
//
//        case 127:
//        {
//            printf("%d del\n", code);
//        }break;
//
//        default:
//        {
//            printf("%d %c\n", code, (char) code);
//        }break;
//    }
//}
//
//int main()
//{
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program wypisze tabele znakow\n");
//    for (int i = 0; i <= 255; i++)
//    {
//        WyswietlFraze(i);
//    }
//    printf("\nKoniec programu.");
//}

/*===========================================================================*/
/*                               ZADANIE  74                                 */
/*===========================================================================*/


//int main()
//{
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program wypisze sume do podanej liczby\n");
//    printf("Podaj liczbe: ");
//    int number = LoadNumber();
//    int sum = 0;
//    for (int i = 1; i <= number; i++)
//    {
//        if(i!=1)
//            printf(" + ");
//        int tempNumber=0;
//        for (int j = 0; j < i; j++)
//        {
//            tempNumber+=i*pow(10, j);
//        }
//        sum += tempNumber;
//        printf("%d", tempNumber);
//    }
//    printf(" = %d", sum);
//    printf("\nKoniec programu.");
//}
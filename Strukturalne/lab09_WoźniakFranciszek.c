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

void DrawSignLine(int length, char sign)
{
    for (int i = 0; i < length; i++)
    {
        putchar(sign);
    }
}

void DrawStarLine(int length)
{
    DrawSignLine(length, '*');
}

void Autor(void)
{
    printf("Autor: Franciszek Wozniak\n");
}

/*===========================================================================*/
/*                               ZADANIE 67                                  */
/*===========================================================================*/

//void Info(void)
//{
//    Autor();
//    printf("Program rysuje proszona ilosc gwiazdek w jednej linii\n");
//    printf("Podaj ilosc gwiazdek: ");
//}
//
//int main()
//{
//    Info();
//    int number = LoadNumber();
//    DrawStarLine(number);
//    printf("\nKoniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 68                                  */
/*===========================================================================*/

//void Info(void)
//{
//    Autor();
//    printf("Program rysuje kwadrat zlozony z gwiazdek\n");
//    printf("Podaj szerokosc kwadratu: ");
//}
//
//void DrawStarSquare(int width)
//{
//    for (int i = 0; i < width; i++)
//    {
//        DrawStarLine(width);
//        printf("\n");
//    }
//}
//
//int main()
//{
//    Info();
//    int number = LoadNumber();
//    DrawStarSquare(number);
//    printf("\nKoniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 69                                  */
/*===========================================================================*/

//void Info(void)
//{
//    Autor();
//    printf("Program rysuje prostokat o dwa razy mniejszej szerokosci niz dlugosci zlozony z gwiazdek\n");
//    printf("Podaj szerokosc prostokata: ");
//}
//
//void DrawStarRectangle(int height)
//{
//    for (int i = 0; i < height; i++)
//    {
//        DrawStarLine(height*2);
//        printf("\n");
//    }
//}
//
//int main()
//{
//    Info();
//    int number = LoadNumber();
//    DrawStarRectangle(number);
//    printf("\nKoniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 70                                  */
/*===========================================================================*/

//void Info(void)
//{
//    Autor();
//    printf("Program rysuje trojkat z warunkami z zadania z gwiazdek\n");
//    printf("Podaj szerokosc trojkata: ");
//}
//
//void DrawStarTriangle(int width)
//{
//    for (int i = 1; i <= width; i++)
//    {
//        DrawStarLine(i);
//        printf("\n");
//    }
//}
//
//int main()
//{
//    Info();
//    int number = LoadNumber();
//    DrawStarTriangle(number);
//    printf("\nKoniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 71                                  */
/*===========================================================================*/

//void Info(void)
//{
//    Autor();
//    printf("Program rysuje trojkat z warunkami z zadania z gwiazdek\n");
//    printf("Podaj szerokosc trojkata: ");
//}
//
//void DrawTriangle(int width)
//{
//    for (int i = 1; i <= width; i++)
//    {
//        DrawSignLine(width-i, ' ');
//        DrawStarLine(i*2-1);
//        printf("\n");
//    }
//}
//
//int main()
//{
//    Info();
//    int number = LoadNumber();
//    DrawTriangle(number);
//    printf("\nKoniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 72                                  */
/*===========================================================================*/

//void Info(void)
//{
//    Autor();
//    printf("Program rysuje tabliczke mnozenia do podanej liczby\n");
//}
//
//void Header(int number)
//{
//    printf("     ");
//    for (int i = 1; i <= number; i++)
//    {
//        printf("%4d ", i);
//    }
//    printf("\n");
//}
//
//void Table(int number)
//{
//    printf("\n");
//    for (int i = 1; i <= number; i++)
//    {
//        printf("%2d | ", i);
//        for (int j = 1; j <= number; j++)
//        {
//            printf("%4d ", i*j);
//        }
//        printf("\n");
//    }
//}
//
//#define Width 15
//
//int main()
//{
//    Info();
//    Header(Width);
//    DrawSignLine(5*(Width+1), '-');
//    Table(Width);
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
//void Info(void)
//{
//    Autor();
//    printf("Program wypisze tabele znakow\n");
//}
//
//int main()
//{
//    Info();
//    printf("Autor: Franciszek Wozniak\n");
//    for (int i = 0; i <= 255; i++)
//    {
//        WyswietlFraze(i);
//    }
//    printf("\nKoniec programu.");
//}

/*===========================================================================*/
/*                               ZADANIE  74                                 */
/*===========================================================================*/

//void Info(void)
//{
//    Autor();
//    printf("Program wypisze sume do podanej liczby\n");
//    printf("Podaj liczbe: ");
//}
//
//int NumberWithAllSameDigits(int digitsCount)
//{
//    int tempNumber =0;
//    for (int j = 0; j < digitsCount; j++)
//    {
//        tempNumber+=digitsCount*pow(10, j);
//    }
//    return tempNumber;
//}
//
//void SumWithWritingComponents(int number)
//{
//    int sum = 0;
//    for (int i = 1; i <= number; i++)
//    {
//        if(i!=1)
//            printf(" + ");
//        int tempNumber=NumberWithAllSameDigits(i);
//        sum += tempNumber;
//        printf("%d", tempNumber);
//    }
//    printf(" = %d", sum);
//}
//
//int main()
//{
//    Info();
//    int number = LoadNumber();
//    SumWithWritingComponents(number);
//    printf("\nKoniec programu.");
//}
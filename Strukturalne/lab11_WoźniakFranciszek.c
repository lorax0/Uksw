#include <stdio.h>
#include <limits.h>

int LoadNumber(int minNumber)
{
    int number;
    while (scanf_s("%d", &number) != 1 || number < minNumber || getchar() != '\n') {
        printf("Blednie podane dane\n");
        while ( getchar() != '\n');
    }
    return number;
}

void Autor(void)
{
    printf("Autor: Franciszek Wozniak\n");
}


/*===========================================================================*/
/*                               ZADANIE 82                                  */
/*===========================================================================*/

//void Info()
//{
//    Autor();
//    printf("Program wczytuje n liczb calkowitych i sprawdza czy sa jakies jednakowe\n");
//}
//
//void LoadNumbers(int *numbers, int count)
//{
//    for (int i = 0; i < count; i++)
//    {
//        numbers[i] = LoadNumber(INT_MIN);
//    }
//}
//
//_Bool CheckIdentic(int *numbers, int count)
//{
//    for (int i = 0; i < count; i++)
//    {
//        for (int j = i; j < count; j++)
//        {
//            if(numbers[i]==numbers[j] && i!=j)
//                return 1;
//        }
//    }
//    return 0;
//}
//
//int main()
//{
//    Info();
//    int numbers[100];
//    printf("Podaj ilosc liczb: ");
//    int count= LoadNumber(INT_MIN);
//    printf("Podaj ciag liczb\n");
//    LoadNumbers(numbers, count);
//    if(CheckIdentic(numbers, count))
//        printf("Wsrod nich znajduje sie para jednakowych\n");
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 83                                  */
/*===========================================================================*/


//void Info()
//{
//    Autor();
//    printf("Program oblicza wartosc wielomianu na podstawie podanych wspolczynnikow\n");
//}
//
//void LoadNumbers(int *numbers, int count)
//{
//    for (int i = 0; i < count; i++)
//        numbers[i] = LoadNumber(INT_MIN);
//}
//
//int Calculate(int *a, int x, int count)
//{
//    for (int i = count - 2; i >= 0; i--)
//        a[i] += x * a[i + 1];
//    return a[0];
//
//}
//
//int main()
//{
//    Info();
//    int a[100];
//    printf("Podaj stopien wielomianu: ");
//    int count = LoadNumber(INT_MIN);
//    printf("Podaj argument: ");
//    int x = LoadNumber(INT_MIN);
//    printf("Podaj ciag wspolczynnikow zaczynajac od a0\n");
//    LoadNumbers(a, count);
//    int y = Calculate(a, x, count);
//    printf("Wartosc tego wielomianu wynosi %d\n", y);
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 84                                  */
/*===========================================================================*/

//void Info()
//{
//    Autor();
//    printf("Program wypisze trojkat pascala\n");
//}
//
//int CalculateDwumian(int n, int k)
//{
//    double result=1;
//    for (int i = 1; i <= n-k; i++)
//    {
//        result*=((double)(i+k)/i);
//    }
//    return (int)result;
//}
//
//void DisplayPascalTriangle(int height)
//{
//    for (int i = 0; i < height; i++)
//    {
//        for (int j = 0; j <= i; j++)
//        {
//            int result = CalculateDwumian(i,j);
//            printf("%d ", result);
//        }
//        printf("\n");
//    }
//}
//
//int main()
//{
//    Info();
//    DisplayPascalTriangle(35);
//    printf("Koniec programu.");
//}

/*===========================================================================*/
/*                               ZADANIE 85                                  */
/*===========================================================================*/
//#define COUNT 35
//
//void Info()
//{
//    Autor();
//    printf("Program wypisze trojkat pascala: \n");
//}
//
//void DisplayPascalTriangle(int height)
//{
//    int a[COUNT];
//    for (int i = 0; i < height; i++)
//    {
//        for (int j = i; j >= 0; j--)
//        {
//            if(j==0||j==i)
//                a[j]=1;
//            else
//                a[j]+=a[j-1];
//            printf("%d ", a[j]);
//        }
//        printf("\n");
//    }
//}
//
//int main()
//{
//    Info();
//    DisplayPascalTriangle(COUNT);
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 86                                  */
/*===========================================================================*/

//#include <math.h>
//const int YAxisSize = 4;
//const int FunctionXAxisSize = 32;
//const int XAxisSize = 36;
//
//void Info()
//{
//    Autor();
//    printf("Program wypisze wykres funkcji\n");
//}
//
//void CalculateValue(double* numbers)
//{
//    double xstart=0, xend=2*M_PI; //Przedzial argumentow
//    double roznica = xend-xstart;
//    for (int i = 0; i <= FunctionXAxisSize; i++)
//    {
//        double x=xstart+i*roznica/FunctionXAxisSize;
//        double value = sin(x); //Dowolnie wybrana funkcja
//        numbers[i] = value;
//    }
//}
//
//void DisplayFunction(double* numbers)
//{
//    for (int i = YAxisSize+1; i >= -YAxisSize; i--)
//    {
//        for (int j = 0; j <= XAxisSize; j++)
//        {
//            if(i==YAxisSize+1)
//            {
//                if(j==0)
//                    putchar('^');
//                else
//                    break;
//            }
//            else if(j>FunctionXAxisSize)
//            {
//                if(i==0 && j==XAxisSize)
//                    putchar('>');
//                else if(i==0)
//                    putchar('-');
//                else
//                    putchar(' ');
//            }
//            else
//            {
//                int value=(int)round((numbers[j]*YAxisSize));
//                if(value==i)
//                    putchar('*');
//                else if(j==0)
//                    putchar('|');
//                else if(i==0)
//                    putchar('-');
//                else
//                    putchar(' ');
//            }
//        }
//        printf("\n");
//    }
//}
//
//int main()
//{
//    Info();
//    double numbers[XAxisSize+1];
//
//    CalculateValue(numbers);
//    DisplayFunction(numbers);
//
//    printf("\n");
//    printf("Koniec programu.");
//}
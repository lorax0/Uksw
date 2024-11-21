#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

const int MAXMATRIXHEIGHT = 25;

void Autor()
{
    printf("Autor: Franciszek Wozniak\n");
}

int LoadNumber(int minNumber)
{
    int number;
    while (scanf_s("%d", &number) != 1 || number < minNumber || getchar() != '\n') {
        printf("Blednie podane dane\n");
        while ( getchar() != '\n');
    }
    return number;
}

void LoadMatrixFromUser(int matrix[25][25], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Podaj liczbe w wierszu %d i kolumnie %d\n", i, j);
            matrix[i][j] = LoadNumber(INT_MIN);
        }
    }
}

void LoadMatrixAsRandomValue(int matrix[MAXMATRIXHEIGHT][MAXMATRIXHEIGHT], int m, int n, int maxRandomValue, int minRandomValue)
{
    srand(time(0));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = rand()%(abs(maxRandomValue)+abs(minRandomValue)+1)+minRandomValue;
        }
    }
}

/*===========================================================================*/
/*                               ZADANIE 87                                  */
/*===========================================================================*/

//void Info()
//{
//    Autor();
//    printf("Program pobiera liczbe kolumn i wierszy a nastepnie wartosci macierzy o takich wymiarach\n");
//}
//
//void DisplayMatrix(int matrix[MAXMATRIXHEIGHT][MAXMATRIXHEIGHT], int n, int m)
//{
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            printf("Element w kolumnie %d i wierszu %d wynosi %d\n", i, j, matrix[i][j]);
//        }
//    }
//}
//
//int main()
//{
//    Info();
//    int m=MAXMATRIXHEIGHT,n=MAXMATRIXHEIGHT;
//    int matrix[m][n];
//    printf("Podaj liczbe kolumn\n");
//    n = LoadNumber(1);
//    printf("Podaj liczbe wierszy\n");
//    m = LoadNumber(1);
//    LoadMatrixFromUser(matrix, m, n);
//    DisplayMatrix(matrix, n, m);
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 88                                  */
/*===========================================================================*/


//void Info()
//{
//    Autor();
//    printf("Program pobiera liczbe kolumn i wierszy a nastepnie wartosci macierzy o takich wymiarach\n");
//    printf("Nastepnie transponuje ta macierz i wypisuje jej wartosci\n");
//}
//
//void DisplayMatrix(int matrix[MAXMATRIXHEIGHT][MAXMATRIXHEIGHT], int m, int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            printf("Element w wierszu %d i kolumnie %d wynosi %d\n", i, j, matrix[j][i]);
//        }
//    }
//}
//
//int main()
//{
//    Info();
//    int m=MAXMATRIXHEIGHT,n=MAXMATRIXHEIGHT;
//    int matrix[m][n];
//    printf("Podaj liczbe kolumn\n");
//    n = LoadNumber(1);
//    printf("Podaj liczbe wierszy\n");
//    m = LoadNumber(1);
//    LoadMatrixFromUser(matrix, m, n);
//    DisplayMatrix(matrix, m, n);
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 89                                  */
/*===========================================================================*/


//void Info()
//{
//    Autor();
//    printf("Program pobiera liczbe kolumn i wierszy a nastepnie elementy macierzy o takich wymiarach\n");
//    printf("Nastepnie znajduje najwieksza wartosc w tej macierzy i ja wypisuje\n");
//}
//
//int GetMaxValueFromMatrix(int matrix[MAXMATRIXHEIGHT][MAXMATRIXHEIGHT], int m, int n)
//{
//    int maxValue = INT_MIN;
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            int value = matrix[i][j];
//            if(maxValue<value)
//                maxValue = value;
//        }
//    }
//    return maxValue;
//}
//
//int main()
//{
//    Info();
//    int m=MAXMATRIXHEIGHT,n=MAXMATRIXHEIGHT;
//    int matrix[m][n];
//    printf("Podaj liczbe kolumn\n");
//    n = LoadNumber(1);
//    printf("Podaj liczbe wierszy\n");
//    m = LoadNumber(1);
//    //LoadMatrixAsRandomValue(matrix, m, n, 8, -8);
//    LoadMatrixFromUser(matrix, m, n);
//    int maxValue = GetMaxValueFromMatrix(matrix, m, n);
//    printf("Maksymalna wartosc z macierzy wynosi %d\n", maxValue);
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 90                                  */
/*===========================================================================*/


//void Info()
//{
//    Autor();
//    printf("Program pobiera liczbe kolumn i wierszy a nastepnie losuje wartosci macierzy o takich wymiarach\n");
//    printf("Nastepnie sprawdza czy w kazdej kolumnie i wierszu jest przynajmniej jedna jedynka\n");
//}
//
//int IsAtLeastOneValueOneInAllMatrixRow(int matrix[MAXMATRIXHEIGHT][MAXMATRIXHEIGHT], int m, int n)
//{
//    for (int i = 0; i < m; i++)
//    {
//        int isValueOne = 0;
//        for (int j = 0; j < n; j++)
//        {
//            if(matrix[i][j])
//                isValueOne=1;
//        }
//        if(!isValueOne)
//            return 0;
//    }
//    for (int i = 0; i < n; i++)
//    {
//        int isValueOne = 0;
//        for (int j = 0; j < m; j++)
//        {
//            if(matrix[j][i])
//                isValueOne=1;
//        }
//        if(!isValueOne)
//            return 0;
//    }
//    return 1;
//}
//
//int main()
//{
//    Info();
//    int m=MAXMATRIXHEIGHT,n=MAXMATRIXHEIGHT;
//    int matrix[m][n];
//    printf("Podaj liczbe kolumn\n");
//    n = LoadNumber(1);
//    printf("Podaj liczbe wierszy\n");
//    m = LoadNumber(1);
//    LoadMatrixFromUser(matrix, m, n);
//    //LoadMatrixAsRandomValue(matrix, m, n, 1, 0);
//    if(IsAtLeastOneValueOneInAllMatrixRow(matrix, m, n))
//        printf("W kazdym wierszu i kolumnie jest przynajmnie jedna jedynka\n");
//    else
//        printf("Nie prawda jest ze w kazdym wierszu i kolumnie jest przynajmnie jedna jedynka\n");
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 91                                  */
/*===========================================================================*/


//void Info()
//{
//    Autor();
//    printf("Program pobiera liczbe kolumn i wierszy a nastepnie pobiera wartosci macierzy o takich wymiarach\n");
//    printf("Nastepnie oblicza sume wszystkich elementow macierzy\n");
//}
//
//int SumAllValueInMatrix(int matrix[MAXMATRIXHEIGHT][MAXMATRIXHEIGHT], int m, int n)
//{
//    int sum = 0;
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            sum+=matrix[i][j];
//        }
//    }
//    return sum;
//}
//
//int main()
//{
//    Info();
//    int m=MAXMATRIXHEIGHT,n=MAXMATRIXHEIGHT;
//    int matrix[m][n];
//    printf("Podaj liczbe kolumn\n");
//    n = LoadNumber(1);
//    printf("Podaj liczbe wierszy\n");
//    m = LoadNumber(1);
//    LoadMatrixFromUser(matrix, m, n);
//    //LoadMatrixAsRandomValue(matrix, m, n, 8, -5);
//    int sum = SumAllValueInMatrix(matrix, m, n);
//    printf("Suma wszystkich wartosci wynosi %d\n", sum);
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 92                                  */
/*===========================================================================*/



//void Info()
//{
//    Autor();
//    printf("Program pobiera liczbe kolumn i wierszy a nastepnie pobiera wartosci macierzy o takich wymiarach\n");
//    printf("Nastepnie oblicza sume elementów na diagonali\n");
//}
//
//int SumDiagonalMatrixValue(int matrix[MAXMATRIXHEIGHT][MAXMATRIXHEIGHT], int n)
//{
//    int sum = 0;
//    for (int i = 0; i < n; i++)
//    {
//        sum+=matrix[i][i];
//    }
//    return sum;
//}
//
//int main()
//{
//    Info();
//    int n=MAXMATRIXHEIGHT;
//    int matrix[n][n];
//    printf("Podaj liczbe kolumn i wierszy\n");
//    n = LoadNumber(1);
//    //LoadMatrixFromUser(matrix, n, n);
//    LoadMatrixAsRandomValue(matrix, n, n, 8, -5);
//    int sum = SumDiagonalMatrixValue(matrix, n);
//    printf("Suma elementow diagonali wynosi %d\n", sum);
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 93                                  */
/*===========================================================================*/


//void Info()
//{
//    Autor();
//    printf("Program pobiera liczbe kolumn i wierszy a nastepnie pobiera wartosci macierzy o takich wymiarach\n");
//    printf("Nastepnie oblicza sume elementów nad diagonala\n");
//}
//
//int SumValueAboveDiagonalMatrix(int matrix[MAXMATRIXHEIGHT][MAXMATRIXHEIGHT], int n)
//{
//    int sum = 0;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = i+1; j < n; j++)
//        {
//            sum+=matrix[i][j];
//        }
//    }
//    return sum;
//}
//
//int main()
//{
//    Info();
//    int n = MAXMATRIXHEIGHT;
//    int matrix[n][n];
//    printf("Podaj liczbe kolumn i wierszy\n");
//    n = LoadNumber(1);
//    LoadMatrixFromUser(matrix, n, n);
//    //LoadMatrixAsRandomValue(matrix, n, n, 8, -5);
//    int sum = SumValueAboveDiagonalMatrix(matrix, n);
//    printf("Suma elementow nad diagonala wynosi %d\n", sum);
//    printf("Koniec programu.");
//}
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

void LoadMatrixFromUser(int matrix[MAXMATRIXHEIGHT][MAXMATRIXHEIGHT], int m, int n)
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

void DisplayMatrix(int matrix[MAXMATRIXHEIGHT][MAXMATRIXHEIGHT], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Element w wierszu %d i kolumnie %d wynosi %d\n", i, j, matrix[i][j]);
        }
    }
}

int RandomNumber(int maxRandomValue, int minRandomValue)
{
    return rand()%(abs(maxRandomValue)+abs(minRandomValue)+1)+minRandomValue;
}

void LoadMatrixAsRandomValue(int matrix[MAXMATRIXHEIGHT][MAXMATRIXHEIGHT], int m, int n, int maxRandomValue, int minRandomValue)
{
    srand(time(0));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = RandomNumber(maxRandomValue, minRandomValue);
        }
    }
}



/*===========================================================================*/
/*                               ZADANIE 94                                  */
/*===========================================================================*/


//void Info()
//{
//    Autor();
//    printf("Program pobiera liczbe kolumn i wierszy a nastepnie pobiera wartosci macierzy o takich wymiarach\n");
//    printf("Nastepnie sprawdza czy wszystkie elementy pod diagonala sa zerem\n");
//}
//
//int IsAllValueZeroUnderDiagonal(int matrix[MAXMATRIXHEIGHT][MAXMATRIXHEIGHT], int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < i; j++)
//        {
//            if(matrix[i][j]!=0)
//                return 0;
//        }
//    }
//    return 1;
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
//    //LoadMatrixAsRandomValue(matrix, n, n, 1, 0);
//    if(IsAllValueZeroUnderDiagonal(matrix, n))
//        printf("Wszystkie elementy pod diagonala sa 0\n");
//    else
//        printf("Ktorys z elementow pod diagonala nie jest 0\n");
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 95                                  */
/*===========================================================================*/


//void Info()
//{
//    Autor();
//    printf("Program pobiera liczbe kolumn i wierszy a nastepnie pobiera wartosci macierzy o takich wymiarach\n");
//    printf("Nastepnie zamienia dwa losowo wybrane wiersze ze soba i wypisuje macierz\n");
//}
//
//int ChangeRow(int matrix[MAXMATRIXHEIGHT][MAXMATRIXHEIGHT], int n, int firstRowIndex, int secondRowIndex)
//{
//    if(firstRowIndex>=n||secondRowIndex>=n) return 0;
//    for (int i = 0; i < n; i++)
//    {
//        int tempValue = matrix[firstRowIndex][i];
//        matrix[firstRowIndex][i] = matrix[secondRowIndex][i];
//        matrix[secondRowIndex][i] = tempValue;
//    }
//    return 1;
//}
//
//int main()
//{
//    Info();
//    int m=MAXMATRIXHEIGHT,n=MAXMATRIXHEIGHT;
//    int matrix[m][n];
//    printf("Podaj liczbe wierszy\n");
//    m = LoadNumber(1);
//    printf("Podaj liczbe kolumn\n");
//    n = LoadNumber(1);
//    LoadMatrixFromUser(matrix, m, n);
//    //LoadMatrixAsRandomValue(matrix, m, n, 8, -5);
//    int secondRow, firstRow= RandomNumber(m-1, 0);
//    do
//    {
//        secondRow= RandomNumber(m-1,0);
//    }while (secondRow==firstRow);
//    printf("Wylosowane wiersze do zamiany to %d oraz %d\n", firstRow, secondRow);
//    if(!ChangeRow(matrix, n, firstRow, secondRow))
//        printf("Zle podane indeksy wierszy\n");
//    else
//        DisplayMatrix(matrix, m, n);
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 96                                  */
/*===========================================================================*/



//void Info()
//{
//    Autor();
//    printf("Program pobiera liczbe kolumn i wierszy a nastepnie elementy macierzy o takich wymiarach\n");
//    printf("Nastepnie znajduje najwieksza wartosc na diagonali i zamienia jej kolumne z jej wierszem\n");
//}
//
//int GetIndexOfMaxDiagonalElement(int matrix[MAXMATRIXHEIGHT][MAXMATRIXHEIGHT], int n)
//{
//    int maxValueIndex = 0;
//    for (int i = 0; i < n; i++)
//    {
//        int value = matrix[i][i];
//        if(value>matrix[maxValueIndex][maxValueIndex])
//            maxValueIndex=i;
//    }
//    return maxValueIndex;
//}
//
//void ChangeRowWithColumn(int matrix[MAXMATRIXHEIGHT][MAXMATRIXHEIGHT], int n, int index)
//{
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            if(i!=index)
//                continue;
//            int tempValue = matrix[i][j];
//            matrix[i][j] = matrix[j][i];
//            matrix[j][i] = tempValue;
//        }
//    }
//}
//
//int main()
//{
//    Info();
//    int n=MAXMATRIXHEIGHT;
//    int matrix[n][n];
//    printf("Podaj liczbe kolumn i wierszy\n");
//    n = LoadNumber(1);
//    //LoadMatrixAsRandomValue(matrix, m, n, 8, -8);
//    LoadMatrixFromUser(matrix, n, n);
//    int s = GetIndexOfMaxDiagonalElement(matrix, n);
//    ChangeRowWithColumn(matrix, n, s);
//    DisplayMatrix(matrix, n, n);
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 97                                  */
/*===========================================================================*/


//void Info()
//{
//    Autor();
//    printf("Program pobiera liczbe kolumn i wierszy a nastepnie elementy dwoch macierzy o takich wymiarach\n");
//    printf("Nastepnie dodaje te macierze do siebie i ja wypisuje\n");
//}
//
//void SumTwoMatrix(int matrixC[MAXMATRIXHEIGHT][MAXMATRIXHEIGHT], int matrixA[MAXMATRIXHEIGHT][MAXMATRIXHEIGHT], int matrixB[MAXMATRIXHEIGHT][MAXMATRIXHEIGHT], int m, int n)
//{
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
//        }
//    }
//}
//
//int main()
//{
//    int m=MAXMATRIXHEIGHT,n=MAXMATRIXHEIGHT;
//    int matrixA[m][n];
//    int matrixB[m][n];
//    int matrixC[m][n];
//    printf("Podaj liczbe wierszy\n");
//    m = LoadNumber(1);
//    printf("Podaj liczbe kolumn\n");
//    n = LoadNumber(1);
//    LoadMatrixFromUser(matrixA, m, n);
//    LoadMatrixFromUser(matrixB, m, n);
//    //LoadMatrixAsRandomValue(matrixA, m, n, 8, -8);
//    //LoadMatrixAsRandomValue(matrixB, m, n, 8, -8);
//    SumTwoMatrix(matrixC, matrixA, matrixB, m, n);
//    DisplayMatrix(matrixC, m, n);
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 98                                  */
/*===========================================================================*/


//void Info()
//{
//    Autor();
//    printf("Program pobiera liczbe kolumn i wierszy a nastepnie elementy dwoch macierzy o takich wymiarach\n");
//    printf("Nastepnie wymnaza te macierze przez siebie i ja wypisuje\n");
//}
//
//void MultiplieTwoMatrix(int matrixC[MAXMATRIXHEIGHT][MAXMATRIXHEIGHT], int matrixA[MAXMATRIXHEIGHT][MAXMATRIXHEIGHT], int matrixB[MAXMATRIXHEIGHT][MAXMATRIXHEIGHT], int m, int n, int k)
//{
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < k; j++)
//        {
//            matrixC[i][j]=0;
//            for (int s = 0; s < n; s++)
//            {
//                matrixC[i][j] += (matrixA[i][s] * matrixB[s][j]);
//            }
//        }
//    }
//}
//
//int main()
//{
//    int m=MAXMATRIXHEIGHT,n=MAXMATRIXHEIGHT, k=MAXMATRIXHEIGHT;
//    int matrixA[m][n];
//    int matrixB[n][k];
//    int matrixC[m][k];
//    printf("Podaj liczbe wierszy pierwszej macierzy\n");
//    m = LoadNumber(1);
//    printf("Podaj liczbe kolumn pierwszej macierzy i wierszy drugiej macierzy\n");
//    n = LoadNumber(1);
//    printf("Podaj liczbe kolumn drugiej macierzy\n");
//    k = LoadNumber(1);
//    LoadMatrixFromUser(matrixA, m, n);
//    LoadMatrixFromUser(matrixB, n, k);
//    //LoadMatrixAsRandomValue(matrixA, m, n, 8, -8);
//    //LoadMatrixAsRandomValue(matrixB, m, n, 8, -8);
//    MultiplieTwoMatrix(matrixC, matrixA, matrixB, m, n, k);
//    DisplayMatrix(matrixC, m, k);
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 99                                  */
/*===========================================================================*/


//void Info()
//{
//    Autor();
//    printf("Program pobiera liczbe kolumn i wierszy a nastepnie elementy macierzy o takich wymiarach\n");
//    printf("Nastepnie znajduje najwieksza wartosc wiersza macierzy i ja wypisuje\n");
//}
//
//int SumRow(int* matrix, int n)
//{
//    int sum=0;
//    for (int i = 0; i < n; i++)
//    {
//        sum+= abs(matrix[i]);
//    }
//    return sum;
//}
//
//int MaxSumRow(int matrix[MAXMATRIXHEIGHT][MAXMATRIXHEIGHT], int m, int n)
//{
//    int maxSum = INT_MIN;
//    for (int i = 0; i < m; ++i)
//    {
//        int sum = SumRow(matrix[i], n);
//        if(sum>maxSum)
//            maxSum=sum;
//    }
//    return maxSum;
//}
//
//int main()
//{
//    int m=MAXMATRIXHEIGHT,n=MAXMATRIXHEIGHT;
//    int matrix[m][n];
//    printf("Podaj liczbe wierszy\n");
//    m = LoadNumber(1);
//    printf("Podaj liczbe kolumn\n");
//    n = LoadNumber(1);
//    LoadMatrixFromUser(matrix, m, n);
//    int maxSum = MaxSumRow(matrix, m, n);
//    printf("Maksymalna wartosc wiersza to %d\n", maxSum);
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 100                                 */
/*===========================================================================*/
//#include <math.h>
//
//void Info()
//{
//    Autor();
//    printf("Program pobiera liczbe kolumn i wierszy a nastepnie elementy macierzy o takich wymiarach\n");
//    printf("Nastepnie oblicza wartosc dzialania podanego w zadaniu i ja wypisuje\n");
//}
//
//int SumRow(int* matrix, int n)
//{
//    int sum=0;
//    for (int i = 0; i < n; i++)
//    {
//        int value = matrix[i];
//        sum += value*value;
//    }
//    return sum;
//}
//
//int SumMatrix(int matrix[MAXMATRIXHEIGHT][MAXMATRIXHEIGHT], int m, int n)
//{
//    int sum = 0;
//    for (int i = 0; i < m; i++)
//    {
//        int value = SumRow(matrix[i], n);
//        sum += value;
//    }
//    return sum;
//}
//
//int main()
//{
//    int m=MAXMATRIXHEIGHT,n=MAXMATRIXHEIGHT;
//    int matrix[m][n];
//    printf("Podaj liczbe wierszy\n");
//    m = LoadNumber(1);
//    printf("Podaj liczbe kolumn\n");
//    n = LoadNumber(1);
//    LoadMatrixFromUser(matrix, m, n);
//    int sum = SumMatrix(matrix, m, n);
//    printf("Wartosc pierwiastka z sumy to %lg\n", sqrt(sum));
//    printf("Koniec programu.");
//}
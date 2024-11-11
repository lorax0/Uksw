#include <stdio.h>
#include <math.h>

int LoadNumber()
{
    int number;
    while (scanf_s("%d", &number) != 1 || number < 0 || getchar() != '\n') {
        printf("Blednie podane dane\n");
        while ( getchar() != '\n');
    }
    return number;
}

void Autor(void)
{
    printf("Autor: Franciszek Wozniak\n");
}

void SortNumbers(int numbers[10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if(numbers[i]<numbers[j])
            {
                int temp = numbers[i];
                numbers[i]=numbers[j];
                numbers[j] = temp;
            }
        }
    }
}

void DisplayNumbers(int numbers[10])
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d najmniejsza liczba jest: %d\n", i+1, numbers[i]);
    }
}

/*===========================================================================*/
/*                               ZADANIE 75                                  */
/*===========================================================================*/

//void Info()
//{
//    Autor();
//    printf("Program pobiera 10 liczb, a nastepnie wypisze je w odwrotnej kolejnosci:\n");
//}
//
//void LoadTenNumbers(int numbers[10])
//{
//    for (int i = 0; i < 10; i++)
//    {
//        int number = LoadNumber();
//        numbers[i] = number;
//    }
//}
//
//void DisplayNumbers(int numbers[10])
//{
//    for (int i = 9; i >= 0; i--)
//    {
//        printf("%d\n", numbers[i]);
//    }
//}
//
//int main()
//{
//    Info();
//    int numbers[10];
//    LoadTenNumbers(numbers);
//    printf("Podane liczby w odwrotnej kolejnosci to:\n");
//    DisplayNumbers(numbers);
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 76                                  */
/*===========================================================================*/

//void Info()
//{
//    Autor();
//    printf("Program wyznacza iloczyn oraz sume niezerowych elementow ciagu n elementowego\n");
//    printf("Podaj ciag liczb, chcac zakonczyc wpisz 0\n");
//}
//
//void LoadNumbers(int numbers[100])
//{
//    for (int i = 0; i < 100; i++)
//    {
//        int number = LoadNumber();
//        numbers[i] = number;
//        if(number==0)
//            break;
//    }
//}
//
//void Calculate(int numbers[100])
//{
//    int sum =0;
//    int result=1;
//    for (int i = 0; i < 100; i++)
//    {
//        if(numbers[i]==0)
//            break;
//        sum+=numbers[i];
//        result*=numbers[i];
//    }
//    printf("\nSuma tych liczb to: %d, a iloczyn: %d\n", sum, result);
//}
//
//void DrugiSposob()
//{
//    int sum =0;
//    int result=1;
//    for (int i = 0; i < 100; i++)
//    {
//        int number = LoadNumber();
//        if(number==0)
//            break;
//        sum+=number;
//        result*=number;
//    }
//    printf("\nSuma tych liczb to: %d, a iloczyn: %d\n", sum, result);
//}
//
//int main()
//{
//    Info();
//    int numbers[100];
//    LoadNumbers(numbers);
//    Calculate(numbers);
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 77                                  */
/*===========================================================================*/

//void Info()
//{
//    Autor();
//    printf("Program wypisuje sposrod liczb trzycyfrowych ktore sa rowne sumie szescianow swoich cyfr\n");
//}
//
//void FindNumbers(int cube[10])
//{
//    int currentNumber=100;
//    for (int i = 1; i <= 9; i++)
//    {
//        int firstCube = cube[i];
//        for (int j = 0; j <= 9; j++)
//        {
//            int secondCube = cube[j];
//            for (int k = 0; k <= 9; k++)
//            {
//                int thirdCube = cube[k];
//                if(currentNumber==firstCube+secondCube+thirdCube)
//                    printf("Taka liczba jest %d\n", currentNumber);
//                currentNumber++;
//            }
//        }
//    }
//}
//
//void CalculateCubes(int cube[10])
//{
//    for (int i = 0; i < 10; ++i)
//    {
//        cube[i] = pow(i, 3);
//    }
//}
//
//int main()
//{
//    Info();
//    int cube[10];
//    CalculateCubes(cube);
//    FindNumbers(cube);
//
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 78                                  */
/*===========================================================================*/


//void Info()
//{
//    Autor();
//    printf("Program oblicz n wyrazow ciagu fibbonaciego\n");
//}
//
//void SetFibbonaci(int fibbonacii[20], int count)
//{
//    fibbonacii[0]=1;
//    fibbonacii[1]=1;
//    for (int i = 0; i < count; i++)
//    {
//        if(i!=0&&i!=1)
//            fibbonacii[i]=(fibbonacii[i-2]+fibbonacii[i-1]);
//    }
//}
//
//void DisplayFibbonaci(int fibbonacii[20], int count)
//{
//    for (int i = count-1; i >= 0; i--)
//    {
//        printf("%d elementem ciagu fibbonaciego jest: %d\n", i+1, fibbonacii[i]);
//    }
//}
//
//int main()
//{
//    Info();
//    int number = LoadNumber();
//    int fibbonacii[20];
//    SetFibbonaci(fibbonacii,number);
//    DisplayFibbonaci(fibbonacii,number);
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 79                                  */
/*===========================================================================*/

//void Info()
//{
//    Autor();
//    printf("Program wczytuje 10 liczb calkowitych i podaje rosnaco\n");
//    printf("Podaj kolejno 10 liczb:\n");
//}
//
//void LoadNumbers(int numbers[10])
//{
//    for (int i = 0; i < 10; i++)
//    {
//        numbers[i]=LoadNumber();
//    }
//}
//
//int main()
//{
//    Info();
//    int numbers[10];
//    LoadNumbers(numbers);
//    SortNumbers(numbers);
//    DisplayNumbers(numbers);
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 80                                  */
/*===========================================================================*/

//#include <stdlib.h>
//#include <time.h>
//
//void Info()
//{
//    Autor();
//    printf("Program losuje 10 liczb wiekszych od zera i wypisuje rosnaco\n");
//}
//
//void RandomizeNumbers(int numbers[10])
//{
//    srand(time(0));
//    for (int i = 0; i < 10; i++)
//    {
//        int randomNumber=-1;
//        while (randomNumber<=0)
//            randomNumber = rand();
//        numbers[i]=randomNumber;
//    }
//}
//
//
//int main()
//{
//    Info();
//    int numbers[10];
//    RandomizeNumbers(numbers);
//    SortNumbers(numbers);
//    DisplayNumbers(numbers);
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 81                                  */
/*===========================================================================*/

//#include <stdlib.h>
//#include <time.h>
//
//void Info()
//{
//    Autor();
//    printf("Program losuje 10 liczb z przedzialu [1,2] i wypisuje rosnaco\n");
//}
//
//void RandomizeNumbers(double numbers[10])
//{
//    srand(time(0));
//    for (int i = 0; i < 10; i++)
//    {
//        double randomNumber=-1;
//        while (randomNumber<=0)
//            randomNumber = ((double)rand()/RAND_MAX)+1.0;
//        numbers[i]=randomNumber;
//    }
//}
//
//int main()
//{
//    Info();
//    double numbers[10];
//    RandomizeNumbers(numbers);
//    SortNumbers(numbers);
//    DisplayNumbers(numbers);
//    printf("Koniec programu.");
//}
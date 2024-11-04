/*===========================================================================*/
/*                               ZADANIE 36                                  */
/*===========================================================================*/


//#include <stdio.h>
//
//int main()
//{
//    double x;
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program pobiera liczbe i nastepnie oblicza wartosc funkcji dla niej\n");
//    printf("Podaj liczbe:\n");
//    if(scanf_s("%lf",&x) != 1 || getchar() != '\n')
//        printf("Zle podane dane\n");
//    else
//    {
//        double t = (x-2);
//        //funkcja f przeksztalcona do t(13+t(17+23t))
//        double y = t*(13+t*(17+23*t));
//        printf("Wynik funkcji f dla argumentu %lf, wynosi: %lf\n", x, y);
//    }
//    printf("Koniec progamu.");
//}


/*===========================================================================*/
/*                               ZADANIE 37                                  */
/*===========================================================================*/


//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    double x, y;
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program pobiera dwie liczby mniejsze co do modulu od 1 i oblicza wartosc funkcji dla nich\n");
//    printf("Podaj liczby:\n");
//    if(scanf_s("%lf",&x) != 1  || getchar() != '\n' ||scanf_s("%lf",&y) != 1  || getchar() != '\n')
//        printf("Zly typ danych\n");
//    else if(fabs(x)>=1.0 || fabs(y)>=1.0)
//        printf("Liczby musza co do modulu byc mniejsze od 1\n");
//    else
//    {
//        double temp1=x*x;
//        double temp2=temp1+y*y;
//        double value = y+ sqrt(temp2)+(temp2)/ cos(temp1);
//        printf("Wartosc funkcji dla argumentow x=%lf, oraz y=%lf, wynosi: %lf\n",x,y,value);
//    }
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 38                                  */
/*===========================================================================*/


//#include <stdio.h>

//int main()
//{
//    int x,y;
//    int choice;
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program pobiera dwie liczby i wykonuje dzialanie arytmetyczne\n");
//    printf("Podaj dwie liczby:\n");
//    if(scanf_s("%d",&x) != 1  || getchar() != '\n' ||scanf_s("%d",&y) != 1  || getchar() != '\n')
//        printf("Zle podane dane\n");
//    else
//    {
//        printf("Wybierz rodzaj dzialania:\n");
//        printf("1. Dodawanie\n");
//        printf("2. Odejmowanie\n");
//        printf("3. Mnozenie\n");
//        printf("4. Dzielenie\n");
//        if(scanf_s("%d",&choice) != 1  || getchar() != '\n')
//            printf("Zle podane dane\n");
//        else
//        {
//            if(choice == 1)
//                printf("Wynik: %d\n", x+y);
//            else if(choice == 2)
//                printf("Wynik: %d\n", x-y);
//            else if(choice == 3)
//                printf("Wynik: %d\n", x*y);
//            else if(choice == 4)
//                printf("Wynik: %d\n", x/y);
//            else
//                printf("Nie ma takiej opcji\n");
//
//            switch(choice)
//            {
//                case 1:
//                    printf("Wynik: %d\n", x+y);
//                    break;
//                case 2:
//                    printf("Wynik: %d\n", x-y);
//                    break;
//                case 3:
//                    printf("Wynik: %d\n", x*y);
//                    break;
//                case 4:
//                    printf("Wynik: %d\n", x/y);
//                    break;
//                default:
//                    printf("Nie ma takiej opcji\n");
//                    break;
//            }
//        }
//    }
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 39                                  */
/*===========================================================================*/


//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    double x;
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program pobiera liczbe i oblicza wartosc funkcji dla tej liczby.\n");
//    printf("Podaj liczbe:\n");
//    if(scanf_s("%lf",&x) != 1 || getchar() != '\n')
//        printf("Zle podane dane\n");
//    else
//    {
//        float y = x>0 ? pow(2,x) : -1;
//        printf("Wartosc funkcji dla liczby %lf, wynosi %lf\n", x, y);
//    }
//    printf("Koniec progamu.");
//}


/*===========================================================================*/
/*                               ZADANIE 40                                  */
/*===========================================================================*/


//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    double x,y;
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program pobiera dwie liczby i oblicza odleglosc od poczatku ukladu wspolrzednych.\n");
//    printf("Podaj dwie liczby:\n");
//    if(scanf_s("%lf",&x) != 1  || getchar() != '\n' ||scanf_s("%lf",&y) != 1 || getchar() != '\n')
//        printf("Zle podane dane\n");
//    else
//    {
//        float R1 = sqrt(pow(x, 2)+ pow(y,2)), R2;
//        if(x==0)
//            R2= abs(y);
//        else if(abs(x)>= abs(y))
//            R2= abs(x)* sqrt(1+ pow(y/x,2));
//        else
//            R2= abs(y)* sqrt(1+ pow(x/y,2));
//
//        if(R1==R2)
//            printf("OBA ALGORYTMY DAJA TEN SAM WYNIK.\nOdleglosc punktu (%.17g,%.17g) od (0,0) wynosi %.17g.\n", x, y, R1);
//        else
//        {
//            printf("ALGORYTMY DAJA ROZNE WYNIKI.\nOdleglosc punktu (%.17g,%.17g) od (0,0) wynosi:\n", x, y);
//            printf("-wg \"klasycznego\" algorytmu %.17g\n,",R1);
//            printf("-wg \"specjalnego\" algorytmu %.17g\n,",R2);
//            printf("Wartosc bezwzgledna roznicy miedzy wynikami:\n%.17g\n", abs(R1-R2));
//        }
//    }
//    printf("Koniec programu.");
//}

/*===========================================================================*/
/*                               ZADANIE 41                                  */
/*===========================================================================*/


//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    double x1, y1;
//    double x2, y2;
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program pobiera wspolrzedne dwoch wektorow i sprawdza czy sa prostopadle czy rownolegle.\n");
//    printf("Podaj wspolrzedne pierwszego wektora:\n");
//    if(scanf_s("%lf",&x1) != 1  || getchar() != '\n' ||scanf_s("%lf",&y1) != 1 || getchar() != '\n')
//        printf("Zle podane dane\n");
//    else
//    {
//        printf("Podaj wspolrzedne drugiego wektora:\n");
//        if(scanf_s("%lf",&x2) != 1 || getchar() != '\n' ||scanf_s("%lf",&y2) != 1 || getchar() != '\n')
//            printf("Zle podane dane\n");
//        else
//        {
//            double dotProduct = x1*x2+y1*y2;
//            if(x1==0&&y1==0 || x2==0&y2==0)
//                printf("Jeden z wektorow jest wektorem zerowym\n");
//            else if(dotProduct==0)
//                printf("Te wektory sa prostopadle\n");
//            else if(x1/x2==y1/y2)
//                printf("Te wektory sa rownolegle\n");
//        }
//    }
//    printf("Koniec progamu.");
//}


/*===========================================================================*/
/*                               ZADANIE 42                                  */
/*===========================================================================*/


//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    int choice;
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program oblicza pole trojkata na podstawie podanych danych.\n");
//    printf("1. Bok i spuszczona nan wysokosc\n");
//    printf("2. Dwa boki i kat miedzy nimi\n");
//    printf("3. Trzy boki\n");
//    if(scanf_s("%d",&choice) != 1 || getchar() != '\n')
//    {
//        printf("Zle podane dane\n");
//        printf("Koniec programu.");
//        return 0;
//    }
//    switch (choice)
//    {
//        case 1:
//        {
//            double a,h;
//            printf("Podaj dlugosc boku, oraz wysokosc.\n");
//            if(scanf_s("%lf",&a) != 1  || getchar() != '\n' ||scanf_s("%lf",&h) != 1 || getchar() != '\n')
//                printf("Zle podane dane\n");
//            else
//            {
//                printf("Pole trojkata wynosi: %lf\n", a*h/2);
//            }
//        }break;
//
//        case 2:
//        {
//            double a,b;
//            printf("Podaj dlugosc pierwszego boku, nastepnie drugiego boku.\n");
//            if(scanf_s("%lf",&a) != 1  || getchar() != '\n' ||scanf_s("%lf",&b) != 1 || getchar() != '\n')
//                printf("Zle podane dane\n");
//            else
//            {
//                int choice2;
//                printf("Wybierz czy chcesz podac kat w radianach czy stopniach\n1:Radiany\n2:Stopnie\n");
//                if(scanf_s("%d",&choice2) != 1 || getchar() != '\n')
//                    printf("Zle podane dane\n");
//                else
//                {
//                    if(choice2==1)
//                    {
//                        double alfa;
//                        printf("Podaj kat w radianach\n");
//                        if(scanf_s("%lf",&alfa) != 1 || getchar() != '\n')
//                            printf("Zle podane dane\n");
//                        else
//                            printf("Pole trojkata wynosi: %lf\n", a*b*sin(alfa)/2);
//                    }
//                    else if(choice2==2)
//                    {
//                        double alfa;
//                        printf("Podaj kat w stopniach\n");
//                        if(scanf_s("%lf",&alfa) != 1 || getchar() != '\n')
//                            printf("Zle podane dane\n");
//                        else
//                            printf("Pole trojkata wynosi: %lf\n", a*b*sin(alfa*M_PI/180.0)/2);
//                    }
//                    else
//                        printf("Zle podane dane\n");
//                }
//            }
//        }break;
//
//        case 3:
//        {
//            double a,b,c;
//            printf("Podaj dlugosc pierwszego boku, nastepnie drugiego boku, oraz trzeciego boku.\n");
//            if(scanf_s("%lf",&a) != 1 || getchar() != '\n' || scanf_s("%lf",&b) != 1 || getchar() != '\n' || scanf_s("%lf",&c) != 1 || getchar() != '\n')
//                printf("Zle podane dane\n");
//            else
//            {
//                double max;
//                if(a>b)
//                {
//                    if(a>c)
//                        max = a;
//                    else
//                        max = c;
//                }
//                else
//                {
//                    if(b>c)
//                        max = b;
//                    else
//                        max = c;
//                }
//                if((max==a && max>b+c) || (max==b && max>a+c) || (max==c && max>b+a))
//                    printf("Taki trojkat nie istnieje\n");
//                else
//                {
//                    double p = (a+b+c)/2;
//                    printf("Pole trojkata wynosi: %lf\n", sqrt(p*(p-a)*(p-b)*(p-c)));
//                }
//            }
//        }break;
//        default:
//            printf("Zle podane dane\n");
//        break;
//    }
//    printf("Koniec programu.");
//}

/*===========================================================================*/
/*                               ZADANIE 43                                  */
/*===========================================================================*/


//#include <stdio.h>
//
//int main()
//{
//    double x, y, z;;
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program pobiera trzy liczby i znajduje najmniejsza.\n");
//    printf("Podaj trzy liczby:\n");
//    if(scanf_s("%lf",&x) != 1  || getchar() != '\n' || scanf_s("%lf",&y) != 1  || getchar() != '\n' || scanf_s("%lf",&z) != 1  || getchar() != '\n')
//        printf("Zle podane dane\n");
//    else
//    {
//        double min;
//        if(x>y)
//        {
//            if(y>z)
//                min = z;
//            else
//                min = y;
//        }
//        else
//        {
//            if(x>z)
//                min=z;
//            else
//                min=x;
//        }
//        printf("Najmniejsza liczba jest: %lf\n", min);
//    }
//    printf("Koniec programu.");
//}




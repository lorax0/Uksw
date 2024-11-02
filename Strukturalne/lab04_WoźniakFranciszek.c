/*===========================================================================*/
/*                               ZADANIE 28                                  */
/*===========================================================================*/


//#include <stdio.h>
//
//int main()
//{
//    float x=0, y=0;
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program sprawdza czy punkt jest w I cwiartce ukladu\n");
//    printf("Podaj wspolrzedne x i y\n");
//    if (scanf_s("%f", &x) != 1 || scanf_s("%f", &y) != 1)
//        printf("Zly typ danych\n");
//    else
//    {
//        if (x > 0 && y > 0)
//            printf("Jest\n");
//        else
//            printf("Nie jest\n");
//    }
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 29                                 */
/*===========================================================================*/


//#include <stdio.h>
//
//int main()
//{
//    float x=0, y=0;
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program sprawdza w ktorej cwiartce ukladu jest punkt\n");
//    printf("Podaj wspolrzedne x i y\n");
//    if (scanf_s("%f", &x) != 1 || scanf_s("%f", &y) != 1)
//        printf("Zly typ danych\n");
//    else
//    {
//        if (x > 0 && y > 0)
//            printf("I\n");
//        else if (x < 0 && y > 0)
//            printf("II\n");
//        else if (x < 0 && y < 0)
//            printf("III\n");
//        else if (x > 0 && y < 0)
//            printf("IV\n");
//        else
//            printf("Znajduje sie na osi\n");
//    }
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 30                                  */
/*===========================================================================*/


//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    float x=0;
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program sprawdza czy liczba jest calkowita i jesli nie to zaokragla w dol\n");
//    printf("Podaj liczbe\n");
//    if (scanf_s("%f", &x) != 1)
//        printf("Zly typ danych\n");
//    else
//    {
//        float floorX = floor(x);
//        if(floorX==x)
//            printf("Jest calkowita\n");
//        else
//            printf("%.0f\n", floorX);
//    }
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 31                                  */
/*===========================================================================*/


//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//      float x=0, y=0;
//      printf("Autor: Franciszek Wozniak\n");
//      printf("Program sprawdza warunki podane w zadaniu 31\n");
//      printf("Podaj wspolrzedne x i y\n");
//      if (scanf_s("%f", &x) != 1 || scanf_s("%f", &y) != 1)
//          printf("Zly typ danych\n");
//      else
//      {
//          if(x<=0||x>=1)
//          {
//              printf("Nie nalezy do dziedziny\n");
//          }
//          else
//          {
//              float yFromX = sqrt(abs(acos(x)+ exp(x)/log(x)));
//              if(y==yFromX)
//                  printf("Jest na wykresie\n");
//              else if(y>yFromX)
//                  printf("Jest nad wykresem\n");
//              else if(y<yFromX)
//                  printf("Jest pod wykresem\n");
//          }
//      }
//    printf("Koniec programu");
//}


/*===========================================================================*/
/*                               ZADANIE 32                                  */
/*===========================================================================*/


//#include<stdio.h>

//int main(){
//    int x;
//    printf("Testowanie instr. przypisania.\n\n");
//    x=3;
//    printf("Po x=3; wart. x jest: %d\n",x);
//    x=5;
//    printf("Po x=5; wart. x jest: %d\n",x);
//    x+=2;
//    printf("Po x=x+2; wart. x jest: %d\n",x);
//    x*=(x+1);
//    printf("Po x=x*(x+1); wart. x jest: %d\n",x);
//    x+=1;
//    printf("Po x=x+1; wart. x jest: %d\n",x);
//    x-=(3/4);
//    printf("Po x=x-(3/4); wart. x jest: %d\n",x);
//    x/=(x+1);
//    printf("Po x=x/(x+1); wart. x jest: %d\n",x);
//    x-=1;
//    printf("Po x--; wart. x jest: %d\n",x);
//    printf("\n\nKoniec programu. \n");
//    return 0;
//}


/*===========================================================================*/
/*                               ZADANIE 33                                  */
/*===========================================================================*/


//#include <stdio.h>
//
//int main()
//{
//    int x=0,y=0;
//    y=(x++)+7; /*1*/
//    printf("1. %d %d\n",y, x);
//    y=(++x)+7; /*2*/
//    printf("2. %d %d\n",y, x);
//    y=7+(x++); /*3*/
//    printf("3. %d %d\n",y, x);
//    y=7+(++x); /*4*/
//    printf("4. %d %d\n",y, x);
//    y=7+(x+1); /*5*/
//    printf("5. %d %d\n",y, x);
//
//    x=0, y=0;
//    y=x+7; /*1*/
//    printf("1. %d \n",y);
//    y=(x+2)+7; /*2*/
//    printf("2. %d \n",y);
//    y=7+(x+2); /*3*/
//    printf("3. %d \n",y);
//    y=7+(x+4); /*4*/
//    printf("4. %d \n",y);
//    y=7+(x+5); /*5*/
//    printf("5. %d \n",y);
//}


/*===========================================================================*/
/*                               ZADANIE 34                                  */
/*===========================================================================*/


//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    float x=0;
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program oblicza wartosc funkcji z zadania 34 dla podanej liczby\n");
//    printf("Podaj liczbe\n");
//    if (scanf_s("%f", &x) != 1)
//        printf("Zly typ danych\n");
//    else
//    {
//        float temp = pow(x, 2)+1;
//        float sinOfTemp = sin(temp);
//        float firstPart = sqrt(temp);
//        float secondPart = log(temp)/(5+ sinOfTemp);
//        float thirdPart = exp(sinOfTemp);
//        float y = firstPart+secondPart-thirdPart;
//        printf("Wartosc tej funkcji dla takiego argumentu wynosi %f\n", y);
//    }
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 35                                  */
/*===========================================================================*/


//#include <stdio.h>
//
//int main()
//{
//    float x=0;
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program oblicza osma potege liczby\n");
//    printf("Podaj liczbe\n");
//    if (scanf_s("%f", &x) != 1)
//        printf("Zly typ danych\n");
//    else
//    {
//        x *=x;
//        x *=x;
//        x *=x;
//        printf("Wynik wynosi %f\n", x);
//    }
//    printf("Koniec progamu.");
//}











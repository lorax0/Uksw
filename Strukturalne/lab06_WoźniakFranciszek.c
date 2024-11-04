/*===========================================================================*/
/*                               ZADANIE 44                                  */
/*===========================================================================*/


//#include <stdio.h>
//
//int main()
//{
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program podaje kod ASCII dla podanego znaku\n");
//    printf("Podaj znak: ");
//
//    char c = getchar();
//    printf("Kod ASCII podaneg znaku: %d\n", c);
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 45                                  */
/*===========================================================================*/


//#include <stdio.h>
//#include <ctype.h>
//
//int main()
//{
//    char c;
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program podaje czy znak jest drukowalny czy kontrolny dla podanego kodu ASCII\n");
//    printf("Podaj kod: ");
//
//    if(scanf_s("%d", &c)!=1 || getchar() != '\n')
//        printf("Zle podane dane\n");
//    else
//    {
//        if(isprint(c))
//            printf("Podales kod znaku drukowalnego %c\n", c);
//        else if(iscntrl(c))
//            printf("Podales kod znaku kontrolnego\n");
//        else
//            printf("Nie jest ani kontrolny ani drukowalny\n");
//    }
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 46                                  */
/*===========================================================================*/


//#include <stdio.h>
//
//int main()
//{
//    int h=0,m=0;
//    char temp;
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program sprawdza czy wprowadzona godzina jest poprawna\n");
//    printf("Podaj godzine w formacie hh:mm: ");
//
//
//    temp=getchar();
//    if(temp<'0'||temp>'2')
//    {
//        printf("Pierwszym znakiem powinna byc cyfra 0, 1, lub 2\n");
//        printf("Koniec programu.");
//        return 0;
//    }
//    h+=10*(temp-'0');
//
//    temp=getchar();
//    if((temp<'0'||temp>'9')||(h==20&&temp>='4'))
//    {
//        printf("Drugim znakiem powinna byc cyfra od 0 do 9 lub od 0 do 3 jesli pierwszym znakiem bylo 2\n");
//        printf("Koniec programu.");
//        return 0;
//    }
//    h+=(temp-'0');
//
//    if(getchar()!=':')
//    {
//        printf("Trzecim znakiem powinien byc :\n");
//        printf("Koniec programu.");
//        return 0;
//    }
//
//    temp=getchar();
//    if(temp<'0'||temp>'5')
//    {
//        printf("Czwartym znakiem powinna byc cyfra od 0 do 5\n");
//        printf("Koniec programu.");
//        return 0;
//    }
//    m+=10*(temp-'0');
//
//    temp=getchar();
//    if(temp<'0'||temp>'9')
//    {
//        printf("Piatym znakiem powinna byc cyfra od 0 do 9\n");
//        printf("Koniec programu.");
//        return 0;
//    }
//    m+=(temp-'0');
//
//    temp=getchar();
//    if(temp!='\n')
//    {
//        printf("Szostym znakiem powinien byc enter\n");
//        printf("Koniec programu.");
//        return 0;
//    }
//    printf("Oto wczytana godzina: \n%d ", m);
//    if((m>20 || m<10) && (m%10>=2 && m%10<=4))
//        printf("minuty");
//    else if(m==1)
//        printf("minuta");
//    else
//        printf("minut");
//
//    printf(" po %d\n", h);
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 47                                  */
/*===========================================================================*/


//#include <stdio.h>
//
//int main()
//{
//    int dd=0, mm=0, rr=0;
//    char temp;
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program sprawdza czy wprowadzona data jest poprawna\n");
//    printf("Podaj date z lat 2001-2050 w formacie dd.mm.rr: ");
//
//
//    temp=getchar();
//    if(temp<'0'||temp>'3')
//    {
//        printf("Pierwszym znakiem powinna byc cyfra 0, 1, lub 2\n");
//        printf("Koniec programu.");
//        return 0;
//    }
//    dd+=10*(temp-'0');
//
//    temp=getchar();
//    if((temp<'0'||temp>'9')||(temp>'1'&&dd==30))
//    {
//        printf("Drugim znakiem powinna byc cyfra od 0 do 9 lub od 0 do 1 jesli pierwszym znakiem bylo 3\n");
//        printf("Koniec programu.");
//        return 0;
//    }
//    dd+=(temp-'0');
//
//    if(getchar()!='.')
//    {
//        printf("Trzecim znakiem powinien byc .\n");
//        printf("Koniec programu.");
//        return 0;
//    }
//
//    temp=getchar();
//    if(temp<'0'||temp>'1')
//    {
//        printf("Czwartym znakiem powinna byc cyfra od 0 do 1\n");
//        printf("Koniec programu.");
//        return 0;
//    }
//    mm+=10*(temp-'0');
//
//    temp=getchar();
//    if((temp<'0'||temp>'9')||(temp=='0' && mm==0)||(mm==10 && temp>'2'))
//    {
//        printf("Piatym znakiem powinna byc cyfra od 1 do 9 lub od 0 do 2 jesli czwarty byla 1\n");
//        printf("Koniec programu.");
//        return 0;
//    }
//    mm+=(temp-'0');
//
//    if(getchar()!='.')
//    {
//        printf("Szostym znakiem powinien byc .\n");
//        printf("Koniec programu.");
//        return 0;
//    }
//
//    temp=getchar();
//    if(temp<'0'||temp>'5')
//    {
//        printf("Siodmym znakiem powinna byc cyfra od 0 do 5\n");
//        printf("Koniec programu.");
//        return 0;
//    }
//    rr+=10*(temp-'0');
//
//    temp=getchar();
//    if((temp<'0'||temp>'9')||(temp=='0'&&rr==0)||(temp>'0'&&rr==50))
//    {
//        printf("Osmym znakiem powinna byc cyfra od 0 do 9 lub od 1 do 9 jesli siodmy byl 0 lub 0 jesli siodmy byl 5\n");
//        printf("Koniec programu.");
//        return 0;
//    }
//    rr+=(temp-'0');
//
//    if(getchar()!='\n')
//    {
//        printf("Dziewiatym znakiem powinien byc enter\n");
//        printf("Koniec programu.");
//        return 0;
//    }
//
//    printf("Oto wczytana data: \n%d ", dd);
//
//    switch (mm)
//    {
//        case 1:
//        {
//            printf(" stycznia ");
//            if(dd>31)
//            {
//                printf("nie istnieje w roku");
//            }
//        }break;
//        case 2:
//        {
//            printf(" luty ");
//            if(dd>29||(rr%4!=0 && dd==29))
//            {
//                printf("nie istnieje w roku");
//            }
//        }break;
//        case 3:
//        {
//            printf(" marca ");
//            if(dd>31)
//            {
//                printf("nie istnieje w roku");
//            }
//        }break;
//        case 4:
//        {
//            printf(" kwietnia ");
//            if(dd>30)
//            {
//                printf("nie istnieje w roku");
//            }
//        }break;
//        case 5:
//        {
//            printf(" maj ");
//            if(dd>31)
//            {
//                printf("nie istnieje w roku");
//            }
//        }break;
//        case 6:
//        {
//            printf(" czerwiec ");
//            if(dd>30)
//            {
//                printf("nie istnieje w roku");
//            }
//        }break;
//        case 7:
//        {
//            printf(" lipca ");
//            if(dd>31)
//            {
//                printf("nie istnieje w roku");
//            }
//        }break;
//        case 8:
//        {
//            printf(" sierpnia ");
//            if(dd>31)
//            {
//                printf("nie istnieje w roku");
//            }
//        }break;
//
//        case 9:
//        {
//            printf(" wrzesnia ");
//            if(dd>30)
//            {
//                printf("nie istnieje w roku");
//            }
//        }break;
//        case 10:
//        {
//            printf(" pazdziernik ");
//            if(dd>31)
//            {
//                printf("nie istnieje w roku");
//            }
//        }break;
//        case 11:
//        {
//            printf(" listopad ");
//            if(dd>30)
//            {
//                printf("nie istnieje w roku");
//            }
//        }break;
//        case 12:
//        {
//            printf(" grudnia ");
//            if(dd>31)
//            {
//                printf("nie istnieje w roku");
//            }
//        }break;
//        default:
//        {
//            printf("Nie ma takiego miesiaca\n");
//            printf("Koniec programu.");
//            return 0;
//        }
//    }
//
//    printf(" 20%d\n", rr);
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 48                                  */
/*===========================================================================*/


//#include <stdio.h>
//
//int main()
//{
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program sprobuje wypisac 50 poteg dwojki\n");
//
//    int i=1;
//    int x=2;
//    while (i<=50)
//    {
//        printf("%d potega: %lld\n", i, x);
//        i++;
//        x*=2;
//    }
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 49                                  */
/*===========================================================================*/


//#include <stdio.h>
//
//int main()
//{
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program sprobuje wypisac silnie kolejnych 20 liczb\n");
//
//    int i=1, result=1;
//    while (i<=20)
//    {
//        result*=i;
//        printf("Silnia liczby %d wynosi %lld\n", i, result);
//        i++;
//    }
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 50                                  */
/*===========================================================================*/


//#include <stdio.h>
//
//int main()
//{
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program sprobuje wypisac wartosc funkcji dla n od 1 do 200\n");
//
//    int n=1;
//    double value=1.5;
//    while (n<=200)
//    {
//        printf("Wartosc funkcji dla %d: wynosi %lg\n", n, value);
//        value*=3.0/(n+2);
//        n++;
//    }
//    printf("Koniec programu.");
//}


/*===========================================================================*/
/*                               ZADANIE 51                                  */
/*===========================================================================*/


//#include <stdio.h>
//
//int main()
//{
//    printf("Autor: Franciszek Wozniak\n");
//    printf("Program sprobuje znalezc najmniejsze n spelniajace nierownosc z zadania\n");
//
//    int n=1;
//    double value=45.0;
//    while (1)
//    {
//        value*=90.0/(n+2);
//        n++;
//        if(value<1)
//        {
//            printf("Najmniejsze n wynosi %d\n", n);
//            break;
//        }
//    }
//    printf("Koniec programu.");
//}



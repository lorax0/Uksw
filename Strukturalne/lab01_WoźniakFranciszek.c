// 1. Dla kazdego zadania prosze napisac osobna funkcje main w wyznaczonym miejscu.
// 2. Dla kazdego zadania prosze wlaczyc tylko te biblioteki, ktore sa niezbedne.
// 3. Tylko jedno zadanie w danym momencie moze byc odkomentowane.
// 4. Na tych zajeciach nie wolno uzywac zmiennych.


/*===========================================================================*/
/*                               ZADANIE 1                                   */  
/*===========================================================================*/
#include <stdio.h>

int main() {
    printf("Oto szesciany wybranych liczb:\n\n");
    printf("k\tk*k*k\n\n");
    printf("21\t%d\n", 21*21*21);
    printf("32\t%d\n", 32*32*32);
    printf("-53\t%d\n\n", -53*-53*-53);
    printf("Koniec programu.");
    return 0;
}




/*===========================================================================*/
/*                               ZADANIE 2                                   */
/*===========================================================================*/
#include <stdio.h>

int main() {
    printf("Oto szesciany wybranych liczb:\n\n");
    printf("%3s%11s\n\n", "k","k*k*k");
    printf("%3s%11d\n", "21", 21*21*21);
    printf("%3s%11d\n", "32", 32*32*32);
    printf("-53%11d\n\n", -53*-53*-53);
    printf("Koniec programu.");
    return 0;
}



/*===========================================================================*/
/*                               ZADANIE 3                                   */
/*===========================================================================*/
#include <stdio.h>

int main() {
    printf("Oto szesciany wybranych liczb\n");
    printf("zapisane w systemie osemkowym:\n\n");
    printf("%1s%30s\n\n", "k","k*k*k (system osemkowy)");
    printf("%1s%20o\n", "2", 2*2*2);
    printf("%1s%20o\n", "3", 3*3*3);
    printf("5%20o\n\n", 5*5*5);
    printf("Koniec programu.");
    return 0;
}





/*===========================================================================*/
/*                               ZADANIE 4                                   */
/*===========================================================================*/
#include <stdio.h>
#include <math.h>

int main() {
    printf("Oto pierwiastki kwadratowe wybranych liczb:\n\n");
    printf("%2s%15s\n\n", "k","sqrt(k)");
    printf("%1s%15lf\n", "21", sqrt(21.0));
    printf("%1s%15lf\n", "32", sqrt(32.0));
    printf("%1s%15lf\n\n", "53", sqrt(53.0));
    printf("Koniec programu.");
    return 0;
}




/*===========================================================================*/
/*                               ZADANIE 5                                   */
/*===========================================================================*/
#include <stdio.h>
#include <math.h>

int main() {
    printf("Oto pierwiastki kwadratowe wybranych liczb:\n\n");
    printf("%2s%12s\n\n", "k","sqrt(k)");
    printf("%1s%25.18lf\n", "21", sqrt(21.0));
    printf("%1s%25.18lf\n", "32", sqrt(32.0));
    printf("%1s%25.18lf\n\n", "53", sqrt(53.0));
    printf("Koniec programu.");
    return 0;
}




/*===========================================================================*/
/*                               ZADANIE 6                                   */
/*===========================================================================*/
#include <stdio.h>
#include <math.h>

int main() {
    printf("Oto pierwiastki kwadratowe wybranych liczb:\n\n");
    printf("%5s%13s\n\n", "k","sqrt(k)");
    printf("%5s%15.6le\n", "21", sqrt(21.0));
    printf("%5s%15.6le\n", "132", sqrt(132.0));
    printf("%5s%15.6le\n\n", "11153", sqrt(11153.0));
    printf("Koniec programu.");
    return 0;
}





/*===========================================================================*/
/*                               ZADANIE 7                                   */
/*===========================================================================*/
#include <stdio.h>
#include <math.h>

int main() {
    printf("Oto pierwiastki kwadratowe wybranych liczb:\n\n");
    printf("%13s%13s\n\n", "k","sqrt(k)");
    printf("%13s%15.6lg\n", "0.000000001", sqrt(0.000000001));
    printf("%13s%15.6lg\n", "0.00000001", sqrt(0.00000001));
    printf("%13s%15.6lg\n", "9876543210123", sqrt(9876543210123.0));
    printf("%13s%15.6lg\n\n", "987654321012", sqrt(987654321012.0));
    printf("Koniec programu.");
    return 0;
}





/*===========================================================================*/
/*                               ZADANIE 8                                   */
/*===========================================================================*/
#include <stdio.h>

int main() {
    printf("%10d", 111);
    printf("%+10d", 111);
    printf("%-10d", 111);
    printf("%010d\n", 111);
    printf("%10d", -111);
    printf("%+10d", -111);
    printf("%-10d", -111);
    printf("%010d\n", -111);
    printf("%10d", -0);
    printf("%+10d", -0);
    printf("%-10d", -0);
    printf("% 10d\n", -0);
    return 0;
}





/*===========================================================================*/
/*                               ZADANIE 9                                   */
/*===========================================================================*/
#include <stdio.h>

int main() {
    printf("%d", -111);
    printf("% d\n", -111);
    printf("%d", 0);
    printf("% d\n", 0);
    printf("%d", 111);
    printf("% d\n", 111);
    return 0;
}


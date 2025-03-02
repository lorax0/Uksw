#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>

#define ROZMIAR 5
#define DLUGOSC 10


void WczytajTabliceLiterWPorzadkuWierszowym(char *A)
{
	for (int i = 0; i < ROZMIAR * ROZMIAR; ++i)
	{
		if (i < 16)
			A[i] = (char)(97 + i);
		else
			A[i] = (char)(98 + i);
	}
}

void WypiszTablice(char **B, int count)
{
	for (int i = 0; i < count; ++i)
	{
		if (B[i] == NULL)
			return;
		printf("%c", *B[i]);
	}
}

void UstawWszystkieWartosciJakoNull(char **B)
{
	for (int i = 0; i < DLUGOSC; ++i)
	{
		B[i] = NULL;
	}
}

char* AdresLiteryWTablicy(char *A, char litera)
{
	for (int i = 0; i < ROZMIAR * ROZMIAR; ++i)
	{
		if (A[i] == litera)
			return &A[i];
	}
	return NULL;
}

void UstawAdresyLiter(char *A, char **B, char *wczytane)
{
	for (int i = 0; i < DLUGOSC; ++i)
	{
		if (wczytane[i] == '\0')
			return;
		B[i] = AdresLiteryWTablicy(A, wczytane[i]);
	}
}

void PrzestawTablice(char *A)
{
	for (int i = 1; i < ROZMIAR * ROZMIAR; ++i)
	{
		char temp = A[i - 1];
		A[i - 1] = A[i];
		A[i] = temp;
	}
}

int main()
{
	char A[ROZMIAR][ROZMIAR];
	WczytajTabliceLiterWPorzadkuWierszowym(&A[0][0]);
	char *B[DLUGOSC];
	UstawWszystkieWartosciJakoNull(B);

	char wczytane[DLUGOSC];
	scanf("%s", wczytane);

	UstawAdresyLiter(&A[0][0], B, wczytane);

	WypiszTablice(B, ROZMIAR);

	PrzestawTablice(&A[0][0]);
	printf("\n");
	WypiszTablice(B, ROZMIAR);
	WczytajTabliceLiterWPorzadkuWierszowym(&A[0][0]);
	printf("\n");
	WypiszTablice(B, ROZMIAR);

	getchar();
	return 0;
}
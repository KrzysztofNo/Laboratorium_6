#include <stdio.h>
#include <stdlib.h>

int main()
{
    int table[10],x,i;//Deklaracja tablicy
    printf("Wpisz 10 elementów tablicy \n");
    for(int i=0;i<10;++i)
        scanf("%d",&table[i]);//Wypisywanie liczb do tablicy
    printf("Wpisz element, który chcesz znaleźć: \n");
    scanf("%d",&x);//Wypisywanie adresu elementu, którego szukamy
    for(int i=0;i<10;++i)
        if(table[i]==x)//Sprawdzenie czy liczba pod indeksem "i" jest równa wpisanej liczbie
            break;//Jeśli tak to przerywamy działanie
    if(i<10){//Jeśli indeks i jest z zakresu naszej tablicy to wypisujemy ponizsze komunikaty
        printf("Znaleziony element ma indeks: %d",i);//Wypisywanie indeksu, pod którym znajduje się dany element
        printf("\nAdres znalezionego elementu: %d",&table[i]);//Wypisywanie adresu pamięci, pod którym znajduje się dany indeks
    }
    else//W momentcie gdy nie ma takiej liczby wyświetla się ponizszy komunikat
        printf("Brak elementu" );
    return 0;
}
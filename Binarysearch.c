#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int tablica[]){
    for(int i=0; i<9 ; i++){
        for(int j=0; j<9-i; j++){
            if (tablica[j]>tablica[j+1]){
                int temp=tablica[j];
                tablica[j]=tablica[j+1];
                tablica[j+1]=temp;
            }}}
}
int binarySearch(int table[], int left, int right, int x)
{
    if (right >= left) {
        int pivot = left + (right - left) / 2;
        if (table[pivot] == x)
            return pivot;//Jeśli szukana wartość to pivot, to wyświetlamy indeks pivota
        if (table[pivot]>x)
            return binarySearch(table,left,pivot-1, x);//Jeśli szukana wartość jest mniejsza niz pivot, to następnie przeszukujemy lewą część tablicy
        return binarySearch(table,pivot+1, right, x);//Jeśli szukana wartość nie była pivotem oraz nie była mniejsza od piwota, jest to równoznaczne z tym, ze jest większa, więc sprawdzamy prawą stronę tablicy
    }
    return -1;
}
int main()
{
    int x;
    int table[] = {3,5,7,2,22,32,13,34,21,11};//deklaracja tablicy i jej elementów
    bubbleSort(table);//sortowanie poprzez bubbleSort
    for(int i=0; i<10; i++){
        printf("%d ", table[i]);//wywietlenie posortowanej tablicy
    }
    printf("\n Wprowadź wartość elementu, którego szukasz: \n");
    scanf("%d",&x);             // wpisanie jakiej wartosci szukamy
    int wynik = binarySearch(table, 0, 9, x);
    if(wynik == -1){
        printf("Podanego elementu nie ma w tablicy");
    } else {
        printf("Element znajduje sie na pozycji: %d", wynik);
    }
    return 0;
}
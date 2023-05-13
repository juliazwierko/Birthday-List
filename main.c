#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct osoba {
    char imie[50];
    int dzien;
    int miesiac;
    int rok;
};

void wyswietlListe(struct osoba *tablica, int liczbaOsob) {
    printf("\nLista zarejestrowanych urodzin:\n");
    printf("=================================\n");
    for(int i=0; i<liczbaOsob; i++) {
        printf("%d. %s - %d.%d.%d\n", i+1, tablica[i].imie, tablica[i].dzien, tablica[i].miesiac, tablica[i].rok);
    }
}

void dodajOsobe(struct osoba *tablica, int *liczbaOsob) {
    printf("\nDodaj osobę\n");
    printf("============\n");
    printf("Imię: ");
    scanf("%s", tablica[*liczbaOsob].imie);
    printf("Dzień urodzin: ");
    scanf("%d", &tablica[*liczbaOsob].dzien);
    printf("Miesiąc urodzin: ");
    scanf("%d", &tablica[*liczbaOsob].miesiac);
    printf("Rok urodzin: ");
    scanf("%d", &tablica[*liczbaOsob].rok);
    (*liczbaOsob)++;
}

void usunOsobe(struct osoba *tablica, int *liczbaOsob) {
    printf("\nUsuń osobę\n");
    printf("===========\n");
    printf("Numer osoby do usunięcia: ");
    int numer;
    scanf("%d", &numer);
    if(numer < 1 || numer > *liczbaOsob) {
        printf("Błędny numer osoby!\n");
        return;
    }
    numer--;
    for(int i=numer; i<*liczbaOsob-1; i++) {
        tablica[i] = tablica[i+1];
    }
    (*liczbaOsob)--;
    printf("Osoba została usunięta.\n");
}

int main() {
    int liczbaOsob = 0;
    struct osoba *tablica = (struct osoba*)malloc(sizeof(struct osoba)*100); // alokacja tablicy na maksymalnie 100 osób
    
    int wybor = 0;
    do {
        printf("\nMenu główne:\n");
        printf("=============\n");
        printf("1. Wyświetl listę zarejestrowanych urodzin\n");
        printf("2. Dodaj osobę\n");
        printf("3. Usuń osobę\n");
        printf("4. Zakończ program\n");
        printf("Wybierz opcję: ");
        scanf("%d", &wybor);
        
        switch(wybor) {
            case 1:
                wyswietlListe(tablica, liczbaOsob);
                break;
            case 2:
                dodajOsobe(tablica, &liczbaOsob);
                break;
            case 3:
                usunOsobe(tablica, &liczbaOsob);
                break;
            case 4:
                return 0;
            default:
                break;
         }
    } while(1);
    return 0;
}

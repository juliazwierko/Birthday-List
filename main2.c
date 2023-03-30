#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

void menu();
char opcja(char *a);

int main() {
    menu();
    return 0;
}

char opcja(char *a){
    switch(*a)
    {
        switch (*a)
    {
    case '1':
        
        break;
    case '2':
        break;

    case '3':
        return 0;
        break;

    default:    
        printf("Wpisz poprawna wartosc:\n");
        menu();
        break;
    }
    }
    return 1;
}

void menu(){
    printf("Menu:\n");
    printf("1 -> Zobaczyć listę urodzin\n");
    printf("2 -> Dodac osobę do listy urodzin\n");
    printf("3 -> Wyjscie z programu\n");

    char a = 0;
    scanf("%c", &a);
    opcja(&a);
}

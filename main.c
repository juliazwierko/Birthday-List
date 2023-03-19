#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

char show_menu();
char get_choice();
void clear_buffer();
void task_1();
int task_2();
void task_3();
void task_4();

struct date {
  int day;
  char month[20];
  int year;
};
struct persone {
  char firstname[20];
  char lastname[20];
  struct date bd;
};

int main(int argc, char const *argv[]) {  
    show_menu();
    return 0;
}

char show_menu(){   
    printf("\n-----------------------------------------\n");
    printf("Witamy na Twojej osobistej liście urodzin\n");
    printf("-----------------------------------------\n\n");

    printf("-----------------------------------------\n");
    printf("Menu:\n");
    printf("1: zobacz listę urodzin\n");
    printf("2: dodaj nowe urodziny do listy\n");
    printf("3: zmiany listy urodzin\n");
    printf("4: wyjscie z programu\n");
    printf("-----------------------------------------\n\n");

    char choice = 0;
    while ( (choice = get_choice())!= 'Q' )
    {
        switch(choice){
            case '1':
                printf("zobacz listę urodzin\n");
                task_1();
                break;
            
            case '2':
                printf("\n-----------------------------------------\n");
                printf("dodaj nowe urodziny do listy:\n");
                printf("-----------------------------------------\n\n");

                task_2();
                break;
            
            case '3':
                printf("zmiany listy urodzin\n");
                task_3();
                break;

            case '4':
                printf("wyjscie z programu\n");
                task_4();
                break;
            default:
                printf("Wybierz odpowiednią opcję powyżej\n\n");
                show_menu();
        }
    }

    return 0;
}

void clear_buffer(){
    while( getchar()!= '\n') 
        continue;
}

char get_choice(){
    char choice = 0;
    while( !isgraph(choice = getchar()) )
        continue; 
    clear_buffer();

    return choice;
}

void task_1(){

    return;
}

int task_2(){
        struct persone p;
        printf("Wpisz imię : ");
        scanf("%s", p.firstname);
        printf("Wpisz nazwisko : ");
        scanf("%s", p.lastname);
        printf("Urodziy \nDzień : ");
        scanf("%d", &p.bd.day);
        printf("Miesiac: ");
        scanf("%s", p.bd.month);
        printf("Rok: ");
        scanf("%d", &p.bd.year);
        printf("\nWpisałeś : %s %s, data urodzin %d %s %d roku",
                p.firstname, p.lastname, p.bd.day, p.bd.month, p.bd.year);
        printf("\nPress enter");
        getchar(); getchar();    

        printf("Wpisz 0, jezeli chcesz wrocic do menu.\nWpisz 1, jezeli chcesz chcesz wyjsc z programu.\n");
        char choice = 0;
        while ( (choice = get_choice())!= 'Q' )
        {
            switch(choice){
                case '0':
                    show_menu();
                    break;

                case '1':
                    return 0;
                
                default:
                    printf("Wybierz odpowiednią opcję powyżej\n\n");
                    show_menu();
            }
        }
    return 0;
}

void task_3(){

    return;
}

void task_4(){

    return;
}

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

char show_menu();
char get_choice();
void clear_buffer();
void task_1();
void task_2();
void task_3();
void task_4();

int main(int argc, char const *argv[]) {  
    show_menu();
    char choice = 0;
    while ( (choice = get_choice())!= 'Q' )
    {
        switch(choice){
            case '1':
                printf("zobacz listę urodzin\n");
                task_1();
                break;
            
            case '2':
                printf("dodaj nowe urodziny do listy:\n");
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

void task_2(){

    return;
}

void task_3(){

    return;
}

void task_4(){

    return;
}

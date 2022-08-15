#include <ctype.h>
#include <stdio.h>

int can_print_it(char ch);
void print_letters(char arg[]);

void print_argumets(int argc, char *argv[]);
void print_argumets(int argc, char *argv[]) {

    for (int i = 0; i < argc; i++) {
        print_letters(argv[i]);
    }
}

void print_letters(char arg[]) {

    for (int i = 0; arg[i] != '\0'; i++) {
        char ch = arg[i];
        if (can_print_it(ch)) {
            printf("'%c' == %d", ch, ch);
        }
    }
    printf("\n");
}

int can_print_it(char ch) { return isalpha(ch) || isblank(ch); }

int main(int argc, char *argv[]) {

    print_argumets(argc, argv);
    return 0;
}

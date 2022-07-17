#include <stdio.h>

int main(int argc, char *argv[])
{
    int numbers[4] = { 0 };
    char name[4] = { 'a'};

    printf("numbers: %d %d %d %d\n",
            numbers[0], numbers[1], numbers[2], numbers[3]);

    printf("name each: %c %c %c %c\n",
            name[0], name[1], name[2], name[3]);

    printf("name: %s\n", name);

    numbers[0] = 'a'; // returns 97 (ascii value)
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;

    // This should break since the string is not ended with \0 null byte however it compiles 
    // even with required C89/C90 standard in makefile?? 
    name[0] = 97; // 97 is an ASCII value of 'a' it still compiles
    name[1] = 'e';
    name[2] = 'd';
    name[3] = 'A';

    printf("numbers: %d %d %d %d\n",
            numbers[0], numbers[1], numbers[2], numbers[3]);

    printf("name each: %c %c %c %c\n",
            name[0], name[1], name[2], name[3]);

    printf("name: %s\n", name);
    char *another = "Zed";

    printf("another: %s\n", another);

    printf("another each: %c %c %c %c\n",
            another[0], another[1], another[2], another[3]);

    return 0;
}

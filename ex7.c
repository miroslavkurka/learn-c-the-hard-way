#include <stdio.h>

int main(int argc, char *argv[]) {
    int distance = 100;
    float power = 2.354f;
    double super_power = 56789.4532;
    char initial = 'A';
    char first_name[] = "Zed";
    char last_name[] = "Shaw";
    printf("You are %d miles away.\n", distance);
    printf("You have %f levels of power.\n", power);
    printf("You have %f awesome super powers.\n", super_power);
    printf("I have an initial %c.\n", initial);
    printf("I have a first name %s.\n", first_name);
    printf("I have a last name %s.\n", last_name);
    printf("My whole name is %s %c. %s.\n", first_name, initial, last_name);
    int bugs = 100;
    double bug_rate = 1.2;

    printf("You have %d bugs at the imaginary rate of %f.", bugs, bug_rate);

    long universe_of_defects = 1L * 1024L * 1024L * 1024L;
    printf("the entire universe has %ld bugs.\n", universe_of_defects);

    double expected_bugs = bugs * bug_rate;
    printf("You are expected to have %f bugs.\n", expected_bugs);
    double part_of_the_universe = expected_bugs / universe_of_defects;
    // %e means scientific notation
    printf("That is only %e portion of the universe.\n", part_of_the_universe);

    char nul_byte = '\0';
    int care_percentage = bugs * nul_byte;
    // two percent signs %% is to print '%'
    printf("is this zero %d%%?\n", care_percentage);
    return 0;
}

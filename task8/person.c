#include <stdio.h>

struct Person{
    char Name[50];
    char Surname[50];
    int Age;
    int GPA;
    char Gender[1]; //пол М или Ж
};

int main() {
    printf("Size of Person: %zu bytes\n", sizeof(Person));
    return 0;
}
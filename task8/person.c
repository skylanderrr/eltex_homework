#include <stdio.h>

struct Person{
    char Name[50];
    char Surname[50];
    int Age;
    int GPA;
    char Gender[1]; //пол М или Ж
};

struct CompressedPerson{
    char Name[40]; //за счет размера масивов основное сокращение размера(
    char Surname[40];
    __uint8_t Age: 7; // возраст ограничиваем в 7 бит, вряд-ли будет студент старше 127 :D
    __uint8_t GPA: 7; // так же со средним балом
    __uint8_t Gender: 1; //1 бита хватит всем, пусть М - 0, Ж - 1
};


int main() {
    printf("Size of Person: %zu bytes\n", sizeof(struct Person));
    printf("Size of Person: %zu bytes\n", sizeof(struct CompressedPerson));
    return 0;
}
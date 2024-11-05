#include <stdio.h>
#include <math.h>
#define NUM 2

int flag = 1;

int main(){
    int n;
    while (flag == 1)
    {
        printf("Введите натуральное число: ");
        scanf("%d", &n);
        if (n > 0) {
           printf("molodec\n");
           flag=0;
        }
        else {
            printf("uchi matematiku \n");
        }
    }
    return(0);
}
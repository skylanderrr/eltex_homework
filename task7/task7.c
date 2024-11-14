#include <stdio.h>
#include <math.h>
#define NUM 2

int flag = 1;
void power(int num, int n, double *res) {
    *res = pow(num, n);
}

int main(){
    int n;
    double res;
    printf("Введите натуральное число: ");

    while (flag == 1) //гоняем по кругу до ввода натурального числа
    {
        scanf("%d", &n); //считываем ввод
        if (n > 0) {
            power(NUM, n, &res); //вызываем вункцию с указателем на результат
            printf("Число %d в степени %d равно %g\n", NUM, n, res); 
            flag=0;
        }
        else {
            printf("Необходимо ввести натуральное число, попробуйте еще: ");
        }
    }
    
    return(0);
}

/*я с этих printf ловлю печаль после удобных пайтоновских ); */
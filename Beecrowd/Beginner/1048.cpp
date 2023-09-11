#include "iostream"
#include <cstdio>
using namespace std;

int main(){
    double salary, earned_money;
    cin >> salary;

    if (salary >= 0 && salary <= 400.00) {
        printf("Novo salario: %.2lf\n",salary * 0.15 + salary);
        printf("Reajuste ganho: %.2lf\n",salary * 0.15);
        printf("Em percentual: %d %%\n",15);
    }else if(salary >= 4000.01 && salary <= 800.00) {
        printf("Novo salario: %.2lf\n",salary * 0.12 + salary);
        printf("Reajuste ganho: %.2lf\n",salary * 0.12);
        printf("Em percentual: %d %%\n",12);
    }else if (salary >= 800.01 && salary <= 1200.00) {
        printf("Novo salario: %.2lf\n",salary * 0.10 + salary);
        printf("Reajuste ganho: %.2lf\n",salary * 0.10);
        printf("Em percentual: %d %%",10);
    }else if (salary >= 1200.01 && salary <= 2000.00) {
        printf("Novo salario: %.2lf\n",salary * 0.07 + salary);
        printf("Reajuste ganho: %.2lf\n",salary * 0.07);
        printf("Em percentual: %d %%\n",7);
    }else {
        printf("Novo salario: %.2lf\n",salary * 0.04 + salary);
        printf("Reajuste ganho: %.2lf\n",salary * 0.04);
        printf("Em percentual: %d %%\n",4);
    }    return 0;
}
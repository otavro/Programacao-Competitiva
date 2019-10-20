#include <stdio.h>

int main()
{
    float salary, newsalary;
    scanf("%f", &salary);

    if (salary <=400){
       newsalary = salary * 1.15;
       printf("Novo salario: %.2f\n", newsalary);
       printf("Reajuste ganho: %.2f\n", newsalary - salary);
       printf("Em percentual: 15 %%\n");
    }

    else if (salary <= 800){
       newsalary = salary * 1.12;
       printf("Novo salario: %.2f\n", newsalary);
       printf("Reajuste ganho: %.2f\n", newsalary - salary);
       printf("Em percentual: 12 %%\n");
    }

    else if (salary <= 1200){
       newsalary = salary * 1.10;
       printf("Novo salario: %.2f\n", newsalary);
       printf("Reajuste ganho: %.2f\n", newsalary - salary);
       printf("Em percentual: 10 %%\n");
    }
    
    else if (salary <= 2000){
       newsalary = salary * 1.07;
       printf("Novo salario: %.2f\n", newsalary);
       printf("Reajuste ganho: %.2f\n", newsalary - salary);
       printf("Em percentual: 7 %%\n");
    }

    else{
       newsalary = salary * 1.04;
       printf("Novo salario: %.2f\n", newsalary);
       printf("Reajuste ganho: %.2f\n", newsalary - salary);
       printf("Em percentual: 4 %%\n");

    }
    

    return 0;
}
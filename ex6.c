#include <stdio.h>

int main(int argc, char const *argv[])
{
    float horas;
    float valorHora;
    float salarioBruto;
    float salarioLiq;
    float ir;
    float inss;
    float sindicato;


    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &valorHora);

    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f", &horas);

    salarioBruto = horas * valorHora;
    ir = salarioBruto / 100 * 11;
    inss = salarioBruto / 100 * 8;
    sindicato = salarioBruto / 100 * 5;

    salarioLiq = salarioBruto - ir - inss - sindicato;

    printf("Salario Bruto: R$%.2f \nIR: R$%.2f \nINSS: R$%.2f \nSindicato: R$%.2f \nSalario Liquido: R$%.2f\n", salarioBruto, ir, inss, sindicato, salarioLiq);

    

    
    return 0;
}

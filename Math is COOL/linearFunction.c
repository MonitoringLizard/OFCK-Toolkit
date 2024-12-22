#include <stdio.h>
#include <math.h>

float f(float x, float a, float b);
void picker(int var, int index);

/*Reminder: 0 = x, 1 = a, 2 = b, 3 = f(x) ou y*/
float values[4] = {120, 97, 98, 121};
char input = ' ';

int main()
{
    /*Picking what the user wants to do*/
    printf("\tBem vindo\n");
    printf("O que deseja fazer? ");
    scanf("%c", &input);

    /*depeding on "input" answer, the program will do different routines*/
    switch (input)
    {

    /*here we ask for "a" and "b" with the "picker" function and then we use the "f()" to calculate "y"*/
    case 'f':
        printf("Função linear");
        for (int i = 1; i < 3; i++)
        {
            picker(values[i], i);
        }

        printf("%.2f * %.2f + %.2f = %.2f\n", values[0], values[1], values[2], f(values[0], values[1], values[2]));

        break;

    default:
        printf("something went wrong\n");
        break;
    }
}

void picker(int var, int index)
{

    printf("\n%c = ", var);
    scanf("%f", &values[index]);
}

/*Here we actually solve the damn equation*/
float f(float x, float a, float b)
{
    printf("Então assim fica a função? F(x) = %.2f*x + %.2f\n", a, b);

    printf("Então coloca a peste do x e veja a mágica acontecer!\n");
    picker(values[0], 0);

    return (a * x) + b;
}

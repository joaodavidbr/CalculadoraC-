#include <iostream>
#include <cmath>

void calculadora();
void um_valor();
void dois_valores();

void fatorial();
void primo();
void perfeito();
void par_impar();

double soma(double n1, double n2);
double subtracao(double n1, double n2);
double multiplicacao(double n1, double n2);
double divisao(double n1, double n2);
double elevado(double n1, double n2);

int main()
{
	calculadora();

    return 0;
}

void calculadora()
{
	int num, op;
	
	do
	{
		std::cout << "\nDeseja calcular quantos numeros?: ";
		std::cout << "\n1 - Um numero";
		std::cout << "\n2 - Dois numeros\n";
		std::cin >> num;
		
		if (num == 1)
		{
			um_valor();
		}
		else
		{
			dois_valores();
		}
		
		std::cout << "\n\nFazer outro calculo?\n";
		std::cout << "1 - Sim\n";
		std::cout << "2 - Nao\n";
		std::cin >> op;
		
	}while(op == 1);
	
	std::cout << "\n\nPROGRAMA TERMINADO\n\n";
}

void um_valor() //caso escolha um valor
{
	int op;
	
	std::cout << "\n0 - Sair\n";
	std::cout << "\n1 - Fatorial\n";
	std::cout << "\n2 - Primo\n";
	std::cout << "\n3 - Perfeito\n";
	std::cout << "\n4 - Par ou Impar\n";
	std::cin >> op;
	
	switch (op)
	{
		case 1:
			fatorial();
			break;
			
		case 2:
			primo();
			break;
			
		case 3:
			perfeito();
			break;
			
		case 4:
			par_impar();
			break;
		
		default:
			std::cout << "\nSaindo...\n";
			break;
	}
}

void dois_valores() //aqui e pra caso escolha calcular dois valores
{
    int op;
    double n1, n2;

    std::cout << "\n0 - Sair\n";
    std::cout << "1 - Somar\n";
    std::cout << "2 - Subtrair\n";
    std::cout << "3 - Multiplicar\n";
    std::cout << "4 - Dividir\n";
    std::cout << "5 - Elevar\n";
    std::cin >> op;

	if(op >= 1 && op <= 5)
	{
		std::cout << "Primeiro Valor: ";
		std::cin >> n1;

		std::cout << "Segundo Valor: ";
		std::cin >> n2;

		switch (op)
		{
			case 1:
				std::cout << n1 << "+" << n2 << " = " << soma(n1, n2);
				break;

			case 2:
				std::cout << n1 << "-" << n2 << " = " << subtracao(n1, n2);
				break;

			case 3:
				std::cout << n1 << "*" << n2 << " = " << multiplicacao(n1, n2);
				break;

			case 4:
				std::cout << n1 << "/" << n2 << " = " << divisao(n1, n2);
				break;

			case 5:
				std::cout << n1 << "^" << n2 << " = " << elevado(n1, n2);
				break;
		}
	}
	
	else
	{
		std::cout << "\nSaindo...\n";
	}
}

void fatorial()
{
    int num, auxiliar, multiplicador = 1;

    std::cout << "Escreva um numero: ";
    std::cin >> num;

    auxiliar = num;

    std::cout << auxiliar << "!\n";

    for(int i = num; i >= 1; i--)
    {
		std::cout << i << "\n";
		multiplicador *= i;
    }

    std::cout << "=\n";
    std::cout << multiplicador << std::endl;
}

void primo()
{	
    int num;
    bool primo = true;

    std::cout << "Digite um numero: ";	
    std::cin >> num;
    
    if(num <= 1)
    {
		primo = false;
	}
    
    for(int i = 2; i < num; i++)
    {
		if(num % i == 0)
		{
			primo = false;
			break;
		}
	}
	
	if(primo)
	{
		std::cout << "\n" << num << " e um numero primo\n";
	}
	else
	{
		std::cout << "\n" << num << " nao e um numero primo\n";
	}
}

void perfeito()
{
	int num, aux = 0;
	
	std::cout << "Digite um numero: ";
	std::cin >> num;
	
	for(int i = 1; i < num; i++)
	{
		if(num % i == 0)
		{
			aux += i;
		}
	}
	
	if(num == aux)
	{
		std::cout << "\n" << num << " e um numero perfeito\n";
	} 
	else
	{
		std::cout << "\n" << num << " nao e um numero perfeito\n";
	}
}

void par_impar()
{
	int num;
	
	std::cout << "\nDigite um numero: ";
	std::cin >> num;
	
	if(num % 2 == 0)
	{
		std::cout << "\n" << num << " E par\n";
	}
	else
	{
		std::cout << "\n" << num << " E impar\n";
	}
}

double soma(double n1, double n2)
{
    return n1 + n2;
}

double subtracao(double n1, double n2)
{
    return n1 - n2;
}

double multiplicacao(double n1, double n2)
{
    return n1 * n2;
}

double divisao(double n1, double n2)
{
    if(n2 == 0)
    {
        std::cout << "ERROR\n";
    }

    return n1 / n2;
}

double elevado(double n1, double n2)
{
    return pow(n1, n2);
}

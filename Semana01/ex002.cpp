// Operações aritméticas em c++

#include <iostream>
using namespace std;

int main() {  

int number1, number2, soma, sub, mult, div;
float fdiv;

cout << "Digite o primeiro número: ";
cin >> number1;

cout << "Digite o segundo número: ";
cin >> number2;

soma = number1 + number2;
sub = number1 - number2;
mult = number1 * number2;
div =  number1 / number2;
fdiv = (float)number1 / (float)number2;

cout << "Soma: " << soma << endl;
cout << "Subtração: " << sub << endl;
cout << "Multiplicação: " << mult << endl;
cout << "Divisão Inteira: " << div << endl;
cout << "Divisão Real: " << fdiv << endl;
return 0;
}

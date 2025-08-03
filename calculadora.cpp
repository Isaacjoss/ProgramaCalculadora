// calculadora.cpp (Versi贸n con funci贸n de potencia)
#include <iostream>
#include <cmath>
using namespace std;

double sumar(double a, double b) {
    return a + b;
}

double restar(double a, double b) {
    return a - b;
}

double multiplicar(double a, double b) {
    return a * b;
}

double dividir(double a, double b) {
    if (b == 0) {
        cout << "Error: Divisi贸n por cero no permitida." << endl;
        return 0;
    }
    return a / b;
}

double potencia(double base, double exponente) {
    return pow(base, exponente);
}

double raizCuadrada(double a) {
    if (a < 0) {
        cout << "Error: Ra韟 cuadrada de n鷐ero negativo no permitida." << endl;
        return 0;
    }
    return sqrt(a);
}

int main() {
    double num1, num2;
    char operacion;
    cout << "Ingrese dos n煤meros: ";
    cin >> num1 >> num2;
    cout << "Ingrese operaci贸n (+, -, *, /, ^,r): ";
    cin >> operacion;

    switch (operacion) {
        case '+':
            cout << "Resultado: " << sumar(num1, num2) << endl;
            break;
        case '-':
            cout << "Resultado: " << restar(num1, num2) << endl;
            break;
        case '*':
            cout << "Resultado: " << multiplicar(num1, num2) << endl;
            break;
        case '/':
            cout << "Resultado: " << dividir(num1, num2) << endl;
            break;
        case '^':
            cout << "Resultado: " << potencia(num1, num2) << endl;
            break;
        case 'r':
            cout << "Resultado: " << raizCuadrada(num1) << endl;
            break;
        default:
            cout << "Operaci贸n no v谩lida." << endl;
    }
    return 0;
}

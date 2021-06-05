#include "MenuProgram.h"

MenuProgram::MenuProgram()
{
    //ctor
}

void MenuProgram::menu()
{
    char option;
    do
    {
        system("cls");
        cout << "Calculadora cientifica embebida v1.0" << endl;
        cout << "1.-Operaciones basicas\n2.-Operaciones trigonometricas\n" <<
             "3.-Logaritmos\n4.-Funcion euler ^ x\n5.-Raices\n" <<
             "6.-Factorial\n7.-Potencias\n8.-Salir: ";
        cin >> option;
        switch (option)
        {
        case '1':
            selectOperationBasics();
            break;
        case '2':
            selectTrigonometircFunction();
            break;
        case '3':
            selectLogaritm();
            break;
        case '4':
            enterDataExponential();
            break;
        case '5':
            enterDataRoots();
            break;
        case '6':
            enterDataFactorial();
            break;
        case '7':
            enterDataPow();
            break;
        default:
            break;
        }
    }
    while(option != '8');
}
void MenuProgram::selectOperationBasics()
{
    char option;
    MathAsm math;
    float number1, number2;
    do
    {
        system("cls");
        cout << "1.-Suma\n2.-Resta\n" <<
             "3.-Multplicacion\n4.-Division\n5.-Salir: ";
        cin >> option;
        switch (option)
        {
        case '1':
            system("cls");
            cout << "Ingresa el primer numero: ";
            cin >> number1;
            cin.ignore();
            cout << "Ingresa el segundo numero: ";
            cin >> number2;
            cin.ignore();
            cout << "El resultado de la suma es: "  << math.sumNumbers(number1, number2) << endl;
            system("pause");
            break;
        case '2':
            system("cls");
            cout << "Ingresa el primer numero: ";
            cin >> number1;
            cin.ignore();
            cout << "Ingresa el segundo numero: ";
            cin >> number2;
            cin.ignore();
            cout << "El resultado de la resta es: "  << math.restNumbers(number1, number2) << endl;
            system("pause");
            break;
        case '3':
            system("cls");
            cout << "Ingresa el primer numero: ";
            cin >> number1;
            cin.ignore();
            cout << "Ingresa el segundo numero: ";
            cin >> number2;
            cin.ignore();
            cout << "El resultado de la multiplicacion es: "  << math.multNumbers(number1, number2) << endl;
            system("pause");
            break;
        case '4':
            system("cls");
            cout << "Ingresa el primer numero: ";
            cin >> number1;
            cin.ignore();
            cout << "Ingresa el segundo numero: ";
            cin >> number2;
            cin.ignore();
            cout << "El resultado de la division es: "  << math.divNumbers(number1, number2) << endl;
            system("pause");
            break;
        case '5':
            break;
        default:
            break;
        }
    }
    while(option != '5');
}

void MenuProgram::selectTrigonometircFunction()
{
    char option;
    MathAsm math;
    float number1;
    do
    {
        system("cls");
        cout << "1.-sin x\n2.-cos x\n" <<
             "3.-tan x\n4.-sec x\n5.-cosec x\n6.-cotan x\n7.-arctan x\n8.-arcsin x\n" <<
             "9.-arcos x\n0.-Salir: ";
        cin >> option;
        switch (option)
        {
        case '1':
            system("cls");
            cout << "Ingresa el valor de x: ";
            cin >> number1;
            cout << "sin x: "  << math.sinNumber(number1)<< endl;
            system("pause");
            break;
        case '2':
            system("cls");
            cout << "Ingresa el valor de x: ";
            cin >> number1;
            cin.ignore();
            cout << "cos x: "  << math.cosNumber(number1) << endl;
            system("pause");
            break;
        case '3':
            system("cls");
            cout << "Ingresa el valor de x: ";
            cin >> number1;
            cin.ignore();
            cout << "tan x: "  << math.tangNumber(number1) << endl;
            system("pause");
            break;
        case '4':
            system("cls");
            cout << "Ingresa el valor de x: ";
            cin >> number1;
            cin.ignore();
            cout << "sec x: "  << math.secNumber(number1) << endl;
            system("pause");
            break;
        case '5':
            system("cls");
            cout << "Ingresa el valor de x: ";
            cin >> number1;
            cin.ignore();
            cout << "cosec x: "  << math.cosecNumber(number1) << endl;
            system("pause");
            break;
        case '6':
            system("cls");
            cout << "Ingresa el valor de x: ";
            cin >> number1;
            cin.ignore();
            cout << "cotan x: "  << math.cotangNumber(number1) << endl;
            system("pause");
            break;
        case '7':
            system("cls");
            cout << "Ingresa el valor de x: ";
            cin >> number1;
            cin.ignore();
            cout << "arctan x: "  << math.arcTangNumber(number1) << endl;
            system("pause");
            break;
        case '8':
            system("cls");
            cout << "Ingresa el valor de x: ";
            cin >> number1;
            cin.ignore();
            cout << "arcsin x: "  << math.arcSinNumber(number1) << endl;
            system("pause");
            break;
        case '9':
            system("cls");
            cout << "Ingresa el valor de x: ";
            cin >> number1;
            cin.ignore();
            cout << "arcos x: "  << math.arcCosNumber(number1) << endl;
            system("pause");
            break;
        default:
            break;
        }
    }
    while(option != '0');
}

void MenuProgram::enterDataExponential()
{
    char option;
    MathAsm math;
    float number1;
    do
    {
        system("cls");
        cout << "1.-Ingresar el valor de x\n2.-Salir: ";
        cin >> option;
        switch (option)
        {
        case '1':
            system("cls");
            cout << "Ingresa el primer numero: ";
            cin >> number1;
            cin.ignore();
            cout << "El valor de e ^ x es: "  << math.exponentialFunction(number1)<< endl;
            system("pause");
            break;
        case '2':
            break;
        default:
            break;
        }
    }
    while(option != '2');
}

void MenuProgram::enterDataPow()
{
    char option;
    MathAsm math;
    float number1;
    float number2;
    do
    {
        system("cls");
        cout << "1.-Potencia cuadratica\n2.-Potencia a la n\n3.-Salir: ";
        cin >> option;
        switch (option)
        {
        case '1':
            system("cls");
            cout << "Ingresa el numero: ";
            cin >> number1;
            cin.ignore();
            cout << "El valor cuadratico del numero es: "  << math.pow_number(number1, 2.0)<< endl;
            system("pause");
            break;
        case '2':
            system("cls");
            cout << "Ingresa el numero a calcular su potencia: ";
            cin >> number1;
            cin.ignore();
            cout << "Ingresa la potencia: ";
            cin >> number2;
            cin.ignore();
            cout << "El valor a la potencia de n, del numero es: "  << math.pow_number(number1, number2)<< endl;
            system("pause");
            break;
        case '3':
            break;
        default:
            break;
        }
    }
    while(option != '3');
}

void MenuProgram::enterDataRoots()
{
    char option;
    MathAsm math;
    float number1;
    float number2;
    do
    {
        system("cls");
        cout << "1.-Raiz cuadratica\n2.-Raiz a la n\n3.-Salir: ";
        cin >> option;
        switch (option)
        {
        case '1':
            system("cls");
            cout << "Ingresa el numero: ";
            cin >> number1;
            cin.ignore();
            cout << "La raiz cuadrada del numero es: "  << math.sqrtOfNumber(number1)<< endl;
            system("pause");
            break;
        case '2':
            system("cls");
            cout << "Ingresa el numero a calcular su raiz: ";
            cin >> number1;
            cin.ignore();
            cout << "Ingresa el valor de n: ";
            cin >> number2;
            cin.ignore();
            cout << "El valor a la potencia de n, del numero es: "  << math.pow_number(number1, (1.0 / number2))<< endl;
            system("pause");
            break;
        case '3':
            break;
        default:
            break;
        }
    }
    while(option != '3');
}

void MenuProgram::selectLogaritm()
{
    char option;
    MathAsm math;
    float number1;
    do
    {
        system("cls");
        cout << "1.-Logaritmo Natural\n2.-Logaritmo base 2\n3.-Logaritmo base 10\n4.-Salir: ";
        cin >> option;
        switch (option)
        {
        case '1':
            system("cls");
            cout << "Ingresa el valor de x: ";
            cin >> number1;
            cin.ignore();
            cout << "El logaritmo natural de x es: "  << math.logaritmNatural(number1)<< endl;
            system("pause");
            break;
        case '2':
            system("cls");
            cout << "Ingresa el valor de x: ";
            cin >> number1;
            cin.ignore();
            cout << "El logaritmo base 2 de x es: "  << math.logaritmBase2(number1)<< endl;
            system("pause");
            break;
        case '3':
            system("cls");
            cout << "Ingresa el valor de x: ";
            cin >> number1;
            cin.ignore();
            cout << "El logaritmo base 10 de x es: "  << math.logaritmBase10(number1)<< endl;
            system("pause");
            break;
        case '4':
            break;
        default:
            break;
        }
    }
    while(option != '4');
}

void MenuProgram::enterDataFactorial()
{
    char option;
    MathAsm math;
    int number1, result;
    do
    {
        system("cls");
        cout << "1.-Ingresar el valor del factorial\n2.-Salir: ";
        cin >> option;
        switch (option)
        {
        case '1':
            system("cls");
            cout << "Ingresa el numero: ";
            cin >> number1;
            cin.ignore();
            result = math.factorialNumber(number1);
            cout << "El factorial del numero es: " << result <<  endl;
            system("pause");
            break;
        case '2':
            break;
        default:
            break;
        }
    }
    while(option != '2');
}







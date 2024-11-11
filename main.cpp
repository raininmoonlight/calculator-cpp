#include <iostream>
#include <string>
#include <cmath>

//Make by raininmoonlight

int main() {
    using namespace std;

    cout << "======================================" << endl;
    cout << "Choose operation type\n1 - Simple\n2 - Complex\n9 - Sair" << endl;
    cout << "======================================\nOnly number: ";
    int typeOperation;
    cin >> typeOperation;

    if (typeOperation == 1)
    {
        cout << "======================================";
        cout << "Choose operation simple\n1 - Addition\n2 - Subtraction\n3 - Multiplication\n4 - Division\n";
        cout << "======================================\nOnly number: ";
        int typeSimpOperation;
        cin >> typeSimpOperation;

        cout << "** Number 1 **: ";
        int num1;
        cin >> num1;

        cout << "** Number 2 **: ";
        int num2;
        cin >> num2;

        int resultado;

        switch (typeSimpOperation)
        {
        case 1:
            resultado = num1 + num2;
            cout << "** Result is **: " << resultado;
            break;
        case 2:
            resultado = num1 - num2;
            cout << "** Result is **: " << resultado;
            break;
        case 3:
            resultado = num1 * num2;
            cout << "** Result is **: " << resultado;
            break;
        case 4:
            if(num2 != 0) {
                resultado = num1 / num2;
            cout << "** Result is **: " << resultado;
            break;  
            } else {
                cout << "number 2 cannot be 0";
            }
                           

        
        default:
            break;
        }


    } else if (typeOperation == 2) {
        cout << "======================================" << endl;
        cout << "1 - Degree 2 equation\n";
        cout << "======================================\nOnly number: ";
        int typeComCalc;
        cin >> typeComCalc;

        switch (typeComCalc)
        {
        case 1:
            cout << "Coefficient A: ";
            double coefficientA;
            cin >> coefficientA;
            

            cout << "Coefficient B: ";
            double coefficientB;
            cin >> coefficientB;
            

            cout << "Coefficient C: ";
            double coefficientC;
            cin >> coefficientC;

            double delta = (coefficientB * coefficientB) - (4 * coefficientA * coefficientC);
            if (delta < 0) {
                cout << "Complex! Delta is < 0";
            } else {
                double raiz = sqrt(delta);

            double x1 = (-coefficientB + raiz) / (2 * coefficientA);
            double x2 = (-coefficientB - raiz) / (2 * coefficientA);

            cout << "Delta: " << delta << endl;
            cout << "Raiz: " << raiz << endl;
            cout << "x1: " << x1 << endl;
            cout << "x2: " << x2 << endl;
            }

            break;
        }
        

    } else {
        return 0;
    }
    

    return 0;
}
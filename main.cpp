#include <iostream>
#include <string>
#include <cmath>

// Make by raininmoonlight

int main() {
    using namespace std;

    int typeOperation;  // Variável para armazenar a operação escolhida pelo usuário

    do {
        cout << "======================================" << endl;
        cout << "Choose operation type\n1 - Simple\n2 - Complex\n9 - Exit" << endl;
        cout << "======================================\nOnly number: ";
        cin >> typeOperation;

        if (typeOperation == 1) {
            // Operações simples
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

            switch (typeSimpOperation) {
                case 1:
                    resultado = num1 + num2;
                    cout << "** Result is **: " << resultado << endl;
                    break;
                case 2:
                    resultado = num1 - num2;
                    cout << "** Result is **: " << resultado << endl;
                    break;
                case 3:
                    resultado = num1 * num2;
                    cout << "** Result is **: " << resultado << endl;
                    break;
                case 4:
                    if (num2 != 0) {
                        resultado = num1 / num2;
                        cout << "** Result is **: " << resultado << endl;
                    } else {
                        cout << "Number 2 cannot be 0" << endl;
                    }
                    break;
                default:
                    cout << "Invalid operation" << endl;
                    break;
            }

        } else if (typeOperation == 2) {
            cout << "======================================" << endl;
            cout << "1 - Degree 2 equation\n";
            cout << "======================================\nOnly number: ";
            int typeComCalc;
            cin >> typeComCalc;

            double delta; // Delta fora do switch para ascessar durante o codigo

            switch (typeComCalc) {
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

                    delta = (coefficientB * coefficientB) - (4 * coefficientA * coefficientC);  
                    if (delta < 0) {
                        cout << "Complex! Delta is < 0" << endl;
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
                default:
                    cout << "Invalid operation" << endl;
                    break;
            }

        } else if (typeOperation == 9) {
            // Encerrar o programa
            cout << "Exiting program..." << endl;
            break;

        } else {
            cout << "Invalid operation" << endl;
        }

    } while (true); // Laço continua até o usuário escolher sair

    return 0;
}

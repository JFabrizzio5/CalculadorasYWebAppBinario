#include <iostream> //Hernandez Gonzalez Joseph Fabrizzio  GITHUB: Jos5Dev
#include <string>
using namespace std;

// Funci�n para convertir un n�mero decimal a binario
string DecimalABinario(int numero) {
    if (numero == 0) {
        return "0";
    } else if (numero < 0) {
        return "-" + DecimalABinario(-numero);
    } else {
        string binario = "";
        while (numero > 0) {
            // Convertir el d�gito binario a un car�cter ASCII y agregarlo al inicio de la cadena binario
            char digito = (numero % 2) + '0';
            binario = digito + binario;
            // Dividir el n�mero por 2 para continuar con la siguiente iteraci�n
            numero /= 2;
        }
        return binario;
    }
}

int main() {
    int numero;

    // Solicitar al usuario que ingrese un n�mero decimal
    cout << "Ingrese un n�mero decimal: ";
    cin >> numero;

    // Convertir a binario e imprimir el resultado
    cout << "El n�mero binario es: " << DecimalABinario(numero) << endl;

    return 0;
}


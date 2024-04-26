#include <iostream> //Hernandez Gonzalez Joseph Fabrizzio  GITHUB: Jos5Dev
#include <string>
using namespace std;

// Función para convertir un número decimal a binario
string DecimalABinario(int numero) {
    if (numero == 0) {
        return "0";
    } else if (numero < 0) {
        return "-" + DecimalABinario(-numero);
    } else {
        string binario = "";
        while (numero > 0) {
            // Convertir el dígito binario a un carácter ASCII y agregarlo al inicio de la cadena binario
            char digito = (numero % 2) + '0';
            binario = digito + binario;
            // Dividir el número por 2 para continuar con la siguiente iteración
            numero /= 2;
        }
        return binario;
    }
}

int main() {
    int numero;

    // Solicitar al usuario que ingrese un número decimal
    cout << "Ingrese un número decimal: ";
    cin >> numero;

    // Convertir a binario e imprimir el resultado
    cout << "El número binario es: " << DecimalABinario(numero) << endl;

    return 0;
}


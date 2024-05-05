    //1CV11 Hernandwz Gonzalez Joseph Fabrizzio
    //Este codigo es el que esta insertado en el html de la pagina principal
    //Github Jfabrizzio5
    
          function calcular() {
            // Obtener el valor del input
            var numero = document.getElementById('numero').value;
            
            // Validar que se haya ingresado un número
            if (isNaN(numero)) {
              alert("Por favor, ingresa un número válido.");
              return;
            }

            //En este caso a diferencia de los otros lenguajes ocupamos cosas propias del lenguaje
            //transformando a la base el string del numero recibido

            // Calcular la conversión
            var decimal = parseInt(numero, 10);
            var binario = decimal.toString(2);
            var octal = decimal.toString(8);
            var hexadecimal = decimal.toString(16);
          
            // Mostrar los resultados en el html
            var resultadosDiv = document.getElementById('resultados');
            resultadosDiv.innerHTML = `
              <p>Decimal: ${decimal}</p>
              <p>Binario: ${binario}</p>
              <p>Octal: ${octal}</p>
              <p>Hexadecimal: ${hexadecimal}</p>
            `;
          }

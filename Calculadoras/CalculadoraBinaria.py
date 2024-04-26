def decimal_a_binario(numero):
    if numero == 0:
        return '0'
    elif numero < 0:
        return '-' + decimal_a_binario(-numero)
    else:
        binario = ''
        while numero > 0:
            binario = str(numero % 2) + binario
            numero = numero // 2
        return binario

#Hernandez Gonzalez Joseph Fabrizzio
#Github:Jos5Dev
# Codigo principal
numero_decimal = int(input("Ingrese un número decimal: "))
numero_binario = decimal_a_binario(numero_decimal)
print(f"El número binario correspondiente es: {numero_binario}")

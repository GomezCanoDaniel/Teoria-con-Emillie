import os
from itertools import permutations
from itertools import combinations

def menu():
    print("A)Ingresa los alfabetos")
    print("Puedes ingresarlos por: ")
    print('1. Caracter por caracter')
    print('2. Por rango y que despliegue el alfabeto')

while True:
    print(chr(27) + "[1;33m")
    texto = "PRACTICA 1"
    print(texto.center(50, "="))
    menu()
    opc = int(input("¿Cual opcion quieres?"))

    if opc == 1:
        cadena1 = (input("Introduce el alfabeto 1: "))
        print("El alfabeto 1 es: \n", cadena1)
        cadena2 = (input("Introduce el alfabeto 2: "))
        print("B)El alfabeto 2 es: \n", cadena2)
    elif opc == 2:
        cadena1 = (input("Introduce el alfabeto 1: "))
        i = (input("Ingresa el inicio del rango: "))
        f = (input("Ingresa el final del rango: "))
        list(range(i,f))
    else:
        print("")
        input("No has pulsado ninguna opcion...\n Pulsa para continuar")


    print("C)Leer dos cadenas, ambas deben ser del alfabeto 1 ")
    w1=(input("Introduce la cadena w1: "))
    if w1 in cadena1:
        print("Tu cadena es \t", w1)
    else:
        print("Cadena invalida! Ingreso algun caracter que no pertenece al alfabeto 1")

    w2=(input("Introduce la cadena w2: "))
    if w2 in cadena1:
        print("Tu cadena es \t", w2)
    else:
        print("Cadena invalida! Ingreso algun caracter que no pertenece al alfabeto 1")

    print("D)Realizar (w1w2)^n")
    n=int(input("Ingresa n"))
    w11=(w1)*n
    w22=(w2)*n
    print(w11+w22,)

    print("E)Obtener: |w1|x, donde x ԑ alfabeto1")
    x=(input("Ingresa x"))
    if x in cadena1:
        caracter = w1
        cuenta = 0
        for carac in caracter:
            if carac == x:
                cuenta ++ 1
        print (cuenta)
    else:
        print("El caracter ingresado no pertenece al alfabeto 1")

    print("F)Indicar si w1 es un prefijo o sufijo (propio o no propio), o subcadena, o subsecuencia, o cualquier combinación anterior, de w2.")
    #s=cadena1
    #print (s.split(""))

    print("G)Leer la palabra w3 y decir si es o no es un palíndromo.")
    w3=(input("Ingresa la palabra"))
    palindromo = w3[::-1]
    """iterable[::-1] devuelve los elementos del iterable, comenzando por el último y terminando por el primero, en orden inverso a como estaban."""
    if palindromo==w3:
        print("Es un palindromo")
    else:
        print("No es un palindromo")

    print("H)Generar ∑^n")
    n=(input("Ingresa un numero mayor a 0: "))
    if n<0:
        print("El numero ingresado no es mayor a cero")
    elif n==0:
        print("se genera Lambda")
    else:
        print("El alfabeto 1 es: ", cadena1)
        #permutaciones
        for p in permutations(cadena1):
            print(p)
        print()
        for p in permutations(cadena1, n):
            print(p)
        print()
        #combinaciones
        for c in combinations(cadena1, n):
            print(c)
        print()

    print("I)Generar 3 palabras válidas de forma aleatoria de ∑1 o de ∑2")

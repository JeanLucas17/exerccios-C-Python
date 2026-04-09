while True:
    saque = int(input("Qual o valor a ser sacado? R$ "))

    nota50 = saque / 50
    resto = saque % 50
    nota20 = resto / 20
    resto = resto % 20
    nota10 = resto / 10
    resto = resto % 10
    nota1 = resto

    print(
        f"Serão entregue: \n Notas 50: {nota50:.0f} \n Notas 20: {nota20:.0f} \n Nota 10: {nota10:.0f} \n Nota 1 {nota1:.0f}!"
    )

    break

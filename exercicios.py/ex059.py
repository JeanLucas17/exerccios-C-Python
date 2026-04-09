from time import sleep

num1 = int(input("Digite um numero: "))
num2 = int(input("Digite outro numero: "))

print(
    "Menu: \n  [1] Soma \n  [2] Multiplicar \n  [3] Maior \n  [4] Novos numeros \n  [5] Sair do programa"
)

escolha = int(input("Sua escolha: "))

while escolha not in [1, 2, 3, 4, 5]:
    print("Apenas escolhas de 1 a 5!")
    escolha = int(input("Sua escolha: "))

while escolha != 5:
    if escolha == 1:
        print(f"A soma de {num1} e {num2} = {num1 + num2}")
    elif escolha == 2:
        print(f"A multiplicação de {num1} e {num2} = {num1 * num2}")
    elif escolha == 3:
        if num1 == num2:
            print("Não tem maior! Os dois numeros são iguais!")
        else:
            maior = max(num1, num2)
            print(f"O maior numero é o {maior}")
    else:
        num1 = int(input("Digite o novo numero: "))
        num2 = int(input("Digite o outro numero: "))
    sleep(1)

    print(
        "Menu: \n  [1] Soma \n  [2] Multiplicar \n  [3] Maior \n  [4] Novos numeros \n  [5] Sair do programa"
    )

    escolha = int(input("Sua escolha: "))

    while escolha not in [1, 2, 3, 4, 5]:
        print("Apenas escolhas de 1 a 5!")
        escolha = int(input("Sua escolha: "))

print("Saindo...")
sleep(3)

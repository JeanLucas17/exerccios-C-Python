maiores_18_anos = 0
homens = 0
mulheres_menos_20_anos = 0
total_mulheres = 0

while True:
    idade = int(input("Digite sua idade: "))
    sexo = str(input("Digite o seu sexo [M/F]: ")).upper().strip()

    while sexo not in ["M", "F"]:
        print("Sexo invalido!")
        sexo = str(input("Apenas [M/F]: ")).upper().strip()

    if idade >= 18:
        maiores_18_anos += 1

    if sexo == "M":
        homens += 1

    elif idade < 20:
        mulheres_menos_20_anos += 1
        total_mulheres += 1
    
    escolha = str(input("Quer continuar? [S/N]: ")).upper().strip()

    while escolha not in ["S", "N"]:
        print("Apenas [S/N]!")
        escolha = str(input("Sua escolha [S/N]: ")).upper().strip()

    if escolha == "N":
        break

if maiores_18_anos > 0:
    print(f"{maiores_18_anos} pessoa(s) tem mais de 18 anos!")
else:
    print("Todas as pessoas são menores de idade!")

if homens > 0:
    print(f"Foi cadastrado(s) {homens} homen(s)!")
else:
    print("Nenhum homem cadastrado!")

if total_mulheres < 1:
    print("Não tem mulheres na lista!")
else:
    if mulheres_menos_20_anos > 0:
        print(f"{mulheres_menos_20_anos} mulher(es) tem menos de 20 anos!")
    else:
        print("Nenhuma mulher com menos de 20 anos!")


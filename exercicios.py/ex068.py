from random import randint

vitorias = 0
resultado_par_impar = ""

print("=== JOGUE PAR OU IMPAR COM NUMEROS DE 1 A 10 ===")

while True:
    computador = randint(1, 10)

    jogador = int(input("Numero: "))
    escolha_jogador = str(input("Você quer [PAR/IMPAR]: ")).upper().strip()

    while escolha_jogador not in ["PAR", "IMPAR"]:
        print("Apenas [PAR/IMPAR]: ")
        escolha_jogador = str(input("[PAR/IMPAR]: ")).upper().strip()

    soma = jogador + computador

    if soma % 2 == 0:
        resultado_par_impar = "PAR"
    else:
        resultado_par_impar = "IMPAR"

    print(
        f"Você escolheu {jogador} e o computador escolheu {computador}. O total é {soma}. E o resultado é {resultado_par_impar}!"
    )

    if escolha_jogador == resultado_par_impar:
        vitorias += 1
        print("Você venceu! Vamos jogar novamente...")
    else:
        break

if vitorias > 0:
    print(f"Você venceu {vitorias} vez(es)!")
else:
    print("O computador venceu!")

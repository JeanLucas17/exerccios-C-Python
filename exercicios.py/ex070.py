total_gasto = 0
produtos_mais_de_1000 = 0
produto_barato = 0
count = 0
nome_produto_barato = ""

while True:
    nome = str(input("Qual o nome do produto: ")).title().strip()
    preco = float(input("Qual o preço do produto: R$ "))

    if count == 0:
        produto_barato = preco
        nome_produto_barato = nome
        count += 1

    if produto_barato > preco:
        produto_barato = preco
        nome_produto_barato = nome

    total_gasto += preco

    if preco > 1000:
        produtos_mais_de_1000 += 1

    escolha = str(input("Quer continuar? [S/N]: ")).upper().strip()

    while escolha not in ["S", "N"]:
        print("Apenas [S/N]!")
        escolha = str(input("Sua escolha [S/N]: ")).upper().strip()

    if escolha == "N":
        break

print(f"O total gasto na compra foi R$ {total_gasto:.2f}!")

if produtos_mais_de_1000 > 0:
    print(f"{produtos_mais_de_1000} produtos custam mais de R$ 1000!")
else:
    print("Nenhum produto ultrapassa os R$ 1000!")

print(f"O produto mais barato é {nome_produto_barato} custando R$ {produto_barato}")

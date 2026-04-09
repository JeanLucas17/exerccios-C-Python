sexo = str(input("Digite o seu sexo [M/F]: ")).upper().strip()

while sexo not in ["M", "F"]:
    print("Sexo invalido! Apenas [M/F]!")
    sexo = str(input("Sexo [M/F]: ")).upper().strip()

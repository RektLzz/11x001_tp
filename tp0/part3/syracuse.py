u = int(input("Entrer un entier supérieur à 1: "))

i = 0
while u > 1:

    if u % 2 == 0:
        u = u // 2
    else:
        u = 3 * u + 1

    i += 1

    print("u_" + str(i), "=", u)

print("Temps de vol:", i)

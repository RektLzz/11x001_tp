
age_invalid = True

while age_invalid:
    age = input("Entrez votre age: ")   # age est un string
    age = int(age)                      # age est maintenant un entier

    if age < 0:
        print("Vous ne pouvez pas être plus jeune que 0 ans.")
    else:
        age_invalid = False

print("Votre age est: ", age)

if age >= 18:
    print("Vous êtes majeur.")
else:
    print("Vous êtes mineur.")
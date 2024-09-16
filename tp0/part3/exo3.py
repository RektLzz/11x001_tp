'''

for i in range(15):
    print(i)

# Ici, le code boucle de i (qui est initialement 0) jusqu'à 14 (on s'arrète avant le nombre spécifié dans range)   
# Note : La fonction range() renvoie une séquence de nombres, commençant par 0 par défaut, s'incrémentant de 1 (par défaut), et s'arrêtant avant un nombre spécifié.

'''

sum = 0
max = 10
for i in range(max + 1):
    sum += i

print("La sum de 0 à", max, "est de :", sum)
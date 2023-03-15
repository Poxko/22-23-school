moltiplicatore = []
ris = 1

num = int(input('Inserisci quanti numeri vuoi inserire: '))

for i in  range(0,num):
    moltiplicatore.append(int(input('Inserisci il numero:')))

for i in range(0,len(moltiplicatore)):
    ris *= moltiplicatore[i]

print(ris)

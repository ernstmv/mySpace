def change_calculator(charge, pay):
    coins={10:0, 5:0, 2:0, 1:0, 0.5:0}
    bills = {1000:0, 500:0, 200:0, 100:0, 50:0, 20:0}
    change=pay-charge
    print(f"The change is: {change}\n")
    for bill in bills:
        bills[bill]=change//bill
        change=change-bill*bills[bill]
        if bills[bill]==0: continue
        print(f"{int(bills[bill])} bill(s) of {bill} pesos")

    for coin in coins:
        coins[coin]=change//coin
        change=change-coin*coins[coin]
        if coins[coin]==0: continue
        print(f"{int(coins[coin])} coin(s) of {coin} pesos")

def main():
    charge=float(input("Please enter the total ammount:\n"))
    pay=float(input("Please enter the total pay:\n"))
    change_calculator(charge, pay)

if __name__=="__main__":
    main()

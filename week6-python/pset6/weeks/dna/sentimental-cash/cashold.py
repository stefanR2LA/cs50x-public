while True:
    cents = float(input("Change: "))
    if cents > 0:
        break

cents = round(cents*100)
counter = 0

#Total number of Quaters
while cents >= 25:
    cents = cents - 25
    counter += 1
#Total number of dimes
while cents >= 10:
    cents = cents - 10
    counter += 1
#Total number of nickles
while cents >= 5:
    cents = cents - 5
    counter += 1
#Total number of pennies
while cents >= 1:
    cents = cents - 1
    counter += 1

print(f"total number of coins: {counter}")
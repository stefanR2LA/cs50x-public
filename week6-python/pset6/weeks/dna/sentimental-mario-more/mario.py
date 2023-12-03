def mario (prompt):
    while True:
        try:
            return int(input(prompt))
        except ValueError:
            print("Invalid input. Must be positive intiger.")

n = mario("Height: ")

while n < 1 or n > 8:
    print("Height must be between 1 and 8.")
    n = mario("Height: ")

for i in range(1, n+1):
    print(" "*(n-i) + "#"*(i) + "  " + "#"*(i))
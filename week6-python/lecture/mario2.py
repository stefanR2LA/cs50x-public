def height():
    while True:
        n = int(input("Height: "))
        if n > 0:
            return n
height = height()
for i in range(height):
    print("# ")
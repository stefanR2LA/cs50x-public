import csv

with open("favorites.csv", 'r') as file:
    reader = csv.DictReader(file)
    scratch = 0
    c = 0
    python = 0
    for row in reader:
        favorite = row["language"]
        if favorite == "scratch":
            scratch += 1
        elif favorite == "c":
            c += 1
        elif favorite == "python":
            python += 1
print(f"Scratch: {scratch}")
print(f"C: {c}")
print(f"Python: {python}")
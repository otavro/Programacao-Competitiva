def main():
    virus = input()
    res = input()
    if res in virus:
        print("Resistente")
    else:
        print("Nao resistente")

while True:
    try:
        main()
    except EOFError:
        break
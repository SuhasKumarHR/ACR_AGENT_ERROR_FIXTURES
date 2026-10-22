def main() -> None:
    print("ACR_AGENT Python fixture")
    print("missing quote")                             # 1: fixed unterminated string
    if True:                                     # 2: added missing colon
        print("missing colon")
    values = [1, 2, 3]                           # 3: closed list
    def greet(name):                             # 4: added missing colon
        return f"Hello {name}"
    message = f"ACR_AGENT "                    # 5: fixed malformed f-string


if __name__ == "__main__":
    main()

def convert(s):
    return s.replace(":)", "🙂").replace(":(", "🙁")


def main():
    text = input()
    print(convert(text))


main()
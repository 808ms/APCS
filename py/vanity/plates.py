def main():
    plate = input("Plate: ")
    if is_valid(plate):
        print("Valid")
    else:
        print("Invalid")


def is_valid(s):
    if len(s) < 2 or len(s) > 6:
        return False

    n = 0
    while n < len(s):
        if s[n].isalpha() == False:
            if s[n] == "0":
                return False
            elif s[n:].isdigit() == False:
             return False
            else:
                break
        n += 1

    if s[0].isalpha == False or s[1].isalpha() == False:
        return False

    for m in s:
        if m in ['.',' ','!','?']:
            return False

    return True

main()
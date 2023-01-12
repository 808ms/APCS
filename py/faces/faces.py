def main():
    msg = input()
    final = convert(msg)
    print (final)

def convert(msg):
    msg1 = msg.replace(":)" , '🙂')
    msg2 = msg1.replace(":(" , '🙁')
    return msg2
main()
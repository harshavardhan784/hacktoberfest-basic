L = []
while 1:
    # accepts sequence of lines as input
    l = input()
    if l:
        # all characters in the sentence capitalized.
        L.append(l.upper())
    else:
        break;

for l in L:
    # prints the lines
    print(l)

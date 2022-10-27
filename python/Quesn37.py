def pstring(str):
    if len(str) == 1:
        return str

    r_p = []
    for c in str:
        for p in pstring(str.replace(c,'',1)):
            r_p.append(c+p)

    return set(r_p)
s=input("Enter the string:")
print(pstring(s)) 

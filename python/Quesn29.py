def rotate(ar, d, n):
    if(d>n):
        d=d%n
    l=[]
    k=ar.index(d)
    l=ar[k+1:]+ar[0:k+1]
    return l
         
n=int(input("Array Size:"))
ar=[]
print("Enter the elements")
for i in range(n):
    ar.append(int(input()))
d=input("Enter d value:")
print(rotate(ar,int(d),n))

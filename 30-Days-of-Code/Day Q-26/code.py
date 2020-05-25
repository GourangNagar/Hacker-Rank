a = str(input()).split(" ")
da = int(a[0])
ma = int(a[1])
ya = int(a[2])

e = str(input()).split(" ")
de = int(e[0])
me = int(e[1])
ye = int(e[2])

fine=0
if(ya>ye):
    fine=10000
elif ya==ye:
    if ma>me:
        fine=(ma-me)*500
    elif ma==me and da>de :
        fine=(da-de)*15
print(fine)

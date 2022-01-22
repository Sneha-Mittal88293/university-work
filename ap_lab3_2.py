lt=list(map(int,input("enter the numbers: ").split(',')))
l=len(lt)
c=0
for i in range(0,l-1):
    if(lt[i]==lt[i+1]):
        c=c+1
print(lt)
print(c)

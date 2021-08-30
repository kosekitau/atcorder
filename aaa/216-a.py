n=input()
y=int(n.split('.')[1])
x=n.split('.')[0]
if 0<=y<=2:
    print(x+'-')
elif 3<=y<=6:
    print(x)
else :
    print(x+'+')

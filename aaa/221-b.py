s = input()
t = input()

f = False
if(s == t): 
    f=True
for i in range(len(s)-1):
    if s[:i]+s[i+1]+s[i]+s[i+2:] == t:
       f = True 

if(f): 
    print('Yes')
else:
    print('No')
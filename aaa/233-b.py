l, r = input().split()
l = int(l) - 1 
r = int(r) - 1 
s = input()
new_s = s[l:r+1]
print(s[:l]+new_s[::-1]+s[r+1:])
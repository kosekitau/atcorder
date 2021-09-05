s = input()
l = int((len(s)-1)/2)
r = int((len(s)+1)/2)

rs=s[::-1]
if s[0:l]==rs[0:l] and s[r:]==rs[r:] and s==rs:
    print("Yes")
else:
    print("No") 
s = input()
ans1=len(s[1:])*9
ans1+=int(s[0])-1

ans2=sum([int(ss) for ss in s])

print(max(ans1, ans2))
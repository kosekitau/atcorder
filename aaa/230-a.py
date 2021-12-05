n = int(input())

if n>=42:
    print(f'AGC0{n+1}')
elif n<10:
    print(f'AGC00{n}')
else:
    print(f'AGC0{n}')
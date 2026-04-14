num = int(input())

if num <= 1:
    print("NO")
else:
    x = 2
    while x * x <= num:
        if num % x == 0:
            print("NO")
            break
        x += 1
    else:
        print("YES")
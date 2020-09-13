''' https://www.hackerrank.com/challenges/list-comprehensions/problem '''

if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())

    l = [[i, j, k] for i in range(0, x + 1) for j in range(0, y + 1) for k in range(0, z + 1)]
    i, list_length = 0, len(l)

    while i < list_length:
        if sum(l[i]) == n:
            l.pop(i)
            i -= 1
            list_length -= 1
        i += 1

    print(l)

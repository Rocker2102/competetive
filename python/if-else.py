''' https://www.hackerrank.com/challenges/py-if-else/problem '''

if __name__ == '__main__':
    n = int(raw_input().strip())

    if n % 2 != 0:
        print("Weird")
    elif n in range(2, 6) or n > 20:
        print("Not Weird")
    elif n in range(6, 21):
        print("Weird")

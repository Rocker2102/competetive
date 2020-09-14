''' https://www.hackerrank.com/challenges/finding-the-percentage/problem '''

if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()

    avg = sum(student_marks[query_name]) / len(student_marks[query_name])
    avg = round(avg, 2)

    tmp = str(avg).split(".")
    if (len(tmp[1]) != 2):
        tmp[1] += "0"
    print(".".join(tmp))

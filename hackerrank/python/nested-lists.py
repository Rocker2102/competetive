''' https://www.hackerrank.com/challenges/nested-list/problem '''

if __name__ == '__main__':
    student_list = []

    for _ in range(int(input())):
        tmp = {}
        tmp["name"] = input()
        tmp["score"] = float(input())
        student_list.append(tmp)

    student_list.sort(key = lambda e : e["score"])
    min_val = student_list[0]["score"]
    second_min = None
    filtered_list = []

    for student in student_list:
        if second_min != None and student["score"] > second_min:
            break
        if second_min == None and student["score"] > min_val:
            second_min = student["score"]
            filtered_list = []
        if student["score"] == second_min:
            filtered_list.append(student["name"])

    filtered_list.sort()
    for name in filtered_list:
        print(name)

def max_value(lst,mod):
    answer = 0
    for i in lst:
        curr = 0
        for val in i:
            curr = curr + val*val
        curr = curr%mod
        if curr > answer:
            answer = curr
    print(answer)

num_lsts , mod = map(int,input().split())
lst_size = [] 
lst_lst = []
for i in range(num_lsts):
    string = input()
    lst = string.split()
    lst_size.append(int(lst[0]))
    lst.remove(lst[0])
    for i in range(len(lst)):
        lst[i] = int(lst[i])%mod
    lst_lst.append(lst)
#print(lst_lst)
import itertools
lst_lst = list(itertools.product(*lst_lst))
#print(lst_lst)
max_value(lst_lst,mod)

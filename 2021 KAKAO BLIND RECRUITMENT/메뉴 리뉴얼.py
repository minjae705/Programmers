from itertools import combinations 
def solution(orders, course):
    answer = []
    single = []
    for i in range(65,91):
        single.append(chr(i))
    for size in course:
        combi = []
        for com in combinations(single, size):
            combi.append(''.join(com))
        cnt = [0 for i in range(len(combi))]
        for j in range(len(combi)):
            for order in orders:
                tmpord = set(order)
                tmpcom = set(combi[j])
                if tmpord & tmpcom == tmpcom:
                    cnt[j] += 1
        tmp = max(cnt)
        for c in range(len(cnt)):
            if cnt[c] == tmp and tmp >= 2:
                answer.append(combi[c])
    answer = sorted(answer)                
    return answer

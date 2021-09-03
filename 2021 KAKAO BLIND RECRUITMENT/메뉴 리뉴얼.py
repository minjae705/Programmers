from itertools import combinations
from collections import Counter

def solution(orders, course):
    answer = []
    for size in course:
        combilist = []
        for order in orders:
            combilist += list(map(''.join, combinations(sorted(order), size)))
        if len(combilist) == 0:
            continue
        cntcombilist = Counter(combilist).most_common()
        cnt = cntcombilist[0][1]
        for c in cntcombilist:
             if c[1] == cnt and c[1] >= 2:
                answer.append(c[0])   
    answer = sorted(answer)
    return answer

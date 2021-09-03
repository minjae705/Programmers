def solution(info, query):
    data = dict()
    for a in ['cpp', 'java', 'python', '-']:
        for b in ['backend', 'frontend', '-']:
            for c in ['junior', 'senior', '-']:
                for d in ['chicken', 'pizza', '-']:
                    data.setdefault((a, b, c, d), list())
    for i in info:
        i = i.split()
        for a in [i[0], '-']:
            for b in [i[1], '-']:
                for c in [i[2], '-']:
                    for d in [i[3], '-']:
                        data[(a, b, c, d)].append(int(i[4]))

    for k in data:
        data[k].sort()

    answer = list()
    for q in query:
        q = q.split()

        pool = data[(q[0], q[2], q[4], q[6])]
        find = int(q[7])
        l = 0
        r = len(pool)
        mid = 0
        while l < r:
            mid = (r+l)//2
            if pool[mid] >= find:
                r = mid
            else:
                l = mid+1
                
        answer.append(len(pool)-l)

    return answer

# from itertools import combinations
# from collections import defaultdict

# def solution(info, query):
#     answer = []
#     info_dict = defaultdict(list)
#     for i in info:
#         temp = i.split(" ")
#         key = temp[0:-1]
#         score = int(temp[-1])

#         for r in range(5):
#             combi = list(combinations(key, r))
#             for c in combi:
#                 temp_key = ''.join(c)
#                 info_dict[temp_key].append(score)
                
#     for key in info_dict.keys():
#         info_dict[key].sort()

#     for q in query:
#         q = q.split(" ")
#         query_score = int(q[-1])
#         query_key = q[:-1]

#         for _ in range(3):
#             query_key.remove("and")

#         while "-" in query_key:
#             query_key.remove("-")
#         query_key = ''.join(query_key)

#         if query_key in info_dict:
#             scoreList = info_dict[query_key]

#             if len(scoreList) > 0:
#                 left, right = 0, len(scoreList)
#                 while left < right:
#                     mid = (left + right) // 2
#                     if scoreList[mid] >= query_score:
#                         right = mid
#                     else:
#                         left = mid+1
#                 answer.append(len(scoreList)-left)
#         else:
#             answer.append(0)

#     return answer

def lower_bound(nums, target):
    left, right = 0, len(nums)
    while left < right:  
        mid = left + (right - left) // 2
        if nums[mid] < target:
            left = mid + 1
        else:
            right = mid
    return right

def solution(info, query):
    answer = [0 for i in range(len(query))]
    apply = [[] for i in range(24)]
    for i in info:
        tmpi = list(i.split(' '))
        spot = 24
        if tmpi[0] == 'cpp':
            spot = spot//3
        elif tmpi[0] == 'java':
            spot = spot//3*2
        if tmpi[1] == 'backend':
            spot -= 4
        if tmpi[2] == 'junior':
            spot -= 2
        if tmpi[3] == 'chicken':
            spot -= 1
        spot -= 1
        apply[spot].append(int(tmpi[4]))
    
    now = 0
    for q in query:
        qchk = [0 for i in range(24)]
        tmpq = list(q.split(' and '))
        tmpq += list(tmpq[3].split(' '))
        del tmpq[3]
        
        if tmpq[0] == 'cpp':
            for i in range(0,8):
                qchk[i] = 1
        elif tmpq[0] == 'java':
            for i in range(8,16):
                qchk[i] = 1
        elif tmpq[0] == 'python':
            for i in range(16,24):
                qchk[i] = 1
        else:
            for i in range(0,24):
                qchk[i] = 1
                
        if tmpq[1] == 'backend':
            for i in range(0,24):
                if i//4%2 == 1:
                    qchk[i] = 0
        elif tmpq[1] == 'frontend':
            for i in range(0,24):
                if i//4%2 == 0:
                    qchk[i] = 0
                    
        if tmpq[2] == 'junior':
            for i in range(0,24):
                if i//2%2 == 1:
                    qchk[i] = 0
        elif tmpq[2] == 'senior':
            for i in range(0,24):
                if i//2%2 == 0:
                    qchk[i] = 0
                    
        if tmpq[3] == 'chicken':
            for i in range(0,24):
                if i%2 == 1:
                    qchk[i] = 0
        elif tmpq[3] == 'pizza':
            for i in range(0,24):
                if i%2 == 0:
                    qchk[i] = 0
        
        for c in range(24):
            if qchk[c] == 1 and len(apply[c]) > 0:
                idx = lower_bound(sorted(apply[c]), int(tmpq[4]))
                answer[now] += len(apply[c]) - idx
        now += 1 
        
    return answer

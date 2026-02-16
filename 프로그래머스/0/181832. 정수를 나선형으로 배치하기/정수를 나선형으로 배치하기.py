def solution(n):
    answer = [[0] * n for _ in range(n)]
    
    num = 1
    top, bottom = 0, n - 1
    left, right = 0, n - 1
    
    while left <= right and top <= bottom:
        
        # → 오른쪽
        for i in range(left, right + 1):
            answer[top][i] = num
            num += 1
        top += 1
        
        # ↓ 아래
        for i in range(top, bottom + 1):
            answer[i][right] = num
            num += 1
        right -= 1
        
        # ← 왼쪽
        if top <= bottom:
            for i in range(right, left - 1, -1):
                answer[bottom][i] = num
                num += 1
            bottom -= 1
        
        # ↑ 위
        if left <= right:
            for i in range(bottom, top - 1, -1):
                answer[i][left] = num
                num += 1
            left += 1
    
    return answer

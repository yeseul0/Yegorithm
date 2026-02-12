class dot:
    def __init__(self, x, y):
        self.x = x
        self.y = y
        
def solution(dots):
    #총 검사 3쌍. -> 기울기 같은지 보면 됨
    a = dot(dots[0][0], dots[0][1])
    b = dot(dots[1][0], dots[1][1])
    c = dot(dots[2][0], dots[2][1])
    d = dot(dots[3][0], dots[3][1])
    
    if (a.x-b.x)*(c.y-d.y) == (a.y-b.y)*(c.x-d.x):
        return 1
    elif (a.x-c.x)*(b.y-d.y) == (a.y-c.y)*(b.x-d.x):
        return 1
    elif (a.x-d.x)*(b.y-c.y) == (a.y-d.y)*(b.x-c.x):
        return 1
    else: return 0
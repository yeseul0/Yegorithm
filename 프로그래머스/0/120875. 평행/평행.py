class dot:
    def __init__(self, x, y):
        self.x=x
        self.y=y

def solution(dots):
    
    dot1=dot(dots[0][0],dots[0][1])
    dot2=dot(dots[1][0],dots[1][1])
    dot3=dot(dots[2][0],dots[2][1])
    dot4=dot(dots[3][0],dots[3][1])
    
    
    if (dot1.x-dot2.x)*(dot3.y-dot4.y)==(dot1.y-dot2.y)*(dot3.x-dot4.x):
        return 1
    elif (dot1.x-dot3.x)*(dot2.y-dot4.y)==(dot1.y-dot3.y)*(dot2.x-dot4.x):
        return 1
    elif (dot1.x-dot4.x)*(dot2.y-dot3.y)==(dot1.y-dot4.y)*(dot2.x-dot3.x):
        return 1
    else: return 0
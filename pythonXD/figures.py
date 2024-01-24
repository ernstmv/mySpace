import turtle as tt

def draw(angle):
    tt.left(angle)
    for _ in range(3):
        tt.forward(100)
        tt.left(120)
        tt.forward(200)
        tt.left(120)


def main():
    tt.pencolor("white")
    tt.width(2)
    tt.bgcolor("black")
    tt.speed(100)
    angles=[60 for i in range(6)]
    for angle in angles: draw(angle)
    tt.penup()
    tt.goto(300, 0)
    tt.pendown()
    tt.pencolor("red")
    for angle in angles: draw(angle)
    tt.penup()
    tt.goto(-300, 0)
    tt.pendown()
    tt.pencolor("green")
    for angle in angles: draw(angle)
    tt.done()
    pass

if __name__=="__main__":
    main()

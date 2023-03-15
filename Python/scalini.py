import turtle
t= turtle.Screen()
t.bgcolor("light green")
t = turtle.Turtle()

num = int(input('Inserisci il numero di scalini da disegnare: '))

t.forward(100)
for i in range(1,num):
    t.right(90)
    t.forward(100)
    t.left(90)
    t.forward(100)

t.right(90)
t.forward(100)

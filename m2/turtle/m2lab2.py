"""
CSC 134
M2Lab1 - Turtles
T Thomas
9/10/25
All the way down.
"""

import math
import turtle          
win = turtle.Screen()
win.colormode(255) # now we can use 0-255
t = turtle.Turtle()

# add some display options
t.pensize(4)
t.pencolor( (0, 128, 0) )
t.fillcolor( (0, 196, 0) )
t.shape("turtle")
t.speed(7)

"""
# bottom stroke
t.right(135)
t.forward(math.sqrt(2)*50)
t.left(45)
t.forward(100)
t.left(45)
t.forward(math.sqrt(2)*100)
t.left(90)
t.forward(math.sqrt(2)*100)
t.left(45)
t.forward(100)
t.left(45)
t.forward(math.sqrt(2)*100)
t.right(45)
t.forward(100)

# move to start of next stroke
t.left(180)
t.forward(100)
t.left(45)
t.forward(math.sqrt(2)*50)
t.left(90)

# second verse same as the first
t.forward(math.sqrt(2)*50)
t.left(45)
t.forward(100)
t.left(45)
t.forward(math.sqrt(2)*100)
t.left(90)
t.forward(math.sqrt(2)*100)
t.left(45)
t.forward(100)
t.left(45)
t.forward(math.sqrt(2)*100)
t.right(45)
t.forward(100)
"""

def draw_turtle(y):
    # shell
    t.up()
    t.goto(-100,0 + y)
    t.setheading(30)
    t.down()
    
    t.begin_fill()
    
    for i in range(7):
        t.forward(30)
        t.right(10)
    
    t.up()
    t.goto(-100,0 + y)
    t.setheading(-10)
    t.down()
    
    for i in range(3):
        t.forward(67)
        t.left(10)
    
    t.end_fill()
    
    # the actual turtle
    t.up()
    t.goto(-100,0 + y)
    t.setheading(-10)
    t.forward(20)
    t.setheading(-150)
    t.down()
    
    t.forward(20)
    t.setheading(0)
    t.forward(30)
    t.setheading(-70)
    t.forward(35)
    t.setheading(15)
    t.forward(25)
    t.left(135)
    t.forward(10)
    t.setheading(110)
    t.forward(15)
    t.goto(0,-23 + y)
    
    t.up()
    t.goto(98,0 + y)
    t.setheading(-170)
    t.forward(20)
    t.setheading(5)
    t.down()
    
    t.forward(30)
    t.right(30)
    t.forward(20)
    t.setheading(-90)
    t.forward(10)
    t.setheading(205)
    t.forward(20)
    t.setheading(160)
    t.forward(20)
    t.goto(64.78622433010133, -17.666869310426428 + y) #i now start using gotos because i stopped caring
    
    t.up()
    t.goto(0,-23 + y)
    t.down()
    
    t.goto(45.296058529548965,-20.796339841493705 + y)
    t.setheading(-110)
    t.forward(24)
    t.setheading(-15)
    t.forward(25)
    t.left(135)
    t.forward(10)
    t.setheading(70)
    t.forward(25)

i = 450

while i <= 10000: #idk how to make it actually infinite so im just setting it to a really big number, should be fine
    draw_turtle(i)
    i -= 70

# end commands
win.mainloop()          # Wait for user to close window
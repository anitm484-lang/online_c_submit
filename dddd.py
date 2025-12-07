import turtle
 
p = turtle.Turtle()

for i  in range(8):          # here we have to know the arrow like forward means statring form right hand and goes to up
    p.forward(120)             # here we have to know the arrow like backward means statring form left hand and goes to down
    p.backward(80)            # left meaning go and back toward left
    p.right(20)
    
turtle.done()

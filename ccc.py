import turtle

# Create a turtle object
t = turtle.Turtle()

# Draw a hexagon
for i in range(8):
    t.forward(100)  # Move forward 100 pixels
    t.left(60)      # Turn left 60 degrees

turtle.done()

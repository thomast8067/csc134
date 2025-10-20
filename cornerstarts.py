import pygame
import sys
import random

# Initialize Pygame
pygame.init()

# Set up the display
width, height = 600, 400
screen = pygame.display.set_mode((width, height))
pygame.display.set_caption("Bouncing Balls!")

# --- Create a clock to control framerate ---
clock = pygame.time.Clock()

# --- Helper to randomize corner positions ---
def random_corner(corner, radius):
    offset = 10  # max random offset
    if corner == "topleft":
        return radius + random.randint(0, offset), radius + random.randint(0, offset)
    elif corner == "topright":
        return width - radius - random.randint(0, offset), radius + random.randint(0, offset)

# --- Ball 1 properties (top-left) ---
radius1 = 50
x1, y1 = random_corner("topleft", radius1)
ball_color1 = (255, 0, 102)
x_speed1 = 4
y_speed1 = 4

# --- Ball 2 properties (top-right) ---
radius2 = 30
x2, y2 = random_corner("topright", radius2)
ball_color2 = (0, 255, 255)
x_speed2 = -3
y_speed2 = 5

# --- Ball 3 properties (bottom-middle) ---
radius3 = 40
x3 = width // 2
y3 = height - radius3 - 5  # slight offset from bottom
ball_color3 = (255, 255, 0)
x_speed3 = 5
y_speed3 = -3

# --- Player-controlled ball (center) ---
player_radius = 20
player_x = width // 2
player_y = height // 2
player_color = (255, 255, 255)
player_speed = 8

# --- Collision helper ---
def check_collision(xa, ya, ra, xb, yb, rb):
    dx = xa - xb
    dy = ya - yb
    return dx * dx + dy * dy <= (ra + rb) ** 2

# --- Main Game Loop ---
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

    # --- PLAYER CONTROLS ---
    keys = pygame.key.get_pressed()
    if keys[pygame.K_LEFT]:
        player_x -= player_speed
    if keys[pygame.K_RIGHT]:
        player_x += player_speed
    if keys[pygame.K_UP]:
        player_y -= player_speed
    if keys[pygame.K_DOWN]:
        player_y += player_speed

    # Keep player ball within screen boundaries
    player_x = max(player_radius, min(width - player_radius, player_x))
    player_y = max(player_radius, min(height - player_radius, player_y))

    # --- GAME LOGIC ---
    x1 += x_speed1
    y1 += y_speed1
    x2 += x_speed2
    y2 += y_speed2
    x3 += x_speed3
    y3 += y_speed3

    # Bounce off walls
    for x, y, r, xs, ys in [(x1, y1, radius1, x_speed1, y_speed1),
                            (x2, y2, radius2, x_speed2, y_speed2),
                            (x3, y3, radius3, x_speed3, y_speed3)]:
        if x + r >= width or x - r <= 0:
            if x == x1: x_speed1 *= -1
            elif x == x2: x_speed2 *= -1
            elif x == x3: x_speed3 *= -1
        if y + r >= height or y - r <= 0:
            if y == y1: y_speed1 *= -1
            elif y == y2: y_speed2 *= -1
            elif y == y3: y_speed3 *= -1

    # --- COLLISION DETECTION BETWEEN BALLS ---
    if check_collision(x1, y1, radius1, x2, y2, radius2):
        x_speed1, x_speed2 = -x_speed1, -x_speed2
        y_speed1, y_speed2 = -y_speed1, -y_speed2

    if check_collision(x1, y1, radius1, x3, y3, radius3):
        x_speed1, x_speed3 = -x_speed1, -x_speed3
        y_speed1, y_speed3 = -y_speed1, -y_speed3

    if check_collision(x2, y2, radius2, x3, y3, radius3):
        x_speed2, x_speed3 = -x_speed2, -x_speed3
        y_speed2, y_speed3 = -y_speed2, -y_speed3

    # --- OPTIONAL: COLLISION WITH PLAYER BALL ---
    if check_collision(player_x, player_y, player_radius, x1, y1, radius1):
        x_speed1, y_speed1 = -x_speed1, -y_speed1
    if check_collision(player_x, player_y, player_radius, x2, y2, radius2):
        x_speed2, y_speed2 = -x_speed2, -y_speed2
    if check_collision(player_x, player_y, player_radius, x3, y3, radius3):
        x_speed3, y_speed3 = -x_speed3, -y_speed3

    # --- DRAWING ---
    screen.fill((0, 0, 0))
    pygame.draw.circle(screen, ball_color1, (x1, y1), radius1)
    pygame.draw.circle(screen, ball_color2, (x2, y2), radius2)
    pygame.draw.circle(screen, ball_color3, (x3, y3), radius3)
    pygame.draw.circle(screen, player_color, (player_x, player_y), player_radius)
    pygame.display.flip()
    clock.tick(60)

# Quit Pygame
pygame.quit()
sys.exit()

import pygame
import sys

# Initialize Pygame
pygame.init()

# Set up the display
width, height = 600, 400
screen = pygame.display.set_mode((width, height))
pygame.display.set_caption("Bouncing Balls!")

# --- Create a clock to control framerate ---
clock = pygame.time.Clock()

# --- Ball 1 properties ---
x1 = width // 2
y1 = height // 2
radius1 = 50
ball_color1 = (255, 0, 102)  # Bright pink
x_speed1 = 4
y_speed1 = 4

# --- Ball 2 properties ---
x2 = 100
y2 = 100
radius2 = 30
ball_color2 = (0, 255, 255)  # Cyan
x_speed2 = -3
y_speed2 = 5

# --- Ball 3 properties ---
x3 = 500
y3 = 300
radius3 = 40
ball_color3 = (255, 255, 0)  # Yellow
x_speed3 = 5
y_speed3 = -3

# --- Player-controlled ball properties ---
player_x = width // 2
player_y = height // 2
player_radius = 35
player_color = (255, 255, 255)  # White
player_speed = 5

# --- Main Game Loop ---
running = True
while running:
    # Check for events (like closing the window)
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
    if player_x - player_radius < 0:
        player_x = player_radius
    if player_x + player_radius > width:
        player_x = width - player_radius
    if player_y - player_radius < 0:
        player_y = player_radius
    if player_y + player_radius > height:
        player_y = height - player_radius

    # --- GAME LOGIC ---
    
    # Move ball 1
    x1 += x_speed1
    y1 += y_speed1
    
    # Bouncing logic for ball 1
    if (x1 + radius1 >= width) or (x1 - radius1 <= 0):
        x_speed1 = -x_speed1
    if (y1 + radius1 >= height) or (y1 - radius1 <= 0):
        y_speed1 = -y_speed1

    # Move ball 2
    x2 += x_speed2
    y2 += y_speed2
    
    # Bouncing logic for ball 2
    if (x2 + radius2 >= width) or (x2 - radius2 <= 0):
        x_speed2 = -x_speed2
    if (y2 + radius2 >= height) or (y2 - radius2 <= 0):
        y_speed2 = -y_speed2

    # Move ball 3
    x3 += x_speed3
    y3 += y_speed3
    
    # Bouncing logic for ball 3
    if (x3 + radius3 >= width) or (x3 - radius3 <= 0):
        x_speed3 = -x_speed3
    if (y3 + radius3 >= height) or (y3 - radius3 <= 0):
        y_speed3 = -y_speed3

    # --- DRAWING ---
    
    # Fill the screen with a color (black)
    screen.fill((0, 0, 0))

    # Draw all three bouncing balls
    pygame.draw.circle(screen, ball_color1, (x1, y1), radius1)
    pygame.draw.circle(screen, ball_color2, (x2, y2), radius2)
    pygame.draw.circle(screen, ball_color3, (x3, y3), radius3)
    
    # Draw the player-controlled ball
    pygame.draw.circle(screen, player_color, (player_x, player_y), player_radius)

    # Update the display
    pygame.display.flip()

    # --- Limit the game to 60 frames per second (FPS) ---
    clock.tick(60)

# Quit Pygame
pygame.quit()
sys.exit()
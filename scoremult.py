import pygame
import sys
import random
import time
import math

# Initialize Pygame
pygame.init()

# Set up the display
width, height = 1000, 700
screen = pygame.display.set_mode((width, height))
pygame.display.set_caption("Bouncing Balls!")

clock = pygame.time.Clock()

# --- Player-controlled ball ---
player_radius = 20
player_x = width // 2
player_y = height // 2
player_color = (255, 255, 255)
player_speed = 8
player_alive = True

# --- Score ---
score = 0
font = pygame.font.SysFont(None, 36)

# --- Ball list ---
balls = []

def spawn_ball_at(x, y, x_speed, y_speed):
    radius = random.randint(20, 50)
    color = random.choice([(255, 0, 102), (0, 255, 255), (255, 255, 0), (0, 255, 0), (255, 128, 0)])
    balls.append({"x": x, "y": y, "radius": radius, "x_speed": x_speed, "y_speed": y_speed, "color": color})

# Spawn initial ball
initial_x = random.randint(50, width - 50)
initial_y = random.randint(50, height - 50)
initial_vx = random.choice([-5, -4, -3, 3, 4, 5])
initial_vy = random.choice([-5, -4, -3, 3, 4, 5])
spawn_ball_at(initial_x, initial_y, initial_vx, initial_vy)

# --- Spawn timing ---
spawn_interval = 3
last_spawn_time = time.time()

def random_spawn_preview():
    x = random.randint(50, width - 50)
    y = random.randint(50, height - 50)
    vx = random.choice([-5, -4, -3, 3, 4, 5])
    vy = random.choice([-5, -4, -3, 3, 4, 5])
    return x, y, vx, vy

next_spawn_x, next_spawn_y, next_vx, next_vy = random_spawn_preview()

# --- Score multiplier zone ---
multiplier_x = width // 2
multiplier_y = height // 2
multiplier_radius = 100

# --- Collision helper ---
def check_collision(xa, ya, ra, xb, yb, rb):
    dx = xa - xb
    dy = ya - yb
    return dx * dx + dy * dy <= (ra + rb) ** 2

def is_inside_multiplier_zone(px, py):
    dx = px - multiplier_x
    dy = py - multiplier_y
    return dx * dx + dy * dy <= multiplier_radius * multiplier_radius

# --- Main Game Loop ---
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

    # --- Spawn new ball every interval ---
    if time.time() - last_spawn_time > spawn_interval:
        spawn_ball_at(next_spawn_x, next_spawn_y, next_vx, next_vy)
        last_spawn_time = time.time()
        next_spawn_x, next_spawn_y, next_vx, next_vy = random_spawn_preview()

    # --- PLAYER CONTROLS ---
    if player_alive:
        keys = pygame.key.get_pressed()
        if keys[pygame.K_LEFT]:
            player_x -= player_speed
        if keys[pygame.K_RIGHT]:
            player_x += player_speed
        if keys[pygame.K_UP]:
            player_y -= player_speed
        if keys[pygame.K_DOWN]:
            player_y += player_speed

        player_x = max(player_radius, min(width - player_radius, player_x))
        player_y = max(player_radius, min(height - player_radius, player_y))

        # Score logic
        if is_inside_multiplier_zone(player_x, player_y):
            score += 2
        else:
            score += 1

    # --- GAME LOGIC ---
    for ball in balls:
        ball["x"] += ball["x_speed"]
        ball["y"] += ball["y_speed"]

        if ball["x"] + ball["radius"] >= width or ball["x"] - ball["radius"] <= 0:
            ball["x_speed"] *= -1
        if ball["y"] + ball["radius"] >= height or ball["y"] - ball["radius"] <= 0:
            ball["y_speed"] *= -1

        if player_alive and check_collision(player_x, player_y, player_radius, ball["x"], ball["y"], ball["radius"]):
            player_alive = False

    # --- DRAWING ---
    screen.fill((0, 0, 0))

    for ball in balls:
        pygame.draw.circle(screen, ball["color"], (int(ball["x"]), int(ball["y"])), ball["radius"])

    if player_alive:
        pygame.draw.circle(screen, player_color, (player_x, player_y), player_radius)
    else:
        game_over_text = font.render("Game Over!", True, (255, 255, 255))
        screen.blit(game_over_text, (width // 2 - 100, height // 2 - 24))

    # Draw score with dynamic color
    score_color = (255, 255, 0) if is_inside_multiplier_zone(player_x, player_y) else (255, 255, 255)
    score_text = font.render(f"Score: {score}", True, score_color)
    screen.blit(score_text, (20, 20))

    # Draw red hollow circle and direction arrow for next spawn
    pygame.draw.circle(screen, (255, 0, 0), (next_spawn_x, next_spawn_y), 25, 2)
    arrow_scale = 10
    arrow_end_x = next_spawn_x + next_vx * arrow_scale
    arrow_end_y = next_spawn_y + next_vy * arrow_scale
    pygame.draw.line(screen, (255, 0, 0), (next_spawn_x, next_spawn_y), (arrow_end_x, arrow_end_y), 2)

    angle = math.atan2(next_vy, next_vx)
    arrowhead_length = 8
    left_angle = angle + math.pi / 6
    right_angle = angle - math.pi / 6
    left_x = arrow_end_x - arrowhead_length * math.cos(left_angle)
    left_y = arrow_end_y - arrowhead_length * math.sin(left_angle)
    right_x = arrow_end_x - arrowhead_length * math.cos(right_angle)
    right_y = arrow_end_y - arrowhead_length * math.sin(right_angle)
    pygame.draw.line(screen, (255, 0, 0), (arrow_end_x, arrow_end_y), (left_x, left_y), 2)
    pygame.draw.line(screen, (255, 0, 0), (arrow_end_x, arrow_end_y), (right_x, right_y), 2)

    # Draw multiplier zone
    pygame.draw.circle(screen, (255, 255, 0), (multiplier_x, multiplier_y), multiplier_radius, 2)

    pygame.display.flip()
    clock.tick(60)

# Quit Pygame
pygame.quit()
sys.exit()

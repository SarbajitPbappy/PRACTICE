import pygame
import random

# Initialize Pygame
pygame.init()

# Define colors
BLACK = (0, 0, 0)
WHITE = (255, 255, 255)
GREEN = (0, 255, 0)
RED = (255, 0, 0)

# Set the width and height of the screen
SCREEN_WIDTH = 600
SCREEN_HEIGHT = 600
screen = pygame.display.set_mode((SCREEN_WIDTH, SCREEN_HEIGHT))

# Set the title of the window
pygame.display.set_caption("Snake Game")

# Define the Snake class
class Snake:
    def __init__(self):
        self.length = 1
        self.positions = [(SCREEN_WIDTH // 2, SCREEN_HEIGHT // 2)]
        self.direction = random.choice([pygame.K_UP, pygame.K_DOWN, pygame.K_LEFT, pygame.K_RIGHT])

    def get_head_position(self):
        return self.positions[0]

    def turn(self, point):
        if self.length > 1 and (point[0]*-1,point[1]*-1) == self.direction:
            return
        else:
            self.direction = point

    def move(self):
        cur = self.get_head_position()
        x, y = self.direction
        new = ((cur[0] + (x*10)), (cur[1] + (y*10)))
        if new in self.positions[2:]:
            self.reset()
        else:
            self.positions.insert(0, new)
            if len(self.positions) > self.length:
                self.positions.pop()

    def reset(self):
        self.length = 1
        self.positions = [(SCREEN_WIDTH // 2, SCREEN_HEIGHT // 2)]
        self.direction = random.choice([pygame.K_UP, pygame.K_DOWN, pygame.K_LEFT, pygame.K_RIGHT])

    def draw(self, surface):
        for p in self.positions:
            r = pygame.Rect((p[0], p[1]), (10, 10))
            pygame.draw.rect(surface, WHITE, r)
            pygame.draw.rect(surface, GREEN, r, 1)

# Define the Food class
class Food:
    def __init__(self):
        x = random.randrange(0, SCREEN_WIDTH, 10)
        y = random.randrange(0, SCREEN_HEIGHT, 10)
        self.position = (x, y)
        self.color = RED

    def draw(self, surface):
        r = pygame.Rect((self.position[0], self.position[1]), (10, 10))
        pygame.draw.rect(surface, self.color, r)
        pygame.draw.rect(surface, WHITE, r, 1)

# Initialize the Snake and Food objects
snake = Snake()
food = Food()

# Set the clock
clock = pygame.time.Clock()

# Define the main game loop
while True:
    # Handle events
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            quit()
        elif event.type == pygame.KEYDOWN:
            if event.key == pygame.K_ESCAPE:
                pygame.quit()
                quit()
            elif event.key == pygame.K_UP:
                snake.turn((0, -1))
            elif event.key == pygame.K_DOWN:
                snake.turn((0, 1))
            elif event.key == pygame.K_LEFT:
                snake.turn((-1, 0))
            elif event.key == pygame.K_RIGHT:
                snake.turn((1, 0))

    # Move the Snake
    snake.move()

    # Check if the Snake has collided with the Food
    # Check if the Snake has collided with the Food
    if snake.get_head_position() == food.position:
        snake.length += 1
        food = Food()

    # Draw the background
    screen.fill(BLACK)

    # Draw the Snake and Food
    snake.draw(screen)
    food.draw(screen)

    # Update the display
    pygame.display.update()

    # Set the frame rate
    clock.tick(20)

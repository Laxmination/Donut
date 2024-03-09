import os
import time

def clear_screen():
    os.system('cls' if os.name == 'nt' else 'clear')

def draw_man(step):
    man = [
        "  O",
        " /|\\",
        " / \\",
        " | |",
        "/   \\",
        "-----"
    ]
    if step % 2 == 0:
        man[1] = " / \\"
        man[2] = " / \\"
    else:
        man[1] = " \\ /"
        man[2] = " \\ /"
    for line in man:
        print(line)

def main():
    for i in range(20):
        clear_screen()
        draw_man(i)
        time.sleep(0.3)

if __name__ == "__main__":
    main()

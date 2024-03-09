#include <stdio.h>
#include <unistd.h>

void clear_screen() {
    printf("\033[H\033[J");
}

void draw_woman(int step) {
    printf("\n\n");
    printf("        o\n");
    printf("       /|\\\n");
    printf("       / \\\n");
    printf("      /   \\\n");
    printf("     /     \\\n");
    printf("    /|     |\\\n");
    printf("   / |     | \\\n");
    printf("  /  |     |  \\\n");
    printf("     |     |\n");
    printf("     |     |\n");
    printf("     |     |\n");
    printf("    /       \\\n");
    printf("   /         \\\n");
    printf("  /           \\\n");
    if (step % 2 == 0) {
        printf("   /     |     \\\n");
        printf("  /      |      \\\n");
    } else {
        printf("   /   / | \\    \\\n");
        printf("  /   /  |  \\    \\\n");
    }
    printf(" /_____________\\\n");
}

int main() {
    int i;
    for (i = 0; i < 20; i++) {
        clear_screen();
        draw_woman(i);
        usleep(300000); 
    }
    return 0;
}

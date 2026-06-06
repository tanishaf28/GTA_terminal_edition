#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int health = 100;
    int money  = 100;
    int wanted = 0;
    int choice;

    srand(time(0));

    printf("==============================\n");
    printf("  GTA: Terminal Edition 💀\n");
    printf("==============================\n");

    while (health > 0) {

        printf("\n--- WHAT DO YOU WANT TO DO? ---\n");
        printf("1. Work 💼\n");
        printf("2. Rob Bank 💰\n");
        printf("3. Fight 🥊\n");
        printf("4. Rest 😴\n");
        printf("Choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("You worked a shift. Exhausting but legal.\n");
            money  += 20;
            health -= 5;

        } else if (choice == 2) {
            int luck = rand() % 2;
            if (luck) {
                printf("Robbery success! You grabbed $100. 💰\n");
                money  += 100;
                wanted += 2;
            } else {
                printf("Police spotted you mid-robbery! 🚔\n");
                health -= 30;
                wanted += 3;
            }

        } else if (choice == 3) {
            int outcome = rand() % 2;
            if (outcome) {
                printf("You won the fight. Easy money. 😎\n");
                money += 30;
            } else {
                printf("They were bigger than they looked. 💀\n");
                health -= 25;
            }

        } else if (choice == 4) {
            printf("You rested up. Health recovering.\n");
            health += 20;

        } else {
            printf("Invalid choice. You stood there looking confused.\n");
        }

        // Wanted system: runs every turn
        if (wanted >= 3) {
            printf("\n🚔 POLICE ARE AFTER YOU!\n");
            int escape = rand() % 2;

            if (!escape) {
                printf("Caught! They took your money and beat you up.\n");
                health -= 40;
                money  -= 50;
                wanted  = 0;
            } else {
                printf("You escaped! But they're still watching.\n");
            }
        }

        // Cap health at 100 so resting doesn't make you immortal
        if (health > 100) health = 100;

        printf("\nHealth: %d | Money: $%d | Wanted: %d star(s)\n",
               health, money, wanted);
    }

    printf("\n==============================\n");
    printf("        GAME OVER 💀\n");
    printf("   Final money: $%d\n", money);
    printf("==============================\n");

    return 0;
}

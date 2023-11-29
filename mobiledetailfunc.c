#include <stdio.h>

int choice, m, storagec, clr, cart, rom1, rom2, rom3;

void storage(int rom1, int rom2, int rom3) {
    printf("Please choose storage\n");
    printf("1) 128GB\n2) 256GB\n3) 512GB\n");
    scanf("%d", &storagec);

    if (storagec == 1) {
        printf("You choose 128GB\n");
        printf("Price of your mobile: %d\n", rom1);
    }
    else if (storagec == 2) {
        printf("You choose 256GB\n");
        printf("Price of your mobile: %d\n", rom2);
    }
    else if (storagec == 3) {
        printf("You choose 512GB\n");
        printf("Price of your mobile: %d\n", rom3);
    }
}

void color() {
    printf("Please choose color\n");
    printf("1) Red\n2) White\n3) Black\n");
    scanf("%d", &clr);
    if (clr == 1) {
        printf("You choose red color\n");
    }
    else if (clr == 2) {
        printf("You choose white color\n");
    }
    else if (clr == 3) {
        printf("You choose black color\n");
    }
}

void addcart() {
    printf("Please verify\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Added to cart\n");
    }
    else {
        printf("Try again\n");
    }
}

void iphone() {
    printf("Choose variant\n");
    printf("1) iPhone 12\n");
    printf("2) iPhone 13\n");
    printf("3) iPhone 14\n");
    scanf("%d", &m);
    if (m == 1) {
        printf("You choose iPhone 12\n");
        color();
        storage(65000, 74000, 83000);
    }
    else if (m == 2) {
        printf("You choose iPhone 13\n");
        color();
        storage(85000, 97000, 110000);
    }
    else if (m == 3) {
        printf("You choose iPhone 14\n");
        color();
        storage(98000, 100000, 110000);
    }
}

void brandfunc() {
    printf("Welcome to the mobile shop\n");
    printf("Choose your brand\n");
    printf("1) Apple\n");
    printf("2) Samsung\n");
    printf("3) Vivo\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("You choose Apple\n");
        iphone();
        addcart();
    }
    else if (choice == 2) {
        printf("You choose Samsung\n");
    }
    else if (choice == 3) {
        printf("You choose Vivo\n");
    }
}

int main() {
    brandfunc();
    
}

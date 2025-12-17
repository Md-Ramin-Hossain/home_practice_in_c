#include <stdio.h>

int get_random_number() {
    int num = rand() % 100; // generates a random number between 0 and 99
    return num;
}

int main() {
    int random_num = get_random_number(); // calling the function
    printf("The random number is: %d\n", random_num);
    return 0;
}

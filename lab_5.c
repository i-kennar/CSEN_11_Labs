#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int num1;
    int num2;
    int answer;
    int product;
    int grade = 0;
    int i;
    srand((int)time(NULL));
    printf("Please answer the following ten multiplication probelms: \n");
    for (i = 0; i < 10; i ++) {
        num1 = rand() % 13;
        num2 = rand() % 13;
        product = num1 * num2;
        printf("%d x %d = \n", num1, num2);
        scanf("%d", &answer);
        if (answer != product) {
            printf("\nSorry, the correct answer was %d \n", product);
        } else {
            printf("Correct! \n");
            grade ++;
        }
    }
    grade = grade * 10;
    printf("\n You got %d%% correct! \n", grade);
    return 0;
}
#include <stdio.h>

int main() {
    int scores[5];
    int n = 5;
    int i;
    int highest, lowest, sum = 0;
    float average;

    printf("Enter scores of 5 matches: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    // Initialize highest and lowest with the first score
    highest = lowest = scores[0];

    // Loop to compute sum, highest and lowest scores
    for(i = 0; i < n; i++) {
        sum += scores[i];
        if(scores[i] > highest) {
            highest = scores[i];
        }
        if(scores[i] < lowest) {
            lowest = scores[i];
        }
    }

    average = (float)sum / n;

    printf("Highest Score: %d\n", highest);
    printf("Lowest Score: %d\n", lowest);
    printf("Average Score: %.1f\n", average);

    return 0;
}

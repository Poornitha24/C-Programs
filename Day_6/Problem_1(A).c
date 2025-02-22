#include <stdio.h>
#include <string.h>

// Define a structure to represent a movie
struct Movie {
    char title[100];
    float rating;
};

int main() {
    // List of movies
    struct Movie movies[3] = {
        {"Movie A", 8.5},
        {"Movie B", 9.2},
        {"Movie C", 7.8}
    };

    // Sort movies by rating (simple bubble sort)
    struct Movie temp;
    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (movies[i].rating < movies[j].rating) {
                temp = movies[i];
                movies[i] = movies[j];
                movies[j] = temp;
            }
        }
    }

    // Display the sorted movies
    printf("Movies Sorted by Rating:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s (Rating: %.1f)\n", movies[i].title, movies[i].rating);
    }

    // Search for a movie
    char movie_to_search[100];
    printf("\nEnter the movie title to search: ");
    scanf("%s", movie_to_search);

    int found = 0;
    for (int i = 0; i < 3; i++) {
        if (strcmp(movies[i].title, movie_to_search) == 0) {
            printf("Found: %s (Rating: %.1f)\n", movies[i].title, movies[i].rating);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Movie not found!\n");
    }

    // Display the top 3 movies
    printf("\nTop 3 Movies:\n");
    for (int i = 0; i < 3; i++) {
        printf("Top %d: %s (Rating: %.1f)\n", i + 1, movies[i].title, movies[i].rating);
    }

    return 0;
}

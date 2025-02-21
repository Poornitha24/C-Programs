#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int temp;
    int humidity;
} Weather;

int main() {
    int n;
    printf("Enter number of cities: ");
    scanf("%d", &n);
    
    Weather cities[n];
    
    for (int i = 0; i < n; i++) {
        printf("Enter city %d details (Name Temperature Humidity): ", i + 1);
        scanf("%s %d %d", cities[i].name, &cities[i].temp, &cities[i].humidity);
    }
    
    // Save data to a file
    FILE *fp = fopen("weather_data.txt", "w");
    for (int i = 0; i < n; i++) {
        fprintf(fp, "%s: %d°C, %d%% Humidity\n", cities[i].name, cities[i].temp, cities[i].humidity);
    }
    fclose(fp);
    printf("Data saved in \"weather_data.txt\"\n");
    
    char search[50];
    printf("Enter city name to search: ");
    scanf("%s", search);
    
    for (int i = 0; i < n; i++) {
        if (strcmp(cities[i].name, search) == 0) {
            printf("Weather in %s: %d°C, %d%% Humidity\n", cities[i].name, cities[i].temp, cities[i].humidity);
            return 0;
        }
    }
    
    printf("City not found.\n");
    return 0;
}

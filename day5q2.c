#include <stdio.h>

int main() {
    long long total_seconds;

    printf("Enter time in seconds: ");
    scanf("%lld", &total_seconds);

    if (total_seconds >= 0) {
        long long hours = total_seconds / 3600;
        long long minutes = (total_seconds % 3600) / 60;
        long long seconds = total_seconds % 60;

        printf("\nTime format (HH:MM:SS): %02lld:%02lld:%02lld\n", hours, minutes, seconds);
    } else {
        printf("Error: Time cannot be negative.\n");
    }

    return 0;
}
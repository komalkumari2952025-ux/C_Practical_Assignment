#include <stdio.h>

int main()
{
    int numParticipants, age;
    int child = 0, teen = 0, adult = 0, senior = 0;

    printf("--- Age-Group Survey Analyzer ---\n");
    printf("Enter the number of participants in the survey: ");
    scanf("%d", &numParticipants);

    if (numParticipants <= 0)
    {
        printf("Invalid number of participants. Exiting...\n");
        return 1;
    }

    for (int i = 1; i <= numParticipants; i++)
    {
        printf("Enter age for participant %d: ", i);
        scanf("%d", &age);

        if (age >= 0 && age <= 12)
        {
            child++;
        }
        else if (age >= 13 && age <= 19)
        {
            teen++;
        }
        else if (age >= 20 && age <= 59)
        {
            adult++;
        }
        else if (age >= 60)
        {
            senior++;
        }
        else
        {
            printf("Invalid age entered. Skipping...\n");
        }
    }

    printf("\n--- Survey Results ---\n");
    printf("-------------------------------\n");
    printf("%-15s | %-10s\n", "Category", "Frequency");
    printf("-------------------------------\n");
    printf("%-15s | %-10d\n", "Child (0-12)", child);
    printf("%-15s | %-10d\n", "Teen (13-19)", teen);
    printf("%-15s | %-10d\n", "Adult (20-59)", adult);
    printf("%-15s | %-10d\n", "Senior (60+)", senior);
    printf("-------------------------------\n");
    printf("Total Analyzed: %d\n", (child + teen + adult + senior));

    return 0;
}
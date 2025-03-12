// Your code here...
#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Student students[n], topScorer; 
   

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);

        if (i == 0 || students[i].marks > topScorer.marks) {
            topScorer = students[i]; 
        }
    }

    printf("Top Scorer: ");
    printf("Roll Number: %d, ", topScorer.rollNumber);
    printf("Name: %s, ", topScorer.name);
    printf("Marks: %.2f\n", topScorer.marks); 

    return 0;
}
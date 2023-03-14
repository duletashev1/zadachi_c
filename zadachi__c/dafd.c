#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 50
#define MAX_COURSES 50

struct student {
    char name[50];
    int id;
    int num_courses;
    int courses[MAX_COURSES];
};

struct course {
    char name[50];
    int code;
    int num_students;
};

int get_most_popular_course(struct course courses[], int num_courses) {
    int max_students = -1;
    int max_course_index = -1;

    for (int i = 0; i < num_courses; i++) {
        if (courses[i].num_students > max_students) {
            max_students = courses[i].num_students;
            max_course_index = i;
        }
    }

    return max_course_index;
}

int main() {
    struct student students[MAX_STUDENTS];
    struct course courses[MAX_COURSES];
    int num_students = 0;
    int num_courses = 0;

    // Vnesi go brojot na studenti
    scanf("%d", &num_students);

    // Vnesi go brojot na kursevi
    scanf("%d", &num_courses);

    // Dodadi gi kursevite
    for (int i = 0; i < num_courses; i++) {
        // Vnesi go imeto na kursot
        scanf("%s", courses[i].name);

        // Vnesi go kodot na kursot
        scanf("%d", &courses[i].code);

        courses[i].num_students = 0;
    }

    // Dodadi gi studentite
    for (int i = 0; i < num_students; i++) {
        // Vnesi go imeto na i-ot student
        scanf("%s", students[i].name);

        // Vnesi go indeksot na i-ot student
        scanf("%d", &students[i].id);

        // Vnesi go brojot na kursevi koi gi slusa i-ot student
        scanf("%d", &students[i].num_courses);

        for (int j = 0; j < students[i].num_courses; j++) {
            // Vnesi go kodot na kursot koj go slusa i-ot student
            scanf("%d", &students[i].courses[j]);

            for (int k = 0; k < num_courses; k++) {
                if (courses[k].code == students[i].courses[j]) {
                    courses[k].num_students++;
                    break;
                }
            }
        }
    }

    // Pechati go najpopularniot kurs
    int most_popular_course_index = get_most_popular_course(courses, num_courses);
    printf("Najpopularen kurs e: %s\n", courses[most_popular_course_index].name);

    return 0;
}

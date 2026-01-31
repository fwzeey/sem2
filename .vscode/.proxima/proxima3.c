#include <stdio.h>

int main() {
    char name[] = "Fawzan";
    int age = 20;
    float mark = 35.5;
    char grade = 'C';

    printf(
        "My name is %s, I am %d years old, I scored %.1f marks, and my grade is %c",
        name, age, mark, grade
    );

    return 0;
}

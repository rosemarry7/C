#include <stdio.h>
#define MSG "You must have many talents,, Tell me some."

#define LIM 5
#define LINELEN 81
int main(void){

    char name[LINELEN];
    char talents[LINELEN];
    int i;
    const char m1[40] = "Limit yourself to one line's worth,";
    const char m2[] = "If you cant think of anything, fake it";
    const char *mytail[LIM] = {
        "Stashing data",
        "Following instructing to the letter",
        "Adding numbers swiftly",
            "Multiplying accurately to the letter",
        "Understanding the C language"
    };
    return 0;
}

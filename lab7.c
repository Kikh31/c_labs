#include <stdio.h>

enum Org_type {
    ZAO,
    OOO,
    IP
};

struct Rectangle {
    int x, y, width, height;
};

int get_perimeter(struct Rectangle st) {
    return 2 * (st.width + st.height);
}

union Player{
    struct {
        unsigned int play: 1;
        unsigned int pause: 1;
        unsigned int record: 1;
    };
    unsigned int flags;
};

int main() {
    printf("%d\n", OOO);

    struct Rectangle r1  = {0, 0, 10, 20};
    printf("%d\n", get_perimeter(r1));

    union Player p1;
    scanf("%x", &p1.flags);

    if(p1.play) printf("Music is playing\n");
    else printf("Music isn't playing\n");

    if(p1.pause) printf("Music is paused\n");
    else printf("Music isn't paused\n");

    if(p1.record) printf("Player is recording\n");
    else printf("Player isn't recording\n");
}
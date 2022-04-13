#include <stdio.h>

int main() {
    int radius;
    float flaecheninhalt;
    printf("Bitte gib den Radius ein: ");
    scanf("%d", &radius);
    flaecheninhalt = 3.14 * (radius * radius);

    printf("%f", flaecheninhalt);
}

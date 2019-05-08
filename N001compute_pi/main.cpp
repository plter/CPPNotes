#include <iostream>

int main() {

    int64_t count = 100000;
    double part = 1.0 / count;
    double inside = 0;
    double x, y;

    for (int64_t i = 1; i <= count; ++i) {
        for (int64_t j = 1; j <= count; ++j) {
            x = part * i;
            y = part * j;
            if (x * x + y * y <= 1) {
                inside++;
            }
        }
    }

    double pi = inside / (count * count) * 4;

    printf("%f\n", pi);
    return 0;
}
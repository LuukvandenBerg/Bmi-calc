#include <stdio.h>
#include <math.h>

int calc(float gewicht, float length);

int main(bmi)
{
    float gewicht;
    float length;
    char naam[10];

    printf("Wat is je naam\n");
    scanf("%s", &naam);
    printf("Geef je gewicht\n");
    scanf("%f", &gewicht);
    printf("Geef je lengte\n");
    scanf("%f", &length);
    printf("uw gewicht is %f en uw lengte is %f\n", roundf(gewicht * 100) / 100, roundf(length * 100) / 100);
    printf("Hallo %s\n", naam);
    calc(gewicht, length);
}

int calc(float gewicht, float length)
{
    float bmi = gewicht / (length * length);
    printf("Uw bmi is %f\n", roundf(bmi * 100) / 100);

    if(bmi<=18.5) {
        printf("U heeft ondergewicht");
    }

    if(bmi>18.5 && bmi<24.9) {
        printf("Uw heeft een normaal gewicht");
    }

    if(bmi>24.9) {
        printf("U heeft overgewicht");
    }
}

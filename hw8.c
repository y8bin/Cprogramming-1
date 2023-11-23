#include <stdio.h>

int main(void)
{
#include <stdio.h>

    double pow(double a, double b);
    double sqrt(double x);
    double calculate_standard_deviation(double numbers[], int n);

    int main() {
        double numbers[5];

        printf("Enter 5 real numbers separated by space: ");
        for (int i = 0; i < 5; ++i) {
            scanf("%lf", &numbers[i]);
        }

        double std_deviation_result = calculate_standard_deviation(numbers, 5);

        printf("Standard Deviation = %.3f\n", std_deviation_result);

        return 0;
    }

    double pow(double a, double b) {
        double result = 1.0;
        for (int i = 0; i < b; ++i) {
            result *= a;
        }
        return result;
    }

    double sqrt(double x) {
        double guess = 1.0;
        double epsilon = 0.000001;

        while (1) {
            double new_guess = 0.5 * (guess + x / guess);
            if ((new_guess - guess) < epsilon && (guess - new_guess) < epsilon) {
                return new_guess;
            }
            guess = new_guess;
        }
    }

    double calculate_standard_deviation(double numbers[], int n) {
        double mean = 0.0, variance = 0.0, std_deviation = 0.0;

        for (int i = 0; i < n; ++i) {
            mean += numbers[i];
        }
        mean /= n;

        for (int i = 0; i < n; ++i) {
            variance += my_pow(numbers[i] - mean, 2);
        }
        variance /= n;

        std_deviation = my_sqrt(variance);

        return std_deviation;
    }

}
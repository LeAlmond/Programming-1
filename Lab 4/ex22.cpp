#include <stdio.h>

int main()
{
        int r1 = 0, r2  = 0, r3 = 0, r4 = 0, count = 0;
        float score;

        while (count < 8) {
          printf("%s","Enter first Score ");
          scanf("%f",&score );
                if (score > 45) {
                        if (score > 49.50) {
                                if (score < 59.99) {
                                        r2 = r2 + 1;
                                }
                                else {
                                        if (score > 60){
                                                if (score < 78){
                                                        r3 = r3 + 1;
                                                }
                                                if (score > 90) {
                                                        r4 = r4 + 1;
                                                }
                                        }
                                }
                        }
                }
                else{
                        r1 = r1 + 1;
                }
                count++;
        }

        printf("Scores in Range 1 %i, Scores in Range 2 %i, Scores in Range 3 %i, Scores in Range 4 %i", r1, r2, r3, r4);

        return 0;
}

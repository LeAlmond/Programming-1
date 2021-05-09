#include <stdio.h>


float IntAvg(int *v1);

int main() {



        return 0;
}

float IntAvg(int *arrayPtr, int *sizePtr){

        int i,size;
        float sum;
        size = *sizePtr;

        for (i = 0; i < *sizePtr; i++) {

                sum += *arrayPtr;
                arrayPtr++;
        }

        sum = sum/size;

        return sum;
}

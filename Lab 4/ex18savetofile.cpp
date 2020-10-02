#include <stdio.h>

int main()
{
        int num = 0, cnt = 0;
        FILE *word;

        word = fopen ("E:\\Programming\\C++\\Lab 4\\word.txt","a");

        printf("\nEnter a number ");
        scanf("%d",&num);
        cnt++;

        while (num != -1 && cnt < 7)
        {
                printf("\nEnter a number ");
                scanf("%d",&num);
                cnt++;
        }

        fprintf(word, "A total of %d numbers were entered\n",cnt);
        printf("A total of %d numbers were entered\n",cnt);

        return 0;
}

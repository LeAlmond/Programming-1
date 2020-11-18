#include <stdio.h>
#include <string.h>

int main()
{
        int cnt = 1;
        char cpp[] = ".cpp";
        char fn[] = "E:\\Programming\\C++\\Lab 4\\program.txt";
        char num[2];
        char ch;
        FILE *word, *program;

        word = fopen (fn,"a");

        while (cnt < 45)
        {
                char prog[40] = "E:\\Programming\\C++\\Lab 4\\ex";
                sprintf(num, "%d", cnt);
                strncat(num, cpp, 6);
                strncat(prog, num, 6);
                program = fopen (prog,"r");

                ch = fgetc(program);
                printf("%s\n",prog);

                while (ch != EOF)
                {
                        fputc(ch, word);
                        ch = fgetc(program);
                }
                fclose(program);
                cnt++;

        }

        return 0;
}

#include <unistd.h>
int main(int ac ,char **argv)
{
    int i;
    int j;

    i = ac -1;
    while(i >=1)
    {
        j = 0;
        while(argv[i][j])
            j++;
        write(1, argv[i], j);
        write(1, "\n", 1);
        i--;

    }
     return (0);
}
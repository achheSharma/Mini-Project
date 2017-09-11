#include<stdio.h>
#include<time.h>

int main()
{
    FILE *filer, *filew;
    filew = fopen("GB_Copy.txt", "w");
    int j;
    char line[50];
    clock_t start, end;
    double cpu_time_used;
    start = clock();
    for(j=0;j<5;j++)
    {
        filer = fopen("1GB.txt", "r");
        while(!feof(filer))
        {
            fscanf(filer,"%s",line);
            fprintf(filew,"%s\n",line);
        }
        fclose(filer);
        end = clock();
        cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
        printf("%f\n",cpu_time_used);
    }
    fclose(filew);
    return 0;
}
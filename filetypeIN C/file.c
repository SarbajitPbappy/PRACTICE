#include<stdio.h>
int main()
{
    FILE *inputFile;
    FILE *outputFile;
    FILE* log= fopen("log.txt", "a");//keeping history
    fprintf(log,"NEW FILE SYSTEM IN C 2\n");
    inputFile=fopen("input.txt","r");//r means read input file.
    if(inputFile==NULL)
    {
        printf("Input file  not found");
        return 0;
    }
    outputFile=fopen("output.txt","w");//w means write output file
    int n;
    fscanf(inputFile,"%d",&n);
    int sum = 0;
    // while(1)
    // {
    //     char ch = fgetc(inputFile);//for getting input
    //     if(ch==EOF) break;
    //     // printf("%c", ch);
    //     fputc(ch,outputFile);
    // }
    // int n;
    // scanf("%d", &n);
    // int sum=0;
    for(int i=1;i<=n;i++){
        int a;
        fscanf(inputFile,"%d", &a);
        sum += a;
    }
    fprintf(outputFile,"%d\n",sum);
    fclose(outputFile);//file close
}
#include<stdio.h>
int main(){
    FILE *inputFile;
    FILE *outputFile;
    inputFile=fopen("input.txt","r");
    outputFile=fopen("output.txt","w");
    int n;
    fscanf(inputFile,"%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        fscanf(inputFile,"%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        fprintf(outputFile, "%d ", a[i]);
    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
#include <stdio.h>
#include <math.h>

int main(){
    float distMin = 10000000, a, b, c, d, x, y, z, w, dist;
    int classe, classePred, classeR, acerto = 0;
    FILE *arquivoTeste = fopen("iristest.txt","r");
    FILE *arquivoTreino = fopen("IrisTreino.txt","r");

    while(!feof(arquivoTeste)){
        
        fscanf(arquivoTeste,"%f,%f,%f,%f,%d",&a,&b,&c,&d,&classeR);
        distMin = 10000000;

        while(!feof(arquivoTreino)){
            fscanf(arquivoTreino,"%f,%f,%f,%f,%d",&x,&y,&z,&w,&classe);
                dist = sqrt((a-x)*(a-x) + (b-y)*(b-y) + (c-z)*(c-z) + (d-w)*(d-w));
                if(dist<distMin)
                {
                    distMin = dist;
                    classePred = classe;
                    
                    if(classePred == classeR){
                           acerto++;
                         }
                }
        }
    }
    fclose(arquivoTeste);
    
    printf("%d", acerto);
    
    
    return 0;
}
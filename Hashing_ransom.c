#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int m;
    int n;
    scanf("%d %d",&m,&n);
    char* *magazine = malloc(sizeof(char*) * m);
    for(int magazine_i = 0; magazine_i < m; magazine_i++){
       magazine[magazine_i] = (char *)malloc(6 * sizeof(char));
       scanf("%s",magazine[magazine_i]);
    }
    char* *ransom = malloc(sizeof(char*) * n);
    if (m==0 && n>0) {
        printf("No\n");
        return 0;
    }

    for(int ransom_i = 0; ransom_i < n; ransom_i++){
        ransom[ransom_i] = (char *)malloc(6 * sizeof(char));
        scanf("%s",ransom[ransom_i]);
        int magazine_i;
        for(magazine_i = 0; magazine_i < m; magazine_i++){
            if(strcmp(magazine[magazine_i], ransom[ransom_i])==0) {
                magazine[magazine_i] = "";
                break;
            }
        }
        if(magazine_i >= m) {
          printf("No\n");
          return 0;
        }
    }

    printf("Yes\n");

    return 0;
}

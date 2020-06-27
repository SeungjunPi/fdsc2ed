#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


#define MAX_COL 100

#define MALLOC(p,s) \
	if (!((p) = malloc(s))) {\
		fprintf(stderr, "Insufficient memory"); \
		exit(EXIT_FAILURE);\
	}

#define CALLOC(p,n,s) \
    if (!((p) = calloc(n,s))) {\
        fprintf(stderr, "Insufficient memory"); \
        exit(EXIT_FAILURE);\
    }

#define REALLOC(p,s) \
    if (!((p) = realloc(p,s))) {\
        fprintf(stderr, "Insufficient meomory");\
        exit(EXIT_FAILURE);\
    }

#define SWAP(x,y,t) ((t) = (x), (x) = (y), (y) = (t))






// typedef struct {
//     int col;
//     int row;
//     int value;
// } sparse_terms;

// int** make2dArray(int rows, int cols)
// {
// 	int **x, i;
//     MALLOC(x, rows * sizeof(*x));
//     for (i = 0; i < rows; i++)
//     {
//         MALLOC(x[i], cols * sizeof(**x));
//     }
//     return x;
// }

// void mtrx_sps_fastTranspose(sparse_terms a[], sparse_terms b[])
// {
//     int rowTerms[MAX_COL], startingPos[MAX_COL];
//     int numTerms = a[0].value;
//     int i, j;

//     b[0].row = a[0].col;
//     b[0].col = a[0].row;
//     b[0].value = a[0].value;


//     if (numTerms > 0)
//     {
//         for (i = 0; i < a[0].col; i++)
//         {
//             rowTerms[i] = 0;
//         }
//         for (i = 1; i <= numTerms; i++)
//         {
//             rowTerms[a[i].col]++;
//         }
//         startingPos[0] = 1;
//         for (i = 1; i < a[0].col; i++)
//         {
//             startingPos[i] = startingPos[i - 1] + rowTerms[i - 1];
//         }

//         for (i = 1; i <= numTerms; i++)
//         {

//             j = startingPos[a[i].col]++;
//             b[j].col = a[i].row;
//             b[j].row = a[i].col;
//             b[j].value = a[i].value;
//         }    
//     }
// }

// void ptr_mtrxSps(sparse_terms a[])
// {
//     int i;
//     for (i = 0; i <= a[0].value; i++)
//     {
//         fprintf(stdout,"%d %d %d \n", a[i].row, a[i].col, a[i].value);
//         // printf("%d %d %d \n ", a[i].row, a[i].col, a[i].value);
//     }

//     printf("\n");
// }

// int pmatch(char *string, char *pat){
//     /* Knuth, Morris, Pratt */
//     int i = 0, j = 0;
//     int lenS = strlen(string);
//     int lenP = strlen(pat);

//     int *failure;
//     MALLOC(failure, sizeof(char) * lenP);
//     fail(pat, failure);

//     while ((i < lenS) && (j < lenP))
//     {
//         if (string[i] == pat[j])
//         {
//             i++; j++;
//         }
//         else if (j == 0)
//         {
//             i++;
//         }
//         else
//         {
//             j = failure[j - 1] + 1;
//         }
//         return ( (j == lenP) ? (i - lenP) : -1);
//     }
// }

// void fail(char pat[], char failure[]){
//     int i, j;
//     int length = strlen(pat);
//     failure[0] = -1;
//     for (j = 1; j < length; j++)
//     {
//         i = failure[j - 1];
//         while ((pat[j] != pat[i + 1]) && (i >= 0))
//         {
//             i = failure[i];
//         }
//         if (pat[j] == pat[i + 1])
//         {
//             failure[j] = i + 1;
//         }
//         else
//         {
//             failure[j] = -1;
//         }
//     }
// }

typedef struct Node* nodePtr;
typedef struct Node
{
    char data[4];
    nodePtr link;
} Node;


int main(void)
{


    nodePtr a, b;
    MALLOC(a, sizeof(*a));
    MALLOC(b, sizeof(*b));

    strcpy(a->data, "BAT");
    a->link = b;

    strcpy(b->data, "CAT");
    b->link = NULL;

    fprintf(stdout, "%s", a->data);

    return 0;
}



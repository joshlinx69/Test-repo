#include <stdio.h>

int addition (int a, int b);
int subtraction (int a, int b);
int product (int a, int b);
int int_division (int a, int b);
void print_array (int arr[], int n);

int main() {
    int *ptr, c;
    int mat[3][3]= {{1, 0, 3},
                    {0, 5, 5},
                    {2, 1, 8}};
    ptr = &mat[2][2];
    printf("The value pointed by ptr is: %d\n", *ptr);
    printf("%s\n", mat[0] == &(mat[0][0])? "True":"False");
    return 0;
}

int addition (int a, int b) {
    return a+b;
}

int subtraction (int a, int b) {
    return a-b;
}

int product (int a, int b) {
    return a*b;
}

int int_division (int a, int b) {
    if (b==0) {
        printf("Error: Cannot divide by zero.\n");
        return -1;
    }
    return a/b;
}

void print_1Darray (int arr[], int n) {
    int i = 0;
    while (i<n) {
        printf("%d ", arr[i]);
        i++;
    }
    printf("Finished\n");
}
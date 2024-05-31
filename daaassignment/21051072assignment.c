#include <stdio.h>
#include <stdlib.h>

void mergeArrays(int arr1[], int arr2[], int arr3[], int arr4[], int n1, int n2, int n3, int n4) {
    int i = 0, j = 0, k = 0, l = 0;
    
    while (i < n1 && j < n2 && k < n3 && l < n4) {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k] && arr3[k] == arr4[l]) {
            printf("%d ", arr1[i]);
            i++; j++; k++; l++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr2[j] < arr3[k]) {
            j++;
        } else if (arr3[k] < arr4[l]) {
            k++;
        } else {
            l++;
        }
    }
}

int main() {
    int p1[100], p2[100], p3[100], p4[100];
    int n1, n2, n3, n4;

    FILE *panel1 = fopen("panel1.txt", "r");
    FILE *panel2 = fopen("panel2.txt", "r");
    FILE *panel3 = fopen("panel3.txt", "r");
    FILE *panel4 = fopen("panel4.txt", "r");

    n1 = n2 = n3 = n4 = 0;
    while (fscanf(panel1, "%d", &p1[n1]) == 1) n1++;
    while (fscanf(panel2, "%d", &p2[n2]) == 1) n2++;
    while (fscanf(panel3, "%d", &p3[n3]) == 1) n3++;
    while (fscanf(panel4, "%d", &p4[n4]) == 1) n4++;

    fclose(panel1);
    fclose(panel2);
    fclose(panel3);
    fclose(panel4);

    for (int i = 0; i < n1 - 1; i++) {
        for (int j = 0; j < n1 - i - 1; j++) {
            if (p1[j] > p1[j + 1]) {
                int temp = p1[j];
                p1[j] = p1[j + 1];
                p1[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n2 - 1; i++) {
        for (int j = 0; j < n2 - i - 1; j++) {
            if (p2[j] > p2[j + 1]) {
                int temp = p2[j];
                p2[j] = p2[j + 1];
                p2[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n3 - 1; i++) {
        for (int j = 0; j < n3 - i - 1; j++) {
            if (p3[j] > p3[j + 1]) {
                int temp = p3[j];
                p3[j] = p3[j + 1];
                p3[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n4 - 1; i++) {
        for (int j = 0; j < n4 - i - 1; j++) {
            if (p4[j] > p4[j + 1]) {
                int temp = p4[j];
                p4[j] = p4[j + 1];
                p4[j + 1] = temp;
            }
        }
    }

    printf("Selected students: ");
    mergeArrays(p1, p2, p3, p4, n1, n2, n3, n4);

    return 0;
}
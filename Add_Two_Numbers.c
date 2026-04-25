/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include <stdlib.h>
#include <math.h>

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int size1 = 0;
    int size2 = 0;

    int *arr1 = (int*)malloc(sizeof(int));
    int *arr2 = (int*)malloc(sizeof(int));

    int i = 0;

    // -------- l1 to array --------
    while (l1 != NULL) {
        arr1[i] = l1->val;
        i++;

        size1++;
        arr1 = realloc(arr1, (size1 + 1) * sizeof(int));

        l1 = l1->next;
    }

    // -------- l2 to array --------
    i = 0;
    while (l2 != NULL) {
        arr2[i] = l2->val;
        i++;

        size2++;
        arr2 = realloc(arr2, (size2 + 1) * sizeof(int));

        l2 = l2->next;
    }

    // -------- convert arr1 to number --------
    int val1 = 0;
    for (int j = 0; j < size1; j++) {
        val1 += arr1[j] * pow(10, j);
    }

    // -------- convert arr2 to number --------
    int val2 = 0;
    for (int j = 0; j < size2; j++) {
        val2 += arr2[j] * pow(10, j);
    }

    int res = val1 + val2;

    // -------- build result linked list --------
    struct ListNode* list = NULL;
    struct ListNode* tail = NULL;

    if (res == 0) {
        list = (struct ListNode*)malloc(sizeof(struct ListNode));
        list->val = 0;
        list->next = NULL;
        return list;
    }

    while (res != 0) {
        struct ListNode* newNode =
            (struct ListNode*)malloc(sizeof(struct ListNode));

        newNode->val = res % 10;
        newNode->next = NULL;

        if (list == NULL) {
            list = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }

        res = res / 10;
    }

    return list;
}

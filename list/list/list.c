#include "list.h"
#include <stdlib.h>

typedef struct ListElement {
	int value;
	ListElement* next;
} ListElement;

typedef struct List {
	ListElement* head;
};

List* createList() {
	return (List*)calloc(1, sizeof(List));
}


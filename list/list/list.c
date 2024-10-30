#include "list.h"
#include <stdlib.h>
#include <stdbool.h>

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

Value getValue(List* list, Position position) {
	if (position->next == NULL) {
		*errorCode = 1;
		return 0;
	}
	return position->next->value;
}

bool isLast(List* list, Position position) {
	return position->next == NULL;
}

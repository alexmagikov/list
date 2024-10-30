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
	List* list = malloc(sizeof(List));
	ListElement* head = calloc(1, sizeof(ListElement));
	list->head = head;
	return list;
}

Position first(List* list) {
	return list->head;
}

void add(List* list, Position position, Value value) {
	
}

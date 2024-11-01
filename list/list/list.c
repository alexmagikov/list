#include "list.h"
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

typedef struct ListElement {
	Value value;
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
	ListElement* element = malloc(sizeof(ListElement));
	element->value = value;
	element->next = position->next;
	position->next = element;
}

Value getValue(List* list, Position position) {
	assert(position->next == NULL);
	return position->next->value;
}

bool isLast(List* list, Position position) {
	return position->next == NULL;
}

bool isValid(List* list, Position position) {
	return position != NULL;
}

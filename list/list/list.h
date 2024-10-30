#pragma once

typedef struct List List;

typedef struct ListElement ListElement;

typedef ListElement* Position;

typedef int Value;

List* createList(void);

void add(List* list, Position position, Value value);

Value getValue(List* list, Position position);

void pop(List* list, Position position);
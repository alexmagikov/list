#pragma once

typedef struct List List;

typedef struct ListElement ListElement;

typedef ListElement* Position;

typedef int Value;

List* createList(void);

void add(List* list, Position position, Value value);

Value getValue(List* list, Position position);

void setValue(List* list, Position position);

void delete(List* list, Position position);

Position first(List* list);

Position next(Position position);


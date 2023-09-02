# Structures in C

Structures in the C programming language are used to group together related variables of different data types under a single name. This allows you to create complex data types to represent real-world entities more effectively. Below, we'll cover the key concepts and usage of structures in C.

## Concept of Structure

- A structure is a user-defined data type in C.
- It allows you to group variables of different data types under one name.
- Structures are used to represent records or objects with multiple attributes.

## Declaring a Structure

To declare a structure, use the `struct` keyword followed by the structure name. Inside the structure definition, list the member variables along with their data types.

```c
struct Person {
    char name[50];
    int age;
    float height;
};
```

## Accessing Structure Members

You can access the members of a structure using the dot `.` operator.

```c
struct Person person1;
strcpy(person1.name, "John");
person1.age = 30;
person1.height = 6.2;
```

## Array of Structures

You can create arrays of structures to store multiple records of the same type.

```c
struct Person people[3];
people[0].age = 25;
people[1].age = 30;
people[2].age = 35;
```

## Pointer to a Structure

Declare pointers to structures in the same way as pointers to other data types.

```c
struct Person *personPtr;
personPtr = &person1;
printf("Name: %s\n", personPtr->name);
```

## Passing Structures to Functions

You can pass structures to functions by either passing the structure directly or passing a pointer to the structure.

### Passing the Structure Directly

```c
void printPerson(struct Person p) {
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Height: %.2f\n", p.height);
}

void main() {
    struct Person person1;
    // Initialize person1
    printPerson(person1);
}
```

### Passing a Pointer to the Structure

```c
void modifyPerson(struct Person *p) {
    p->age = 40;
}

void main() {
    struct Person person1;
    // Initialize person1
    modifyPerson(&person1);
}
```

These are the fundamental concepts and usage patterns of structures in C, essential for creating organized and complex data structures in C programs.
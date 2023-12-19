Structures in c
---

- comparisons `(c==b)` doesn't work for structures 
```c
# include <stdio.h>
# include <math.h>
struct Box{
    int width, height, length;
}

int isEqual(struct Box A, struct Box B){
    if (A.width == B.width && A.length == B.length && A.height == B.height){
        return 1;
    } else {
        return 0;
    }
}
```

- you can copy all elements of two structs (C = A)
- when you pass a struct to a function, its value is copied (not passed by reference)




typedef
---


Syntax:
```c
typedef int dollars;
typedef unsigned char Byte;

typedef char Names[40];
typedef double Vector[4];
typedef double Mat4x4[4][4];

```

Syntax (for structures):
```c
typedef struct Name {

} typeName
```

pointers
---



Syntax:
```c
// you can define a pointer to the struct itself (self referential)
typedef struct emp{
    struct emp *s;
}

```

- `sizeof (struct ...)` gives you the size occupied by the struct (round to the multiple of 4)


```c
typedef struct {...} Box;
Box b;
Box *c; // pointer to box
double w;
b.width = 5; b.height =7; b.length = 3;
c= &b; // copy the pointer location
w = c -> wdith; // c -> width === (*c).width
```


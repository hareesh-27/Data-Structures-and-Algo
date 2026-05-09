````markdown id="v8q2lm"
**What is Structure?**  

A structure is the user-defined data type in C++. Structure creates the data type which can hold the multiple data types.

---

## Declaring Structure Variables

Structure variables can be declared in two different ways :

### **Declared while declaring the structure**

```c
struct point
{
    int x;
    int y;
} p1, p2;
```

In the above struct declaration, the point is the name of the structure. p1,p2 are the variables of the type struct point.  
Here variables p1, and p2 are declared while structure declaration itself.

---

### **A declaration like Basic Data types:**

```c
struct point
{
    int x;
    int y;
};

int main()
{
    struct point p1, p2;
}
```

In the above Code, p1, and p2 are the struct variables. They are not declared while structure declaration. They are declared after structure declaration.

---

## **Padding in structures**

Extra unused bytes inserted by the compiler between (or after) structure members to ensure proper memory alignment for efficient access.

---

## **The diff bw structure and union is the memory**

- In structure each members have seperate memory  
- while in union its a shared memory. So oveeride is possible

<img width="1052" height="592" alt="image" src="https://github.com/user-attachments/assets/8c207d56-45c6-4fbc-b6d5-dcbadf08832c" />

---

## **Union Override Example**

```c
#include <stdio.h>

union Data
{
    int i;
    float f;
};

int main()
{
    union Data d;

    d.i = 10;

    printf("After storing int:\n");
    printf("d.i = %d\n", d.i);

    d.f = 5.5;

    printf("\nAfter storing float:\n");
    printf("d.f = %f\n", d.f);

    // Reading int after float overwrote memory
    printf("d.i = %d\n", d.i);

    return 0;
}
```
````

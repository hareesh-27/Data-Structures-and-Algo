## Key Points from Include (.h) and Source (.c) Files

---

### 1. `#ifndef` and `#endif`

If multiple files include the same header (directly or indirectly),  
the header may get included multiple times during preprocessing,  
causing **redefinition errors**.

👉 This is why **include guards** are required.

<img width="1615" height="343" alt="image" src="https://github.com/user-attachments/assets/88f840f8-0f28-48f8-9bdc-098d91be56e6" />

---

### 2. Base Address Macros

```c
#define GPIOA_BASEADDR (AHB1PERIPH_BASEADDR + 0x0000)
#define GPIOB_BASEADDR (AHB1PERIPH_BASEADDR + 0x0400)
```

These macros define the **actual memory addresses of GPIO peripherals**.

#### Why we need this

- GPIO hardware exists at **fixed memory locations**
- To access registers, we MUST know:
  - Where GPIOA is
  - Where GPIOB is

👉 These macros give the **base address** of each GPIO peripheral

---

### 3. GPIO Register Structure

```c
typedef struct
{
    volatile uint32_t MODER;
    volatile uint32_t OTYPER;
    volatile uint32_t OSPEEDR;
    volatile uint32_t PUPDR;
    volatile uint32_t IDR;
    volatile uint32_t ODR;
    volatile uint32_t BSRR;
    volatile uint32_t LCKR;
    volatile uint32_t AFRL;
    volatile uint32_t AFRH;
} GPIO_RegDef;
```

#### Why `typedef struct`?

- Avoid writing `struct` repeatedly  
- Makes code cleaner and more readable  

#### Why this structure?

- Represents **actual hardware register layout**
- Helps access registers using **pointer syntax**
- Ensures correct memory mapping

---

### 4. Converting Address → Structure Pointer

```c
#define GPIOA ((GPIO_RegDef*)GPIOA_BASEADDR)
#define GPIOB ((GPIO_RegDef*)GPIOB_BASEADDR)
#define GPIOC ((GPIO_RegDef*)GPIOC_BASEADDR)
```

👉 Now we can access registers like:

```c
GPIOA->MODER
```

instead of raw addresses.

---

### 5. Register Layout (Offsets)

```c
typedef struct
{
    uint32_t MODER;    // offset 0
    uint32_t OTYPER;   // offset 4
    uint32_t OSPEEDR;  // offset 8
    uint32_t PUPDR;    // offset 12
} GPIO_RegDef;
```

| Register  | Offset |
|----------|--------|
| MODER    | +0     |
| OTYPER   | +4     |
| OSPEEDR  | +8     |
| PUPDR    | +12    |

---

### 6. Pointer Mapping

```c
#define GPIOA ((GPIO_RegDef*)0x40020000)
```

#### Mapping Explanation

- GPIOA->MODER  
  = 0x40020000 + 0  
  = 0x40020000  

- GPIOA->OTYPER  
  = 0x40020000 + 4  
  = 0x40020004  

---

### 7. Key Takeaway

- Hardware registers are **memory-mapped**
- Structures define **register layout**
- Pointers map **base address → structured access**
- Offsets ensure **correct register access**

👉 This is the foundation of **embedded driver development**

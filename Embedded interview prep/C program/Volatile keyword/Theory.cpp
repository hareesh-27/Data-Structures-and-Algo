Volatile keyword tells the computer to check the value of a variable directly from the memory.
For ex: int x = 10; Without volatile, the data is stored in a register (present in CPU) for faster access. The computer does'nt check the value of x from the memory.
(The computer caches it).

With volatile int x = 10, the value is checked everytime from the memory because it may change.

In a normal program, the only thing that can change x is something like x = 20; But in Embedded systems, something external
like camera hardware/a sensor can change it. SInce the computers register doesnt know this, it keeps showing the wrong value.

volatile forces the CPU to fetch the value from the actual memory address every time, ensuring we always have the most recent data from the device.

int x = 0;
while (x == 0) { 
    // The compiler 'caches' x in a register.
    // It assumes x will always be 0 because nothing 
    // inside this loop changes it.
}

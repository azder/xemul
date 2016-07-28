#ifndef XEMUL_COMMANDS
#define XEMUL_COMMANDS

// Begin of data movement commands

int MOV(void* source, void* destination, uint8_t size)
{
    uint8_t currentByte;
    int8_t* sourcePointer = (int8_t*)source;
    int8_t* desinationPointer = (int8_t*)destination;

    for(currentByte = 0; currentByte < size; currentByte++) {
        *desinationPointer++ = *sourcePointer++;
    }

    return 0;
}

int PUSH(void* source)
{
    // TODO
}

int POP(void* destination)
{
    // TODO
}

// End of data movement commands

#endif //XEMUL_COMMANDS
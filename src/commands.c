#ifndef XEMUL_COMMANDS
#define XEMUL_COMMANDS

// Begin of data movement commands

void mov(void* source, void* destination, uint16_t size)
{
    uint16_t currentByte;
    int8_t* sourcePointer = (int8_t*)source;
    int8_t* desinationPointer = (int8_t*)destination;

    for(currentByte = 0; currentByte < size; currentByte++) {
        *desinationPointer++ = *sourcePointer++;
    }
}

void push(void* source)
{
    // TODO
}

void pop(void* destination)
{
    // TODO
}

// End of data movement commands

// Begin of arithmetic commands

void inc_int8(pint8_t destination)
{
    (*destination)++;
}

void dec_int8(pint8_t destination)
{
    (*destination)--;
}

int8_t add_int8(pint8_t src, pint8_t dest)
{
    int8_t src_val = *src;
    int8_t dest_val = *dest;
    int8_t res_val;

    bool overflow = !__builtin_add_overflow(src_val, dest_val, &res_val);
    set_rflags_arth(false, false, false, result, overflow);
    
    return res_val;
}
// End of arithmetic commands

#endif //XEMUL_COMMANDS

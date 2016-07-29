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

    return 0;
}

int push(void* source)
{
    // TODO
}

int pop(void* destination)
{
    // TODO
}

// End of data movement commands

// Begin of arithmetic commands

void inc_int8(pint8_t destination) {
    (*destination)++;
}
void inc_int16(pint16_t destination) {
    (*destination)++;
}
void inc_int32(pint32_t destination) {
    (*destination)++;
}
void inc_int64(pint64_t destination) {
    (*destination)++;
}
void inc_flt32(pflt32_t destination) {
    (*destination)++;
}
void inc_flt64(pflt64_t destination) {
    (*destination)++;
}
void inc_flt80(pflt80_t destination) {
    (*destination)++;
}
void inc_flt128(pflt128_t destination) {
    (*destination)++;
}

// End of arithmetic commands

#endif //XEMUL_COMMANDS
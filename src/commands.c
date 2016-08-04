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

void inc_int8(pint8_t destination)
{
    (*destination)++;
}
void inc_int16(pint16_t destination)
{
    (*destination)++;
}
void inc_int32(pint32_t destination)
{
    (*destination)++;
}
void inc_int64(pint64_t destination)
{
    (*destination)++;
}
void inc_flt32(pflt32_t destination)
{
    (*destination)++;
}
void inc_flt64(pflt64_t destination)
{
    (*destination)++;
}
void inc_flt80(pflt80_t destination)
{
    (*destination)++;
}
void inc_flt128(pflt128_t destination)
{
    (*destination)++;
}

void dec_int8(pint8_t destination)
{
    (*destination)--;
}
void dec_int16(pint16_t destination)
{
    (*destination)--;
}
void dec_int32(pint32_t destination)
{
    (*destination)--;
}
void dec_int64(pint64_t destination)
{
    (*destination)--;
}
void dec_flt32(pflt32_t destination)
{
    (*destination)--;
}
void dec_flt64(pflt64_t destination)
{
    (*destination)--;
}
void dec_flt80(pflt80_t destination)
{
    (*destination)--;
}
void dec_flt128(pflt128_t destination)
{
    (*destination)--;
}

int8_t add_int8(pint8_t source, pint8_t destination)
{
    return *(destination) + *(source);
}
int16_t add_int16(pint16_t source, pint16_t destination)
{
    return *(destination) + *(source);
}
int32_t add_int32(pint32_t source, pint32_t destination)
{
    return *(destination) + *(source);
}
int64_t add_int64(pint64_t source, pint64_t destination)
{
    return *(destination) + *(source);
}
flt32_t add_flt32(pflt32_t source, pflt32_t destination)
{
    return *(destination) + *(source);
}
flt64_t add_flt64(pflt64_t source, pflt64_t destination)
{
    return *(destination) + *(source);
}
flt80_t add_flt80(pflt80_t source, pflt80_t destination)
{
    return *(destination) + *(source);
}
flt128_t add_flt128(pflt128_t source, pflt128_t destination)
{
    return *(destination) + *(source);
}
// End of arithmetic commands

#endif //XEMUL_COMMANDS

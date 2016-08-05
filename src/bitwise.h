#pragma once
#define CHECK_BIT(var,pos) ((var >> pos) & 1)
#define SET_BIT(var,pos) (var |= 1 << pos);



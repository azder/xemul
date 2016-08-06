#pragma once
#define CHECK_BIT(var,pos) ((var >> pos) & 1)
#define SET_BIT(var,pos) (var |= 1 << pos);
#define UNSET_BIT(var,pos) if(CHECK_BIT(var, pos)) (var ^= 1 << pos);
#define MODIFY_BIT(var,pos,val) if(val) SET_BIT(var, pos) else UNSET_BIT(var,pos);

#include "bitwise.h"

#ifndef XEMUL_REGS_H
#define XEMUL_REGS_H

#include "types.h"

regs_t *regs_init(pregs_t pregs);

regs_t registers;

#define __CF__ CHECK_BIT(registers.rflags, 0)
#define __PF__ CHECK_BIT(registers.rflags, 2)
#define __AF__ CHECK_BIT(registers.rflags, 4);
#define __ZF__ CHECK_BIT(registers.rflags, 6)
#define __SF__ CHECK_BIT(registers.rflags, 7)
#define __TF__ CHECK_BIT(registers.rflags, 8)
#define __IF__ CHECK_BIT(registers.rflags, 9)
#define __DF__ CHECK_BIT(registers.rflags, 10)
#define __OF__ CHECK_BIT(registers.rflags, 11)
#define __IOPL_LO__ CHECK_BIT(registers.rflags, 12)
#define __IOPL_HI__ CHECK_BIT(registers.rflags, 13)
#define __NT__ CHECK_BIT(registers.rflags, 14)

#define __RF__ CHECK_BIT(registers.rflags, 16)
#define __VM__ CHECK_BIT(registers.rflags, 17)
#define __AC__ CHECK_BIT(registers.rflags, 18)
#define __VIF__ CHECK_BIT(registers.rflags, 19)
#define __VIP__ CHECK_BIT(registers.rflags, 20)
#define __ID__ CHECK_BIT(registers.rflags, 21)


#define __RFLAGS_CF__ 0
#define __RFLAGS_PF__ 2
#define __RFLAGS_AF__ 4
#define __RFLAGS_ZF__ 6
#define __RFLAGS_SF__ 7
#define __RFLAGS_TF__ 8
#define __RFLAGS_IF__ 9
#define __RFLAGS_DF__ 10
#define __RFLAGS_OF__ 11
#define __RFLAGS_IOPL__ 12
#define __RFLAGS_NT__ 14
#define __RFLAGS_RF__ 16
#define __RFLAGS_VM__ 17
#define __RFLAGS_AC__ 18
#define __RFLAGS_VIF__ 19
#define __RFLAGS_VIP__ 20
#define __RFLAGS_ID__ 21

#define __RFLAGS_SET_CF__(flag) SET_BIT(flag, __RFLAGS_CF__)
#define __RFLAGS_SET_PF__(flag) SET_BIT(flag, __RFLAGS_PF__)
#define __RFLAGS_SET_AF__(flag) SET_BIT(flag, __RFLAGS_AF__)
#define __RFLAGS_SET_ZF__(flag) SET_BIT(flag, __RFLAGS_ZF__)
#define __RFLAGS_SET_SF__(flag) SET_BIT(flag, __RFLAGS_SF__)
#define __RFLAGS_SET_TF__(flag) SET_BIT(flag, __RFLAGS_TF__)
#define __RFLAGS_SET_IF__(flag) SET_BIT(flag, __RFLAGS_IF__)
#define __RFLAGS_SET_DF__(flag) SET_BIT(flag, __RFLAGS_DF__)
#define __RFLAGS_SET_OF__(flag) SET_BIT(flag, __RFLAGS_OF__)
#define __RFLAGS_SET_IOPL_HI__(flag) SET_BIT(flag, __RFLAGS_IOPL__)
#define __RFLAGS_SET_IOPL_LO__(flag) SET_BIT(flag, __RFLAGS_IOPL__ + 1)
#define __RFLAGS_SET_NT__(flag) SET_BIT(flag, __RFLAGS_NT__)
#define __RFLAGS_SET_RF__(flag) SET_BIT(flag, __RFLAGS_RF__)
#define __RFLAGS_SET_VM__(flag) SET_BIT(flag, __RFLAGS_VM__)
#define __RFLAGS_SET_AC__(flag) SET_BIT(flag, __RFLAGS_AC__)
#define __RFLAGS_SET_VIF__(flag) SET_BIT(flag, __RFLAGS_VIF__)
#define __RFLAGS_SRT_VIP__(flag) SET_BIT(flag, __RFLAGS_VIP__)
#define __RFLAGS_SET_ID__(flag) SET_BIT(flag, __RFLAGS_ID__)

#endif

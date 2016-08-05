//
// Created by azder on 10/07/2016.
//

#include "regs.h"
#include <string.h>

regs_t *regs_init(regs_t *pregs)
{

    // regs->rip;
    // regs->reflags;

    pint64_t rax                                        = &pregs->rint.rax;
    pregs->ri8l.al                                      = ((pint8_t) rax);
    pregs->ri8h.ah                                      = &((pint8_t) rax)[1];
    pregs->ri16.ax                                      = ((pint16_t) rax);
    pregs->ri32.eax                                     = ((pint32_t) rax);

    pint64_t rcx                                        = &pregs->rint.rcx;
    pregs->ri8l.cl                                      = ((pint8_t) rcx);
    pregs->ri8h.ch                                      = &((pint8_t) rcx)[1];
    pregs->ri16.cx                                      = ((pint16_t) rcx);
    pregs->ri32.ecx                                     = ((pint32_t) rcx);

    pint64_t rdx                                        = &pregs->rint.rdx;
    pregs->ri8l.dl                                      = ((pint8_t) rdx);
    pregs->ri8h.dh                                      = &((pint8_t) rdx)[1];
    pregs->ri16.dx                                      = ((pint16_t) rdx);
    pregs->ri32.edx                                     = ((pint32_t) rdx);

    pint64_t rbx                                        = &pregs->rint.rbx;
    pregs->ri8l.bl                                      = ((pint8_t) rbx);
    pregs->ri8h.bh                                      = &((pint8_t) rbx)[1];
    pregs->ri16.bx                                      = ((pint16_t) rbx);
    pregs->ri32.ebx                                     = ((pint32_t) rbx);

    pint64_t rsi                                        = &pregs->rint.rsi;
    pregs->ri8l.sil                                     = ((pint8_t) rsi);
    pregs->ri8h.sih                                     = &((pint8_t) rsi)[1];
    pregs->ri16.si                                      = ((pint16_t) rsi);
    pregs->ri32.esi                                     = ((pint32_t) rsi);

    pint64_t rdi                                        = &pregs->rint.rdi;
    pregs->ri8l.dil                                     = ((pint8_t) rdi);
    pregs->ri8h.dih                                     = &((pint8_t) rdi)[1];
    pregs->ri16.di                                      = ((pint16_t) rdi);
    pregs->ri32.edi                                     = ((pint32_t) rdi);

    pint64_t rsp                                        = &pregs->rint.rsp;
    pregs->ri8l.spl                                     = ((pint8_t) rsp);
    pregs->ri8h.sph                                     = &((pint8_t) rsp)[1];
    pregs->ri16.sp                                      = ((pint16_t) rsp);
    pregs->ri32.esp                                     = ((pint32_t) rsp);

    pint64_t rbp                                        = &pregs->rint.rbp;
    pregs->ri8l.bpl                                     = ((pint8_t) rbp);
    pregs->ri8h.bph                                     = &((pint8_t) rbp)[1];
    pregs->ri16.bp                                      = ((pint16_t) rbp);
    pregs->ri32.ebp                                     = ((pint32_t) rbp);

    pint64_t r8                                         = &pregs->rint.r8;
    pregs->ri8l.r8b                                     = ((pint8_t) r8);
    pregs->ri16.r8w                                     = ((pint16_t) r8);
    pregs->ri32.r8d                                     = ((pint32_t) r8);

    pint64_t r9                                         = &pregs->rint.r9;
    pregs->ri8l.r9b                                     = ((pint8_t) r9);
    pregs->ri16.r9w                                     = ((pint16_t) r9);
    pregs->ri32.r9d                                     = ((pint32_t) r9);

    pint64_t r10                                        = &pregs->rint.r10;
    pregs->ri8l.r10b                                    = ((pint8_t) r10);
    pregs->ri16.r10w                                    = ((pint16_t) r10);
    pregs->ri32.r10d                                    = ((pint32_t) r10);

    pint64_t r11                                        = &pregs->rint.r11;
    pregs->ri8l.r11b                                    = ((pint8_t) r11);
    pregs->ri16.r11w                                    = ((pint16_t) r11);
    pregs->ri32.r11d                                    = ((pint32_t) r11);

    pint64_t r12                                        = &pregs->rint.r12;
    pregs->ri8l.r12b                                    = ((pint8_t) r12);
    pregs->ri16.r12w                                    = ((pint16_t) r12);
    pregs->ri32.r12d                                    = ((pint32_t) r12);

    pint64_t r13                                        = &pregs->rint.r13;
    pregs->ri8l.r13b                                    = ((pint8_t) r13);
    pregs->ri16.r13w                                    = ((pint16_t) r13);
    pregs->ri32.r13d                                    = ((pint32_t) r13);

    pint64_t r14                                        = &pregs->rint.r14;
    pregs->ri8l.r14b                                    = ((pint8_t) r14);
    pregs->ri16.r14w                                    = ((pint16_t) r14);
    pregs->ri32.r14d                                    = ((pint32_t) r14);

    pint64_t r15                                        = &pregs->rint.r15;
    pregs->ri8l.r15b                                    = ((pint8_t) r15);
    pregs->ri16.r15w                                    = ((pint16_t) r15);
    pregs->ri32.r15d                                    = ((pint32_t) r15);

    /* The RFLAGS register should be also initialized. */
    pregs->rflags                                       = 0B0100000000000000000001000000000000000000000000000000000000000000;
    
    pregs->rip                                          = 0;

    memset ( &pregs->rint, 0, sizeof ( pregs->rint ) );
    memset ( &pregs->rmmx, 0, sizeof ( pregs->rmmx ) );
    memset ( &pregs->rsse, 0, sizeof ( pregs->rsse ) );

    return pregs;
}
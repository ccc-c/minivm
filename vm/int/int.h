#pragma once

#include "../lib.h"
#include "../opcode.h"
#include "../gc.h"

typedef size_t vm_int_arg_t;

enum vm_int_op_t
{
  VM_INT_OP_EXIT,
  VM_INT_OP_PUTC,
  VM_INT_OP_MOV,
  VM_INT_OP_MOVC,
  VM_INT_OP_UADD,
  VM_INT_OP_USUB,
  VM_INT_OP_UMUL,
  VM_INT_OP_UDIV,
  VM_INT_OP_UMOD,
  VM_INT_OP_RET,
  VM_INT_OP_UBB,
  VM_INT_OP_UBEQ,
  VM_INT_OP_UBLT,
  VM_INT_OP_CALL0,
  VM_INT_OP_CALL1,
  VM_INT_OP_CALL2,
  VM_INT_OP_CALL3,
  VM_INT_OP_CALL4,
  VM_INT_OP_CALL5,
  VM_INT_OP_DCALL0,
  VM_INT_OP_DCALL1,
  VM_INT_OP_DCALL2,
  VM_INT_OP_DCALL3,
  VM_INT_OP_DCALL4,
  VM_INT_OP_DCALL5,
  VM_INT_OP_TCALL0,
  VM_INT_OP_TCALL1,
  VM_INT_OP_TCALL2,
  VM_INT_OP_TCALL3,
  VM_INT_OP_TCALL4,
  VM_INT_OP_TCALL5,
  VM_INT_OP_JUMP,
  VM_INT_OP_UBEQC,
  VM_INT_OP_UBLTC,
  VM_INT_OP_UCBLT,
  VM_INT_OP_UADDC,
  VM_INT_OP_USUBC,
  VM_INT_OP_UMULC,
  VM_INT_OP_UDIVC,
  VM_INT_OP_UMODC,
  VM_INT_OP_UCSUB,
  VM_INT_OP_UCDIV,
  VM_INT_OP_UCMOD,
  VM_INT_OP_RETC,
  VM_INT_OP_CONS,
  VM_INT_OP_CONSC,
  VM_INT_OP_CCONS,
  VM_INT_OP_CCONSC,
  VM_INT_OP_GETCAR,
  VM_INT_OP_GETCDR,
  VM_INT_OP_SETCAR,
  VM_INT_OP_SETCARC,
  VM_INT_OP_SETCDR,
  VM_INT_OP_SETCDRC,
  VM_INT_OP_FADD,
  VM_INT_OP_FADDC,
  VM_INT_OP_FSUB,
  VM_INT_OP_FSUBC,
  VM_INT_OP_FCSUB,
  VM_INT_OP_FMUL,
  VM_INT_OP_FMULC,
  VM_INT_OP_FDIV,
  VM_INT_OP_FDIVC,
  VM_INT_OP_FCDIV,
  VM_INT_OP_FMOD,
  VM_INT_OP_FMODC,
  VM_INT_OP_FCMOD,
  VM_INT_OP_FBB,
  VM_INT_OP_FBEQ,
  VM_INT_OP_FBLT,
  VM_INT_OP_FBEQC,
  VM_INT_OP_FBLTC,
  VM_INT_OP_FCBLT,
  VM_INT_OP_FTOU,
  VM_INT_OP_UTOF,
};

uint8_t *vm_int_comp(size_t nops, const vm_opcode_t *ops, uint8_t *jumps, vm_gc_t *gc, void **ptrs);
int vm_int_run(size_t nops, const vm_opcode_t *iops, vm_gc_t *gc);
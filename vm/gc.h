#pragma once
#include <vm/libc.h>
#include <vm/obj.h>
#include <vm/vm.h>
#if defined(VM_GC_THREADS)
#include <pthread.h>
#endif

struct vm_gc_t;
typedef struct vm_gc_t vm_gc_t;
typedef struct vm_gc_entry_t vm_gc_entry_t;

void vm_gc_start(vm_gc_t *out, vm_obj_t *base, vm_obj_t *end);

vm_obj_t vm_gc_new(vm_gc_t *gc, size_t len, vm_obj_t *values);
size_t vm_gc_sizeof(vm_gc_t *gc, uint64_t ptr);
vm_obj_t vm_gc_index(vm_gc_t *gc, uint64_t ptr, size_t index);

#define VM_GC_ENTRY_TYPE_PTR 0
#define VM_GC_ENTRY_TYPE_OBJ 1

struct vm_gc_entry_t
{
    union
    {
        struct
        {
            bool keep : 1;
            bool root : 1;
            size_t len : 14;
            uint64_t ptr : 48;
        };
        size_t xlen;
    };
    vm_obj_t obj;
};

_Static_assert(sizeof(vm_gc_entry_t) == 16, "bad size");

struct vm_gc_t
{
    vm_gc_entry_t *objs1;
    vm_gc_entry_t *objs2;
    vm_gc_entry_t *objs3;
    vm_obj_t *base;
    vm_obj_t *end;
    size_t max1;
    uint64_t last;
#if defined(VM_GC_THREADS)
    bool die;
    pthread_t thread;
#endif
};



```
(base) cccimac@cccimacdeiMac code % git clone https://github.com/FastVM/minivm --recursive
Cloning into 'minivm'...
remote: Enumerating objects: 11213, done.
remote: Counting objects: 100% (4589/4589), done.
remote: Compressing objects: 100% (1359/1359), done.
remote: Total 11213 (delta 3136), reused 4436 (delta 3125), pack-reused 6624 (from 1)
Receiving objects: 100% (11213/11213), 7.83 MiB | 1.92 MiB/s, done.
Resolving deltas: 100% (7440/7440), done.
Submodule 'vendor/bdwgc' (https://github.com/FastVM/minivm-bdwgc) registered for path 'vendor/bdwgc'
Submodule 'vendor/isocline' (https://github.com/fastvm/minivm-isocline) registered for path 'vendor/isocline'
Submodule 'vendor/raylib' (https://github.com/FastVM/minivm-raylib) registered for path 'vendor/raylib'
Submodule 'vendor/tree-sitter' (https://github.com/fastvm/minivm-tree-sitter) registered for path 'vendor/tree-sitter'
Cloning into '/Users/cccimac/Desktop/ccc/code/minivm/vendor/bdwgc'...
remote: Enumerating objects: 30007, done.        
remote: Counting objects: 100% (1/1), done.        
remote: Total 30007 (delta 0), reused 0 (delta 0), pack-reused 30006 (from 1)        
Receiving objects: 100% (30007/30007), 15.20 MiB | 2.12 MiB/s, done.
Resolving deltas: 100% (23578/23578), done.
Cloning into '/Users/cccimac/Desktop/ccc/code/minivm/vendor/isocline'...
remote: Enumerating objects: 3200, done.        
remote: Counting objects: 100% (87/87), done.        
remote: Compressing objects: 100% (33/33), done.        
remote: Total 3200 (delta 76), reused 59 (delta 54), pack-reused 3113 (from 1)        
Receiving objects: 100% (3200/3200), 3.20 MiB | 1.42 MiB/s, done.
Resolving deltas: 100% (2197/2197), done.
Cloning into '/Users/cccimac/Desktop/ccc/code/minivm/vendor/raylib'...
remote: Enumerating objects: 43938, done.        
remote: Total 43938 (delta 0), reused 0 (delta 0), pack-reused 43938 (from 1)        
Receiving objects: 100% (43938/43938), 386.21 MiB | 2.17 MiB/s, done.
Resolving deltas: 100% (32204/32204), done.
Cloning into '/Users/cccimac/Desktop/ccc/code/minivm/vendor/tree-sitter'...
remote: Enumerating objects: 42287, done.        
remote: Total 42287 (delta 0), reused 0 (delta 0), pack-reused 42287 (from 1)        
Receiving objects: 100% (42287/42287), 16.73 MiB | 2.13 MiB/s, done.
Resolving deltas: 100% (29709/29709), done.
Submodule path 'vendor/bdwgc': checked out '09fc015b78756cd114488fabe9be3d57ba53f444'
Submodule path 'vendor/isocline': checked out '096e145d2eab09b80375c1c508a8fee2e5c5e5ef'
Submodule path 'vendor/raylib': checked out 'b4fbdc028302f9a697f196e8d02a7dca28912f59'
Submodule path 'vendor/tree-sitter': checked out 'c070c92722c943d7eb6215dc1a97c833a30bc3e5'
(base) cccimac@cccimacdeiMac code % cd mini-vm
cd: no such file or directory: mini-vm
(base) cccimac@cccimacdeiMac code % cd minivm 
(base) cccimac@cccimacdeiMac minivm % ls
LICENSE         makefile        tool            web
README.md       res             vendor          web-raw
main            test            vm
(base) cccimac@cccimacdeiMac minivm % make -Bj OPT='-g'
make -Bj -f tool/core.mak bins OS=LINUX CC="cc" EXE= TEST_LUA=""
mkdir -p build/obj/main/
mkdir -p build/obj/vm/ast/
mkdir -p build/obj/vm/ast/
mkdir -p build/obj/vm/ast/
cc -c -g vm/ast/ast.c -o build/obj/vm/ast/ast.o    
cc -c -g vm/ast/build.c -o build/obj/vm/ast/build.o    
cc -c -g vm/ast/comp.c -o build/obj/vm/ast/comp.o    
cc -c -g main/minivm.c -o build/obj/main/minivm.o    
mkdir -p build/obj/vm/ast/
mkdir -p build/obj/vm/
cc -c -g vm/ast/print.c -o build/obj/vm/ast/print.o    
cc -c -g vm/lib.c -o build/obj/vm/lib.o    
mkdir -p build/obj/vm/
mkdir -p build/obj/vm/backend/
mkdir -p build/obj/vm/save/
cc -c -g vm/backend/backend.c -o build/obj/vm/backend/backend.o    
cc -c -g vm/save/io.c -o build/obj/vm/save/io.o    
cc -c -g vm/obj.c -o build/obj/vm/obj.o    
mkdir -p build/obj/vm/save/
mkdir -p build/obj/vm/save/
cc -c -g vm/save/write.c -o build/obj/vm/save/write.o    
cc -c -g vm/save/read.c -o build/obj/vm/save/read.o    
mkdir -p build/obj/vm/
mkdir -p build/obj/vm/
cc -c -g vm/canvas.c -o build/obj/vm/canvas.o    
cc -c -g vm/ir.c -o build/obj/vm/ir.o    
mkdir -p build/obj/vm/lua/parser/
mkdir -p build/obj/vm/lua/parser/
cc -c -g vm/lua/parser/parser.c -o build/obj/vm/lua/parser/parser.o    
cc -c -g vm/lua/parser/scan.c -o build/obj/vm/lua/parser/scan.o    
mkdir -p build/obj/vm/lua/
mkdir -p build/obj/vm/lua/
cc -c -g vm/lua/repl.c -o build/obj/vm/lua/repl.o    
cc -c -g vm/lua/ast.c -o build/obj/vm/lua/ast.o    
mkdir -p build/obj/vm/
mkdir -p build/obj/vm/
cc -c -g vm/io.c -o build/obj/vm/io.o    
cc -c -g vm/std.c -o build/obj/vm/std.o    
mkdir -p build/obj/vendor/bdwgc/
mkdir -p build/obj/vendor/bdwgc/
mkdir -p build/obj/vendor/bdwgc/
cc -c -g vendor/bdwgc/allchblk.c -o build/obj/vendor/bdwgc/allchblk.o    -DNO_EXECUTE_PERMISSION -Ivendor/bdwgc/include -Ivendor/tree-sitter/lib/include -Ivendor/tree-sitter/lib/src 
cc -c -g vendor/bdwgc/alloc.c -o build/obj/vendor/bdwgc/alloc.o    -DNO_EXECUTE_PERMISSION -Ivendor/bdwgc/include -Ivendor/tree-sitter/lib/include -Ivendor/tree-sitter/lib/src 
cc -c -g vendor/bdwgc/blacklst.c -o build/obj/vendor/bdwgc/blacklst.o    -DNO_EXECUTE_PERMISSION -Ivendor/bdwgc/include -Ivendor/tree-sitter/lib/include -Ivendor/tree-sitter/lib/src 
mkdir -p build/obj/vendor/bdwgc/
mkdir -p build/obj/vendor/bdwgc/
cc -c -g vendor/bdwgc/dbg_mlc.c -o build/obj/vendor/bdwgc/dbg_mlc.o    -DNO_EXECUTE_PERMISSION -Ivendor/bdwgc/include -Ivendor/tree-sitter/lib/include -Ivendor/tree-sitter/lib/src 
cc -c -g vendor/bdwgc/dyn_load.c -o build/obj/vendor/bdwgc/dyn_load.o    -DNO_EXECUTE_PERMISSION -Ivendor/bdwgc/include -Ivendor/tree-sitter/lib/include -Ivendor/tree-sitter/lib/src 
mkdir -p build/obj/vendor/bdwgc/
mkdir -p build/obj/vendor/bdwgc/
cc -c -g vendor/bdwgc/finalize.c -o build/obj/vendor/bdwgc/finalize.o    -DNO_EXECUTE_PERMISSION -Ivendor/bdwgc/include -Ivendor/tree-sitter/lib/include -Ivendor/tree-sitter/lib/src 
cc -c -g vendor/bdwgc/headers.c -o build/obj/vendor/bdwgc/headers.o    -DNO_EXECUTE_PERMISSION -Ivendor/bdwgc/include -Ivendor/tree-sitter/lib/include -Ivendor/tree-sitter/lib/src 
mkdir -p build/obj/vendor/bdwgc/
mkdir -p build/obj/vendor/bdwgc/
cc -c -g vendor/bdwgc/malloc.c -o build/obj/vendor/bdwgc/malloc.o    -DNO_EXECUTE_PERMISSION -Ivendor/bdwgc/include -Ivendor/tree-sitter/lib/include -Ivendor/tree-sitter/lib/src 
cc -c -g vendor/bdwgc/mallocx.c -o build/obj/vendor/bdwgc/mallocx.o    -DNO_EXECUTE_PERMISSION -Ivendor/bdwgc/include -Ivendor/tree-sitter/lib/include -Ivendor/tree-sitter/lib/src 
mkdir -p build/obj/vendor/bdwgc/
mkdir -p build/obj/vendor/bdwgc/
cc -c -g vendor/bdwgc/mark.c -o build/obj/vendor/bdwgc/mark.o    -DNO_EXECUTE_PERMISSION -Ivendor/bdwgc/include -Ivendor/tree-sitter/lib/include -Ivendor/tree-sitter/lib/src 
mkdir -p build/obj/vendor/bdwgc/
cc -c -g vendor/bdwgc/mach_dep.c -o build/obj/vendor/bdwgc/mach_dep.o    -DNO_EXECUTE_PERMISSION -Ivendor/bdwgc/include -Ivendor/tree-sitter/lib/include -Ivendor/tree-sitter/lib/src 
cc -c -g vendor/bdwgc/mark_rts.c -o build/obj/vendor/bdwgc/mark_rts.o    -DNO_EXECUTE_PERMISSION -Ivendor/bdwgc/include -Ivendor/tree-sitter/lib/include -Ivendor/tree-sitter/lib/src 
mkdir -p build/obj/vendor/bdwgc/
mkdir -p build/obj/vendor/bdwgc/
cc -c -g vendor/bdwgc/misc.c -o build/obj/vendor/bdwgc/misc.o    -DNO_EXECUTE_PERMISSION -Ivendor/bdwgc/include -Ivendor/tree-sitter/lib/include -Ivendor/tree-sitter/lib/src 
cc -c -g vendor/bdwgc/new_hblk.c -o build/obj/vendor/bdwgc/new_hblk.o    -DNO_EXECUTE_PERMISSION -Ivendor/bdwgc/include -Ivendor/tree-sitter/lib/include -Ivendor/tree-sitter/lib/src 
mkdir -p build/obj/vendor/bdwgc/
mkdir -p build/obj/vendor/bdwgc/
cc -c -g vendor/bdwgc/obj_map.c -o build/obj/vendor/bdwgc/obj_map.o    -DNO_EXECUTE_PERMISSION -Ivendor/bdwgc/include -Ivendor/tree-sitter/lib/include -Ivendor/tree-sitter/lib/src 
cc -c -g vendor/bdwgc/os_dep.c -o build/obj/vendor/bdwgc/os_dep.o    -DNO_EXECUTE_PERMISSION -Ivendor/bdwgc/include -Ivendor/tree-sitter/lib/include -Ivendor/tree-sitter/lib/src 
mkdir -p build/obj/vendor/bdwgc/
mkdir -p build/obj/vendor/bdwgc/
mkdir -p build/obj/vendor/isocline/src/
cc -c -g vendor/bdwgc/reclaim.c -o build/obj/vendor/bdwgc/reclaim.o    -DNO_EXECUTE_PERMISSION -Ivendor/bdwgc/include -Ivendor/tree-sitter/lib/include -Ivendor/tree-sitter/lib/src 
cc -c -g vendor/isocline/src/isocline.c -o build/obj/vendor/isocline/src/isocline.o    -DNO_EXECUTE_PERMISSION -Ivendor/bdwgc/include -Ivendor/tree-sitter/lib/include -Ivendor/tree-sitter/lib/src 
cc -c -g vendor/bdwgc/ptr_chck.c -o build/obj/vendor/bdwgc/ptr_chck.o    -DNO_EXECUTE_PERMISSION -Ivendor/bdwgc/include -Ivendor/tree-sitter/lib/include -Ivendor/tree-sitter/lib/src 
mkdir -p build/obj/vendor/tree-sitter/lib/src/
mkdir -p build/obj/vendor/tree-sitter/lib/src/
cc -c -g vendor/tree-sitter/lib/src/alloc.c -o build/obj/vendor/tree-sitter/lib/src/alloc.o    -DNO_EXECUTE_PERMISSION -Ivendor/bdwgc/include -Ivendor/tree-sitter/lib/include -Ivendor/tree-sitter/lib/src 
mkdir -p build/obj/vendor/tree-sitter/lib/src/
mkdir -p build/obj/vendor/tree-sitter/lib/src/
cc -c -g vendor/tree-sitter/lib/src/language.c -o build/obj/vendor/tree-sitter/lib/src/language.o    -DNO_EXECUTE_PERMISSION -Ivendor/bdwgc/include -Ivendor/tree-sitter/lib/include -Ivendor/tree-sitter/lib/src 
cc -c -g vendor/tree-sitter/lib/src/lexer.c -o build/obj/vendor/tree-sitter/lib/src/lexer.o    -DNO_EXECUTE_PERMISSION -Ivendor/bdwgc/include -Ivendor/tree-sitter/lib/include -Ivendor/tree-sitter/lib/src 
cc -c -g vendor/tree-sitter/lib/src/get_changed_ranges.c -o build/obj/vendor/tree-sitter/lib/src/get_changed_ranges.o    -DNO_EXECUTE_PERMISSION -Ivendor/bdwgc/include -Ivendor/tree-sitter/lib/include -Ivendor/tree-sitter/lib/src 
mkdir -p build/obj/vendor/tree-sitter/lib/src/
mkdir -p build/obj/vendor/tree-sitter/lib/src/
cc -c -g vendor/tree-sitter/lib/src/node.c -o build/obj/vendor/tree-sitter/lib/src/node.o    -DNO_EXECUTE_PERMISSION -Ivendor/bdwgc/include -Ivendor/tree-sitter/lib/include -Ivendor/tree-sitter/lib/src 
cc -c -g vendor/tree-sitter/lib/src/parser.c -o build/obj/vendor/tree-sitter/lib/src/parser.o    -DNO_EXECUTE_PERMISSION -Ivendor/bdwgc/include -Ivendor/tree-sitter/lib/include -Ivendor/tree-sitter/lib/src 
mkdir -p build/obj/vendor/tree-sitter/lib/src/
mkdir -p build/obj/vendor/tree-sitter/lib/src/
cc -c -g vendor/tree-sitter/lib/src/query.c -o build/obj/vendor/tree-sitter/lib/src/query.o    -DNO_EXECUTE_PERMISSION -Ivendor/bdwgc/include -Ivendor/tree-sitter/lib/include -Ivendor/tree-sitter/lib/src 
mkdir -p build/obj/vendor/tree-sitter/lib/src/
cc -c -g vendor/tree-sitter/lib/src/stack.c -o build/obj/vendor/tree-sitter/lib/src/stack.o    -DNO_EXECUTE_PERMISSION -Ivendor/bdwgc/include -Ivendor/tree-sitter/lib/include -Ivendor/tree-sitter/lib/src 
cc -c -g vendor/tree-sitter/lib/src/subtree.c -o build/obj/vendor/tree-sitter/lib/src/subtree.o    -DNO_EXECUTE_PERMISSION -Ivendor/bdwgc/include -Ivendor/tree-sitter/lib/include -Ivendor/tree-sitter/lib/src 
mkdir -p build/obj/vendor/tree-sitter/lib/src/
mkdir -p build/obj/vendor/tree-sitter/lib/src/
cc -c -g vendor/tree-sitter/lib/src/tree_cursor.c -o build/obj/vendor/tree-sitter/lib/src/tree_cursor.o    -DNO_EXECUTE_PERMISSION -Ivendor/bdwgc/include -Ivendor/tree-sitter/lib/include -Ivendor/tree-sitter/lib/src 
mkdir -p build/obj/vendor/tree-sitter/lib/src/
cc -c -g vendor/tree-sitter/lib/src/tree.c -o build/obj/vendor/tree-sitter/lib/src/tree.o    -DNO_EXECUTE_PERMISSION -Ivendor/bdwgc/include -Ivendor/tree-sitter/lib/include -Ivendor/tree-sitter/lib/src 
cc -c -g vendor/tree-sitter/lib/src/wasm_store.c -o build/obj/vendor/tree-sitter/lib/src/wasm_store.o    -DNO_EXECUTE_PERMISSION -Ivendor/bdwgc/include -Ivendor/tree-sitter/lib/include -Ivendor/tree-sitter/lib/src 
mkdir -p build/bin/
cc -g build/obj/main/minivm.o build/obj/vm/ast/build.o build/obj/vm/ast/ast.o build/obj/vm/ast/comp.o build/obj/vm/ast/print.o build/obj/vm/lib.o build/obj/vm/obj.o build/obj/vm/backend/backend.o build/obj/vm/save/io.o build/obj/vm/save/write.o build/obj/vm/save/read.o build/obj/vm/canvas.o build/obj/vm/ir.o build/obj/vm/lua/parser/parser.o build/obj/vm/lua/parser/scan.o build/obj/vm/lua/repl.o build/obj/vm/lua/ast.o build/obj/vm/io.o build/obj/vm/std.o build/obj/vendor/bdwgc/alloc.o build/obj/vendor/bdwgc/allchblk.o build/obj/vendor/bdwgc/blacklst.o build/obj/vendor/bdwgc/dbg_mlc.o build/obj/vendor/bdwgc/dyn_load.o build/obj/vendor/bdwgc/finalize.o build/obj/vendor/bdwgc/headers.o build/obj/vendor/bdwgc/malloc.o build/obj/vendor/bdwgc/mallocx.o build/obj/vendor/bdwgc/mark.o build/obj/vendor/bdwgc/mach_dep.o build/obj/vendor/bdwgc/mark_rts.o build/obj/vendor/bdwgc/misc.o build/obj/vendor/bdwgc/new_hblk.o build/obj/vendor/bdwgc/obj_map.o build/obj/vendor/bdwgc/os_dep.o build/obj/vendor/bdwgc/ptr_chck.o build/obj/vendor/bdwgc/reclaim.o build/obj/vendor/isocline/src/isocline.o build/obj/vendor/tree-sitter/lib/src/alloc.o build/obj/vendor/tree-sitter/lib/src/get_changed_ranges.o build/obj/vendor/tree-sitter/lib/src/language.o build/obj/vendor/tree-sitter/lib/src/lexer.o build/obj/vendor/tree-sitter/lib/src/node.o build/obj/vendor/tree-sitter/lib/src/parser.o build/obj/vendor/tree-sitter/lib/src/query.o build/obj/vendor/tree-sitter/lib/src/stack.o build/obj/vendor/tree-sitter/lib/src/subtree.o build/obj/vendor/tree-sitter/lib/src/tree_cursor.o build/obj/vendor/tree-sitter/lib/src/tree.o build/obj/vendor/tree-sitter/lib/src/wasm_store.o -o build/bin/minivm  -lm -ldl -L/opt/homebrew/opt/bison/lib
ld: warning: REFERENCED_DYNAMICALLY flag on symbol '_catch_exception_raise' is deprecated
ld: warning: REFERENCED_DYNAMICALLY flag on symbol '_catch_exception_raise_state' is deprecated
ld: warning: REFERENCED_DYNAMICALLY flag on symbol '_catch_exception_raise_state_identity' is deprecated
(base) cccimac@cccimacdeiMac minivm % ./build/bin/minivm test/fib/fib.lua
9227465
(base) cccimac@cccimacdeiMac minivm % ./build/bin/minivm -e 'print("hello world")'
hello world
```
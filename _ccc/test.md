

```
(base) cccimac@cccimacdeiMac minivm % ./build/bin/minivm test/fib/fib.lua
9227465
(base) cccimac@cccimacdeiMac minivm % ./build/bin/minivm -e 'print("hello world")'
hello world
(base) cccimac@cccimacdeiMac minivm % ./build/bin/minivm test/app/gui.lua         
(base) cccimac@cccimacdeiMac minivm % ./build/bin/minivm test/app/dig.lua
error: can only call functions
(base) cccimac@cccimacdeiMac minivm % ./build/bin/minivm test/app/snake.lua
error: can only call functions
(base) cccimac@cccimacdeiMac minivm % ./build/bin/minivm test/rec/tak.lua  
56
(base) cccimac@cccimacdeiMac minivm % ./build/bin/minivm test/closure/recursive.lua
<function: 0x104c8e9d0>
(base) cccimac@cccimacdeiMac minivm % ./build/bin/minivm test/types/vm.lua         
832040
```
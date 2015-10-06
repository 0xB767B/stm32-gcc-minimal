# stm32-gcc-minimal

Minimal example running on the ST Nucleo-103rb.

## Build

```
$ make
```

## Running

```
$ openocd -f board/st_nucleo_f103rb.cfg
$ arm-none-eabi-gdb

(gdb) flash
(gdb) break main
(gdb) continue
```


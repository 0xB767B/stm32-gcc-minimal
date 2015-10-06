target remote localhost:3333
symbol-file main.elf
monitor poll 
monitor reset halt

define syms
    symbol-file main.elf
end

define flash
    monitor poll
    monitor reset halt
    monitor flash write_image erase main.elf 0x08000000
    monitor reset halt
end

define reboot
    monitor reset init
    continue
end

#@copyright :Mostafa
cc=arm-none-eabi-
all:leran-in-depth.bin
     @echo "========Build is Done ======="
startup.o: startup.s
     $(cc)as.exe  -g  -mcpu=arm926ej-s startup.s -o startup.o
app.o: app.c
     $(cc)gcc.exe -c -g -I . -mcpu=arm926ej-s app.c	-o	app.o	
uart.o: uart.C
      $(cc)gcc.exe -c -g -I . -mcpu=arm926ej-s  uart.c -o  uart.o
leran-in-depth.elf: startup.o app.o uart.o
      $(cc)ld.exe	-T  linker_script.ld	 startup.o  app.o  uart.o -o  leran-in-depth.elf 
leran-in-depth.bin:leran-in-depth.elf
      $(cc)objcopy.exe -O binary leran-in-depth.elf leran-in-depth.bin 
clean_all:
      rm  *.o *.elf *.bin
clean:
   	  rm *.elf *.bin
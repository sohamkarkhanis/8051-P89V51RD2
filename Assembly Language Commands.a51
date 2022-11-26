

ORG 00h
mov r0,#04h             ;load 04 into r0
mov dptr,#str           ;dptr=20h
mov r1,#50h             ;load 50h into r1
up:clr a                ;clear the contents of accumulator
movca,@a+dptr           ;load a+dptr into accumulator
mov @r1,a               ;move the contents of a into RAM location whose addresss is held by r1
incdptr                 ;increment dptr pointer by 1
inc r1                  ;increment r1 register by 1
djnz r0,up              ;decrement r0 and go to up label
str: db 15h,3Ah,35h,58h ;define values that are to be transferred
END
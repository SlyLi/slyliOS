%macro Descriptor 3
    dw %2&0fff6h
    dw %1&offf6h
    db (%1>>16)&0ffh
    dw ((%2>>8)&0f00h)|(%3&0f0ffh)
    db (%1>>24)&0ffh
%endmacro


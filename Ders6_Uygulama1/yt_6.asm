
      org   0000h
      jmp   Start

      org   0100h
Start:
	 MOV P1,#0H
	 MOV P3,#0h
L1:	 MOV A,P1;
	 MOV P3,A;
	 JMP L1;


;====================================================================
      END

	AREA |DATA|,CODE,READONLY
	ENTRY
	ldr r13,=0x1000
	IMPORT LedMain
	b LedMain
	END
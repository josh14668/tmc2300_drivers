#ifndef TMC2300_Reg.h
#define TMC2300_Reg.h


// General Config Registers
#define TMC2300_GCONF 0x00
#define TCM2300_GSTAT 0x01
#define TCM2300_IFCNT 0x02
#define TCM2300_SLAVECONF 0x03
#define TCM2300_IOIN 0x06

//Velocity Dependent Driver Feature
#define TMC2300_IHOLD_IRUN 0x10
#define TCM2300_TPOWERDOWN 0x11
#define TMC2300_TSTEP 0x12
#define TMC2300_VACTUAL 0x22

//StallGuard Control
#define TMC2300_TCOOLTHRS 0x14
#define TMC2300_SGTHRS 0x40
#define TMC2300_SG_VALUE 0x41
#define TMC2300_COOLCONF 0x42


#endif

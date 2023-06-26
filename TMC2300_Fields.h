#ifndef TMC2300_Field
#define TMC2300_Field

#include "TMC2300_Register.h"

typedef union {
    __UINT8_TYPE__ GCONF_all;

    typedef struct {
        __UINT8_TYPE__ res1           : 1;  // set to 0
        __UINT8_TYPE__ extcap         : 1;  // Operation without external capacitor on VCP (0) or available with no switching delays (1)
        __UINT8_TYPE__ res2           : 1;  // set to 0
        __UINT8_TYPE__ shaft          : 1;  // Inverse stepper motor direction (1)
        __UINT8_TYPE__ diag_index     : 1;  // DIAG output normal (0) or DIAG pin outputs index pulse flag instead (1)
        __UINT8_TYPE__ diag_step      : 1;  // DIAG output normal (0) or DIAG output shows step pulses from internal pulse generator (toggle upon each step) (1)
        __UINT8_TYPE__ multistep_filt : 1;  // No filtering of STEP pulses (0) or software pulse generator optimization enabled when fullstep frequency > 750Hz (roughly), TSTEP shows filtered step time values when active (1)
        __UINT8_TYPE__ test_mode      : 1;  // Normal operation (0) or enable analog test output on pin DIR (1)
    }   GCONF_Fields;
}   GCONF;


typedef union {
    __UINT8_TYPE__ GSTAT_all;

    struct {
        __UINT8_TYPE__ reset    : 1;  // Indicates whether the IC has been reset (1: Reset occurred)
        __UINT8_TYPE__ drv_err  : 1;  // Indicates whether the driver has been shut down due to errors (1: Driver error occurred)
        __UINT8_TYPE__ u3v5     : 1;  // Actual state of the supply voltage comparator (1: Voltage below 3.5V)
    } GSTAT_Fields;

} GSTAT;

typedef union {
    __UINT8_TYPE__ IFCNT;

    struct {
        // IFCNT bit fields (if any)
    } IFCNT_Fields;

} IFCNT;

typedef union {
    __UINT8_TYPE__ SLAVECONF;

    struct {
        // SLAVECONF bit fields (if any)
    } SLAVECONF_Fields;

} SLAVECONF;

typedef union {
    __UINT8_TYPE__ IOIN;

    struct {
        // IOIN bit fields (if any)
    } IOIN_Fields;

} IOIN;

typedef union {
    __UINT8_TYPE__ IHOLD_IRUN;

    struct {
        // IHOLD_IRUN bit fields (if any)
    } IHOLD_IRUN_Fields;

} IHOLD_IRUN;

typedef union {
    __UINT8_TYPE__ TPOWERDOWN;

    struct {
        // TPOWERDOWN bit fields (if any)
    } TPOWERDOWN_Fields;

} TPOWERDOWN;

typedef union {
    __UINT8_TYPE__ TSTEP;

    struct {
        // TSTEP bit fields (if any)
    } TSTEP_Fields;

} TSTEP;

typedef union {
    __UINT8_TYPE__ VACTUAL;

    struct {
        // VACTUAL bit fields (if any)
    } VACTUAL_Fields;

} VACTUAL;

typedef union {
    __UINT8_TYPE__ TCOOLTHRS;

    struct {
        // TCOOLTHRS bit fields (if any)
    } TCOOLTHRS_Fields;

} TCOOLTHRS;

typedef union {
    __UINT8_TYPE__ SGTHRS;

    struct {
        // SGTHRS bit fields (if any)
    } SGTHRS_Fields;

} SGTHRS;

typedef union {
    __UINT8_TYPE__ SG_VALUE;

    struct {
        // SG_VALUE bit fields (if any)
    } SG_VALUE_Fields;

} SG_VALUE;

typedef union {
    __UINT8_TYPE__ COOLCONF;

    struct {
        // COOLCONF bit fields (if any)
    } COOLCONF_Fields;

} COOLCONF;



GCONF *pGCONF = (GCONF*) TMC2300_GCONF;
GSTAT *pGSTAT = (GSTAT*) TCM2300_GSTAT;

IFCNT *pIFCNT = (IFCNT*) TCM2300_IFCNT;
SLAVECONF *pSLAVECONF = (SLAVECONF*) TCM2300_SLAVECONF;
IOIN *pIOIN = (IOIN*) TCM2300_IOIN;

IHOLD_IRUN *pIHOLD_IRUN = (IHOLD_IRUN*) TMC2300_IHOLD_IRUN;
TPOWERDOWN *pTPOWERDOWN = (TPOWERDOWN*) TCM2300_TPOWERDOWN;
TSTEP *pTSTEP = (TSTEP*) TMC2300_TSTEP;
VACTUAL *pVACTUAL = (VACTUAL*) TMC2300_VACTUAL;

TCOOLTHRS *pTCOOLTHRS = (TCOOLTHRS*) TMC2300_TCOOLTHRS;
SGTHRS *pSGTHRS = (SGTHRS*) TMC2300_SGTHRS;
SG_VALUE *pSG_VALUE = (SG_VALUE*) TMC2300_SG_VALUE;
COOLCONF *pCOOLCONF = (COOLCONF*) TMC2300_COOLCONF;



#endif

#ifndef MN_DMD_API_H
#define MN_DMD_API_H



/* **************************************************** */
/* types */
/* **************************************************** */



typedef u8	DMD_u8_t;
typedef s8	DMD_s8_t;
typedef	u32	DMD_u32_t;
typedef	s32	 DMD_s32_t;
typedef	char*	  DMD_text_t;

#define	DMD_API

/* **************************************************** */
/* Defines */
/* **************************************************** */
#define DMD_INFORMATION_MAX	512
#define DMD_INFO_VALUE_MAX	32

#define DMD_MAX_DEVICE	4
#define DMD_REG_BANK    2

#define DMD_NOT_SUPPORT		0
#define DMD_SYSTEM_MAX		15
#define DMD_TCB_DATA_MAX	256
#define DMD_REGISTER_MAX	2048
#define DMD_I2C_MAXSIZE	127

#define BXIN_OK		0x03
#define ON_400K		0x01
#define OFF_400K	0x00
#define ACK			1
#define NOACK		0
#define ERRSEND		-1	//please i2c_ini();
#define bmpSTART	0x80
#define bmpSTOP		0x40
#define bmpLASTRD	0x20
#define bmpBERR		0x04
#define bmpACK		0x02
#define bmpDONE		0x01
#define WAIT_SEND 0x80		
#define LAST_WAIT 0x53
#define LAST_400 0x13



//For Main
#define DMD_MAIN_IBMOD		0x0
#define DMD_MAIN_CPOSET1		0x1
#define DMD_MAIN_CPOSET2		0x2
#define DMD_MAIN_HIZSET		0x3
#define DMD_MAIN_INVSET		0x4
#define DMD_MAIN_GPSET1		0x5
#define DMD_MAIN_GPSET2		0x6
#define DMD_MAIN_GPSET3		0x7
#define DMD_MAIN_MDADATL		0x8
#define DMD_MAIN_MDADATU		0x9
#define DMD_MAIN_IQDSET		0xA
#define DMD_MAIN_FOFFSET1U		0xB
#define DMD_MAIN_FOFFSET1L		0xC
#define DMD_MAIN_SRATEIN1		0xD
#define DMD_MAIN_SRATEIN2		0xE
#define DMD_MAIN_SRATEIN3		0xF
#define DMD_MAIN_RSTSET1		0x10
#define DMD_MAIN_RSTSET2		0x11
#define DMD_MAIN_FOFFSET2U		0x12
#define DMD_MAIN_FOFFSET2L		0x13
#define DMD_MAIN_I2CSET		0x14
#define DMD_MAIN_TCBSET		0x15
#define DMD_MAIN_TCBRT		0x16
#define DMD_MAIN_TCBADR		0x17
#define DMD_MAIN_TCBDT0		0x18
#define DMD_MAIN_TCBDT1		0x19
#define DMD_MAIN_TCBDT2		0x1A
#define DMD_MAIN_TCBDT3		0x1B
#define DMD_MAIN_TCBDT4		0x1C
#define DMD_MAIN_TCBDT5		0x1D
#define DMD_MAIN_TCBDT6		0x1E
#define DMD_MAIN_TCBDT7		0x1F
#define DMD_MAIN_TCBCOM		0x20
#define DMD_MAIN_VAGCREF		0x21
#define DMD_MAIN_QAGCREF		0x22
#define DMD_MAIN_AGCCO1		0x23
#define DMD_MAIN_AGCSET1		0x24
#define DMD_MAIN_VAGCDLY1L		0x25
#define DMD_MAIN_VQAGCDLY1U		0x26
#define DMD_MAIN_QAGCDLY1L		0x27
#define DMD_MAIN_ERRCNTTHU		0x28
#define DMD_MAIN_ERRCNTTHL		0x29
#define DMD_MAIN_ALCSET1		0x2A
#define DMD_MAIN_ALCSET2		0x2B
#define DMD_MAIN_ALCSET3		0x2C
#define DMD_MAIN_CLIPVUL		0x2D
#define DMD_MAIN_CLIPVL		0x2E
#define DMD_MAIN_PIRETH2U		0x2F
#define DMD_MAIN_PIRETH2L		0x30
#define DMD_MAIN_PIRETH3U		0x31
#define DMD_MAIN_PIRETH3L		0x32
#define DMD_MAIN_PAFCSGSET1		0x33
#define DMD_MAIN_PAFCSGSET2		0x34
#define DMD_MAIN_PAFCLPFSET1		0x35
#define DMD_MAIN_PAFCLPFSETA2		0x36
#define DMD_MAIN_PAFCLPFSETA3		0x37
#define DMD_MAIN_PAFCLPFSETA4		0x38
#define DMD_MAIN_PAFCLPFSETB2		0x39
#define DMD_MAIN_PAFCLPFSETB3		0x3A
#define DMD_MAIN_PAFCLPFSETB4		0x3B
#define DMD_MAIN_AFCSET1		0x3C
#define DMD_MAIN_AFCCO		0x3D
#define DMD_MAIN_AFCADD		0x3E
#define DMD_MAIN_APCSET1		0x3F
#define DMD_MAIN_APCSET2		0x40
#define DMD_MAIN_APCSET4		0x41
#define DMD_MAIN_APCSET5		0x42
#define DMD_MAIN_APCCO1		0x43
#define DMD_MAIN_APCCO2		0x44
#define DMD_MAIN_APCCO3		0x45
#define DMD_MAIN_APCCO4		0x46
#define DMD_MAIN_VCKRSET1		0x47
#define DMD_MAIN_VCKRSET2		0x48
#define DMD_MAIN_VCKRCOUL		0x49
#define DMD_MAIN_VCKRCOL		0x4A
#define DMD_MAIN_VFCKSET1		0x4B
#define DMD_MAIN_VFCKSET2		0x4C
#define DMD_MAIN_VFCKBWUL		0x4D
#define DMD_MAIN_VFCKBWLK		0x4E
#define DMD_MAIN_VFCKATUL		0x4F
#define DMD_MAIN_VFCKATLK		0x50
#define DMD_MAIN_VTCKSET1		0x51
#define DMD_MAIN_VTCKSET2		0x52
#define DMD_MAIN_VDAGCREF		0x53
#define DMD_MAIN_QDAGCREF		0x54
#define DMD_MAIN_GMIN		0x55
#define DMD_MAIN_DAGCCO		0x56
#define DMD_MAIN_CKRCO1		0x57
#define DMD_MAIN_CKRCO2		0x58
#define DMD_MAIN_CKRSET1		0x59
#define DMD_MAIN_CKRSET2		0x5A
#define DMD_MAIN_PNTSET		0x5B
#define DMD_MAIN_PNTCO		0x5C
#define DMD_MAIN_NRFMODE		0x5D
#define DMD_MAIN_FDATSC		0x5E
#define DMD_MAIN_FLTBW1		0x5F
#define DMD_MAIN_NRFRSEL		0x60
#define DMD_MAIN_SYNCSET1		0x61
#define DMD_MAIN_SYNCSET2		0x62
#define DMD_MAIN_SYNCSET6		0x63
#define DMD_MAIN_QDETREF		0x64
#define DMD_MAIN_QDETSET1		0x65
#define DMD_MAIN_QDETSET2		0x66
#define DMD_MAIN_EQSET		0x67
#define DMD_MAIN_VEQSET1		0x68
#define DMD_MAIN_VEQSET2		0x69
#define DMD_MAIN_VEQSET3		0x6A
#define DMD_MAIN_VEQSET4		0x6B
#define DMD_MAIN_VEQSET5		0x6C
#define DMD_MAIN_VEQSET6		0x6D
#define DMD_MAIN_VEQSET7		0x6E
#define DMD_MAIN_VEQSET8		0x6F
#define DMD_MAIN_VEQSET9		0x70
#define DMD_MAIN_AGCMON		0x71
#define DMD_MAIN_CKRFEMON		0x72
#define DMD_MAIN_DAGCMON		0x73
#define DMD_MAIN_QEQSET		0x74
#define DMD_MAIN_PAFCPILOT		0x75
#define DMD_MAIN_VCKRSYM		0x76
#define DMD_MAIN_APCMON		0x77
#define DMD_MAIN_PNTMON		0x78
#define DMD_MAIN_VEQSET10		0x79
#define DMD_MAIN_VEQSET11		0x7A
#define DMD_MAIN_VEQSET12		0x7B
#define DMD_MAIN_VEQSET13		0x7C
#define DMD_MAIN_VEQSET14		0x7D
#define DMD_MAIN_VEQSET15		0x7E
#define DMD_MAIN_VEQSET16		0x7F
#define DMD_MAIN_VEQSET17		0x80
#define DMD_MAIN_VEQSET18		0x81
#define DMD_MAIN_VEQSET19		0x82
#define DMD_MAIN_VEQSET20		0x83
#define DMD_MAIN_VEQSET21		0x84
#define DMD_MAIN_VEQSET22		0x85
#define DMD_MAIN_PLOCKTH1		0x86
#define DMD_MAIN_PLOCKTH2		0x87
#define DMD_MAIN_PLOCKTH3		0x88
#define DMD_MAIN_CRCDIVASET1		0x89
#define DMD_MAIN_CRCDIVASET2		0x8A
#define DMD_MAIN_CRCDIVASET3		0x8B
#define DMD_MAIN_CRCDIVBSET1		0x8C
#define DMD_MAIN_CRCDIVBSET2		0x8D
#define DMD_MAIN_CRCDIVBSET3		0x8E
#define DMD_MAIN_CRCDIVSMV		0x8F
#define DMD_MAIN_CRCDIVTIM		0x90
#define DMD_MAIN_PNDETSET1		0x91
#define DMD_MAIN_PNDETSET2		0x92
#define DMD_MAIN_PREIDETSET1		0x93
#define DMD_MAIN_PREQDETSET1		0x94
#define DMD_MAIN_PNDETSET3		0x95
#define DMD_MAIN_PNDETSET4		0x96
#define DMD_MAIN_PNSMSET1		0x97
#define DMD_MAIN_PNSMSET2		0x98
#define DMD_MAIN_PNSMSET3		0x99
#define DMD_MAIN_PNSMSET4		0x9A
#define DMD_MAIN_PNSMSET5		0x9B
#define DMD_MAIN_PNSMSET6		0x9C
#define DMD_MAIN_PNSMSET7		0x9D
#define DMD_MAIN_PNSMSET8		0x9E
#define DMD_MAIN_PNSMSET9		0x9F
#define DMD_MAIN_PNSMSET10		0xA0
#define DMD_MAIN_PNSMSET11		0xA1
#define DMD_MAIN_PNSMSET12		0xA2
#define DMD_MAIN_PNSMSET13		0xA3
#define DMD_MAIN_PNREGSET1		0xA4
#define DMD_MAIN_PNREGSET2		0xA5
#define DMD_MAIN_PNREGSET3		0xA6
#define DMD_MAIN_PNREGSET4		0xA7
#define DMD_MAIN_PNREGSET5		0xA8
#define DMD_MAIN_PNREGSET6		0xA9
#define DMD_MAIN_FREQSET		0xAA
#define DMD_MAIN_FREQU		0xAB
#define DMD_MAIN_FREQL		0xAC
#define DMD_MAIN_PNREGSET10		0xAD
#define DMD_MAIN_PNREGSET11		0xAE
#define DMD_MAIN_PNREGSET12		0xAF
#define DMD_MAIN_PNREGSET13		0xB0
#define DMD_MAIN_PNREGSET14		0xB1
#define DMD_MAIN_PNREGSET15		0xB2
#define DMD_MAIN_PNREGSET16		0xB3
#define DMD_MAIN_PNREGSET17		0xB4
#define DMD_MAIN_PNREGSET18		0xB5
#define DMD_MAIN_PNREGSET19		0xB6
#define DMD_MAIN_PNREGSET20		0xB7
#define DMD_MAIN_PNREGSET21		0xB8
#define DMD_MAIN_NTCWTH1		0xB9
#define DMD_MAIN_IBTGSET		0xBA
#define DMD_MAIN_AFCMON		0xBB
#define DMD_MAIN_CKRMON		0xBC
#define DMD_MAIN_NRFRDAT		0xBD
#define DMD_MAIN_MEANFERR		0xBE
#define DMD_MAIN_MEANMAGERR		0xBF
#define DMD_MAIN_PAFCSGGATE		0xC0
#define DMD_MAIN_AFCMONB		0xC1
#define DMD_MAIN_PLOCKMONAU		0xC2
#define DMD_MAIN_PLOCKMONAL		0xC3
#define DMD_MAIN_STSMON1		0xC4
#define DMD_MAIN_STSMON2		0xC5
#define DMD_MAIN_SYNCRD2		0xC6
#define DMD_MAIN_SYNCRD3		0xC7
#define DMD_MAIN_PLOCKMONBU		0xC8
#define DMD_MAIN_PLOCKMONBL		0xC9
#define DMD_MAIN_PNDETU		0xCA
#define DMD_MAIN_PNDETL		0xCB
#define DMD_MAIN_PIBETAU		0xCC
#define DMD_MAIN_PIBETAL		0xCD
#define DMD_MAIN_EQMNSET		0xCE
#define DMD_MAIN_EQERR1		0xCF
#define DMD_MAIN_EQERR2		0xD0
#define DMD_MAIN_RFAGCMON1P		0xD1
#define DMD_MAIN_RFAGCMON2P		0xD2
#define DMD_MAIN_IFAGCMON1P		0xD3
#define DMD_MAIN_IFAGCMON2P		0xD4
#define DMD_MAIN_PLOCKSTATE		0xD5
#define DMD_MAIN_PIBETAQU		0xD6
#define DMD_MAIN_PIBETAQL		0xD7
#define DMD_MAIN_PNDETSTATE		0xD8
#define DMD_MAIN_CNSETP		0xD9
#define DMD_MAIN_CNFLGP		0xDA
#define DMD_MAIN_CNMON1P		0xDB
#define DMD_MAIN_CNMON2P		0xDC
#define DMD_MAIN_CNMON3P		0xDD
#define DMD_MAIN_CNMON4P		0xDE
#define DMD_MAIN_FECSET		0xDF
#define DMD_MAIN_BERDSETP		0xE0
#define DMD_MAIN_BERTSET1P		0xE1
#define DMD_MAIN_BERTSET2P		0xE2
#define DMD_MAIN_BERFLGP		0xE3
#define DMD_MAIN_BERMON1P		0xE4
#define DMD_MAIN_BERMON2P		0xE5
#define DMD_MAIN_BERMON3P		0xE6
#define DMD_MAIN_NTCWTH2		0xE7
#define DMD_MAIN_PWDSET1		0xE8
#define DMD_MAIN_PWDSET2		0xE9
#define DMD_MAIN_PSEQOP1		0xEA
#define DMD_MAIN_PSEQOP2		0xEB
#define DMD_MAIN_PSEQOP3		0xEC
#define DMD_MAIN_PSEQOP4		0xED
#define DMD_MAIN_PSEQOP5		0xEE
#define DMD_MAIN_PSEQOP6		0xEF
#define DMD_MAIN_PSEQSET		0xF0
#define DMD_MAIN_PSEQPRG		0xF1
#define DMD_MAIN_PSEQSEL		0xF2
#define DMD_MAIN_PSEQDBG		0xF3
#define DMD_MAIN_PSEQOP7		0xF4
#define DMD_MAIN_PSEQOP8		0xF5
#define DMD_MAIN_PSEQOP9		0xF6
#define DMD_MAIN_PSEQOP10		0xF7
#define DMD_MAIN_PSEQADRU		0xF8
#define DMD_MAIN_PSEQADRL		0xF9
#define DMD_MAIN_PSEQDT		0xFA
#define DMD_MAIN_TESTSET3		0xFB
#define DMD_MAIN_CLKGSET		0xFC
#define DMD_MAIN_TPLLSET1		0xFD
#define DMD_MAIN_TPLLSET2		0xFE
#define DMD_MAIN_RDCHK		0xFF


//For USR
#define DMD_USR_INTDEFR		0x9
#define DMD_USR_INTDEFF		0xA
#define DMD_USR_INTSET		0xB
#define DMD_USR_INTCNT		0xC
#define DMD_USR_INTCND		0xD
#define DMD_USR_I2CSET		0x14
#define DMD_USR_CNSET		0x5A
#define DMD_USR_CNFLG		0x5B
#define DMD_USR_CNMON1		0x5C
#define DMD_USR_CNMON2		0x5D
#define DMD_USR_CNMON3		0x5E
#define DMD_USR_CNMON4		0x5F
#define DMD_USR_BERTSET1		0x60
#define DMD_USR_BERTSET2		0x61
#define DMD_USR_BERPSET1		0x62
#define DMD_USR_BERPSET2		0x63
#define DMD_USR_BERFLG		0x64
#define DMD_USR_BERMON1		0x65
#define DMD_USR_BERMON2		0x66
#define DMD_USR_BERMON3		0x67
#define DMD_USR_RFAGCMON1		0x68
#define DMD_USR_RFAGCMON2		0x69
#define DMD_USR_IFAGCMON1		0x6A
#define DMD_USR_IFAGCMON2		0x6B
#define DMD_USR_IMON		0x74
#define DMD_USR_QMON		0x79
#define DMD_USR_SDCC		0x80
#define DMD_USR_VSAGCREFU		0x81
#define DMD_USR_VSAGCREFL		0x82
#define DMD_USR_QSAGCREFU		0x83
#define DMD_USR_QSAGCREFL		0x84
#define DMD_USR_SAGCCO		0x85
#define DMD_USR_SAGCSET		0x86
#define DMD_USR_VPWMSET1		0x87
#define DMD_USR_VPWMDAT1		0x88
#define DMD_USR_QPWMSET1		0x89
#define DMD_USR_QPWMDAT1		0x8A
#define DMD_USR_QFECSET1		0x8B
#define DMD_USR_QFECSET4		0x8C
#define DMD_USR_QFECSET5		0x8D
#define DMD_USR_TSCSETV1		0x8E
#define DMD_USR_TSCSETQ1		0x8F
#define DMD_USR_TSCSET2		0x90
#define DMD_USR_TSCSET4		0x91
#define DMD_USR_FAD064U		0x92
#define DMD_USR_FAD064M		0x93
#define DMD_USR_FAD064L		0x94
#define DMD_USR_FAD256U		0x95
#define DMD_USR_FAD256M		0x96
#define DMD_USR_FAD256L		0x97
#define DMD_USR_FAD188U		0x98
#define DMD_USR_FAD188M		0x99
#define DMD_USR_FAD188L		0x9A
#define DMD_USR_FAD208U		0x9B
#define DMD_USR_FAD208M		0x9C
#define DMD_USR_FAD208L		0x9D
#define DMD_USR_TESTSET1		0x9E
#define DMD_USR_TESTSET2		0x9F
#define DMD_USR_AD10SET1		0xA0
#define DMD_USR_AD10SET2		0xA1
#define DMD_USR_AD10SET3		0xA2
#define DMD_USR_AD10SET4		0xA3
#define DMD_USR_RDCHK		0xFF





/* **************************************************** */
/* DMD Enums */
/* **************************************************** */
/*! SYSTEM Enum */
typedef enum {
	DMD_E_ISDBT=0,
	DMD_E_ISDBS,
	DMD_E_DVBT,
	DMD_E_DVBT2,
	DMD_E_DVBC,
	DMD_E_DVBC2,
	DMD_E_ATSC,
	DMD_E_QAMB_64QAM,
	DMD_E_QAMB_256QAM,
	DMD_E_QAMC_64QAM,
	DMD_E_QAMC_256QAM,
	DMD_E_ISDBT_BRAZIL,
	DMD_E_ANALOG,
	DMD_E_NTSC_M_BTSC,
	DMD_E_PAL_M_BTSC,
	DMD_E_PAL_N_BTSC,
	DMD_E_PAL_B_G_NICAM,
	DMD_E_PAL_I_NiCAM,
	DMD_E_PAL_D_NiCAM,
	DMD_E_PAL_B_G_A2,
	DMD_E_SECAM_L_NiCAM,
	DMD_E_SECAM_L1_NiCAM,
	DMD_E_SECAM_D_K_A2,
	DMD_E_SECAM_BG_NICAM,
	DMD_E_END_OF_SYSTEM,
	DMD_E_NOT_DEFINED,
} DMD_SYSTEM_t;

/* RF Frequency Unit */
typedef enum 
{
	DMD_E_MHZ,
	DMD_E_KHZ,
	DMD_E_HZ
} DMD_FREQ_UNIT_t;

/*! Lock Status */
typedef enum {
	DMD_E_LOCKED = 0,
	DMD_E_LOCK_NOSIGNAL,
	DMD_E_LOCK_NOSYNC,
	DMD_E_LOCK_ERROR
} DMD_LOCK_STATUS_t;

/*! Return Value for API Functions */
typedef enum {
	DMD_E_OK    = 0,
	DMD_E_ERROR = 1
} DMD_ERROR_t;

/*! BAND WIDTH */
typedef enum {
	DMD_E_BW_NOT_SPECIFIED,
	DMD_E_BW_6MHZ,
	DMD_E_BW_7MHZ,
	DMD_E_BW_8MHZ,
	DMD_E_BW_5MHZ,
	DMD_E_BW_1_7MHZ,
	DMD_E_BW_END_OF_BW
} DMD_BANDWIDTH_t;


/* '11/08/29 : OKAMOTO	Select TS output. */
typedef enum {
	DMD_E_TSOUT_PARALLEL_FIXED_CLOCK = 0,
	//DMD_E_TSOUT_PARALLEL_VARIABLE_CLOCK,
	DMD_E_TSOUT_SERIAL_VARIABLE_CLOCK,
} DMD_TSOUT;

/* '11/08/29 : OKAMOTO	Select TS output. */
typedef enum {
	DMD_E_TSOUT_PARALLEL_BRTG_MODE = 0, //default. Variable clock, DEN,CLK always "High" when data invalid 
	DMD_E_TSOUT_PARALLEL_SMOOTH_MODE = 1, //Fixed clock, DEN,CLK always "High" when data invalid 
	DMD_E_TSOUT_PARALLEL_BURST_GATED_MODE = 2,//Fixed clock, DEN,CLK always "Low" when data invalid 
	DMD_E_TSOUT_PARALLEL_BURST_CONTINUOUS_MODE = 3,//Fixed clock, DEN "Low" + CLK "High", when data invalid 
	DMD_E_TSOUT_SERIAL_BRTG_MODE = 0x10, //Variable clock, DEN,CLK always "High" when data invalid 
	DMD_E_TSOUT_SERIAL_SMOOTH_MODE = 0x11, //Fixed clock, DEN,CLK always "High" when data invalid 
	DMD_E_TSOUT_SERIAL_BURST_GATED_MODE = 0x12,//Fixed clock, DEN,CLK always "Low" when data invalid 
	DMD_E_TSOUT_SERIAL_BURST_CONTINUOUS_MODE = 0x13,//Fixed clock, DEN "Low" + CLK "High", when data invalid 	
} DMD_TSOUT_MODE;
//20140512, troy.wangyx, added TS output mode and TS clk polarity selection.
typedef enum {
	DMD_E_TSCLK_POLARITY_NORMAL = 0,
	DMD_E_TSCLK_POLARITY_INVERSE = 1,
} DMD_TSCLK_POLARITY;



/* 2012130123 : Troy, power mode selection */
typedef enum
{
   DMD_PWR_MODE_NORMAL	= 0,		/* default */
   DMD_PWR_MODE_STANDBY,			/* all blocks in standby, i2c, clock running, arouse by register set */
   DMD_PWR_MODE_SLEEP,	      /* i2c,clock stop, hardware reset needed */
   DMD_PWR_MODE_UNKNOWN
} DMD_PWR_MODE_t;

typedef enum {
	DMD_E_ENHANCE_MINUS_ECHO_DELAY_DEFAULT = 0, //field test pass result
	DMD_E_ENHANCE_MINUS_ECHO_DELAY_NO_SIDEEFFECT, //Lab test. enhance MINUS echo dalay performance, no side effect
	DMD_E_ENHANCE_MINUS_ECHO_DELAY_HAS_SIDEEFFECT,//Lab test. enhance MINUS echo dalay performance, has side effect on CCI(NTSC interface)
} DMD_ECHO_PERFORMANCE_SET;


/* **************************************************** */
/* DMD Structures */
/* **************************************************** */
/*! DMD Parameter Sturcture */
typedef struct {
	DMD_u32_t				devid;					//!<DeviceID
	DMD_SYSTEM_t			system;					//!<Broadcast System
	DMD_u32_t				freq;					//!<RF Frequency
	DMD_FREQ_UNIT_t			funit;					//!<RF Frequency unit
	DMD_BANDWIDTH_t			bw;						//!<Band width
	DMD_u32_t				ddradr;					//!<DDR memory address
	DMD_u32_t	info[DMD_INFORMATION_MAX];			//!<Demodulator Information
    /* '11/08/29 : OKAMOTO	Select TS output. */
	DMD_TSOUT_MODE	ts_out;
	DMD_ECHO_PERFORMANCE_SET echo_set; //troy.wangyx, 120801, to enhance "Single static echo MINUS delay"'s performance, 
} DMD_PARAMETER_t;


/* **************************************************** */
/* DMD Information */
/* **************************************************** */
/*! common information enum */
typedef	enum	{	DMD_E_INFO_ALL	=0	,	
			DMD_E_INFO_REGREV	=1	,	
			DMD_E_INFO_PSEQREV	=2	,	
			DMD_E_INFO_SYSTEM	=3	,	
			DMD_E_INFO_LOCK	=4	,	
			DMD_E_INFO_AGC	=5	,	
			DMD_E_INFO_BERRNUM	=6	,	
			DMD_E_INFO_BITNUM	=7	,	
			DMD_E_INFO_CNR_INT	=8	,	
			DMD_E_INFO_CNR_DEC	=9	,	
			DMD_E_INFO_PERRNUM	=10	,	
			DMD_E_INFO_PACKETNUM	=11	,	
			DMD_E_INFO_STATUS	=12	,
			DMD_E_INFO_ERRORFREE = 13,
			DMD_E_INFO_COMMON_END_OF_INFORMATION
}	
	DMD_INFO_t;
/*! DVBT information enum */
typedef	enum	{	DMD_E_INFO_DVBT_ALL	=0	,	
			DMD_E_INFO_DVBT_REGREV	=1	,	
			DMD_E_INFO_DVBT_PSEQRV	=2	,
			DMD_E_INFO_DVBT_SYSTEM	=3	,
			DMD_E_INFO_DVBT_LOCK	=4	,
			DMD_E_INFO_DVBT_AGC	=5	,
			DMD_E_INFO_DVBT_BERRNUM	=6	,
			DMD_E_INFO_DVBT_BITNUM	=7	,
			DMD_E_INFO_DVBT_CNR_INT	=8	,
			DMD_E_INFO_DVBT_CNR_DEC	=9	,
			DMD_E_INFO_DVBT_PERRNUM	=10	,
			DMD_E_INFO_DVBT_PACKETNUM	=11	,
			DMD_E_INFO_DVBT_STATUS = 12,
			DMD_E_INFO_DVBT_ERRORFREE	,
			DMD_E_INFO_DVBT_SQI	,
			DMD_E_INFO_DVBT_HIERARCHY_SELECT		,
			DMD_E_INFO_DVBT_TPS_ALL		,
			DMD_E_INFO_DVBT_MODE		,
			DMD_E_INFO_DVBT_GI		,
			DMD_E_INFO_DVBT_LENGTH_INDICATOR		,
			DMD_E_INFO_DVBT_CONSTELLATION		,
			DMD_E_INFO_DVBT_HIERARCHY	,
			DMD_E_INFO_DVBT_HP_CODERATE		,
			DMD_E_INFO_DVBT_LP_CODERATE		,
			DMD_E_INFO_DVBT_CELLID	,
			DMD_E_INFO_DVBT_END_OF_INFORMATION
		}	DMD_INFO_DVBT_t;
/*! DVBT2 information enum */
typedef	enum	{	DMD_E_INFO_DVBT2_ALL	=0	,	
			DMD_E_INFO_DVBT2_REGREV	=1	,	
			DMD_E_INFO_DVBT2_PSEQRV	=2	,
			DMD_E_INFO_DVBT2_SYSTEM	=3	,
			DMD_E_INFO_DVBT2_LOCK	=4	,
			DMD_E_INFO_DVBT2_AGC	=5	,
			DMD_E_INFO_DVBT2_BERRNUM	=6	,
			DMD_E_INFO_DVBT2_BITNUM	=7	,
			DMD_E_INFO_DVBT2_CNR_INT	=8	,
			DMD_E_INFO_DVBT2_CNR_DEC	=9	,
			DMD_E_INFO_DVBT2_PERRNUM	=10	,
			DMD_E_INFO_DVBT2_PACKETNUM	=11	,
			DMD_E_INFO_DVBT2_STATUS	=12,
			DMD_E_INFO_DVBT2_ERRORFREE,
			DMD_E_INFO_DVBT2_SQI,
			DMD_E_INFO_DVBT2_MODE,
			DMD_E_INFO_DVBT2_GI,
			DMD_E_INFO_DVBT2_BERRNUM_C,
			DMD_E_INFO_DVBT2_BITNUM_C,
			DMD_E_INFO_DVBT2_SELECTED_PLP,
			DMD_E_INFO_DVBT2_L1_ALL,
			DMD_E_INFO_DVBT2_TYPE,
			DMD_E_INFO_DVBT2_BW_EXT,
			DMD_E_INFO_DVBT2_S1,
			DMD_E_INFO_DVBT2_S2,
			DMD_E_INFO_DVBT2_PAPR,
			DMD_E_INFO_DVBT2_L1_MOD,
			DMD_E_INFO_DVBT2_L1_COD,
			DMD_E_INFO_DVBT2_L1_FEC_TYPE,
			DMD_E_INFO_DVBT2_L1_POST_SIZE,
			DMD_E_INFO_DVBT2_L1_POST_INFO_SIZE,
			DMD_E_INFO_DVBT2_PILOT_PATTERN,
			DMD_E_INFO_DVBT2_TX_ID_AVAILABILITY,
			DMD_E_INFO_DVBT2_CELL_ID,
			DMD_E_INFO_DVBT2_NETWORK_ID,
			DMD_E_INFO_DVBT2_T2_SYSTEM_ID,
			DMD_E_INFO_DVBT2_NUM_T2_FRAMES,
			DMD_E_INFO_DVBT2_NUM_DATA_SYMBOLS,
			DMD_E_INFO_DVBT2_REGEN_FLAG,
			DMD_E_INFO_DVBT2_L1_POST_EXTENSION,
			DMD_E_INFO_DVBT2_NUM_RF,
			DMD_E_INFO_DVBT2_CURRENT_RF_IDX,
			DMD_E_INFO_DVBT2_SUB_SLICES_PER_FRAME,
			DMD_E_INFO_DVBT2_SUB_SLICE_INTERVAL,
			DMD_E_INFO_DVBT2_NUM_PLP,
			DMD_E_INFO_DVBT2_NUM_AUX,
			DMD_E_INFO_DVBT2_PLP_MODE,
			DMD_E_INFO_DVBT2_FEF_TYPE,
			DMD_E_INFO_DVBT2_FEF_LENGTH,
			DMD_E_INFO_DVBT2_FEF_INTERVAL,
			DMD_E_INFO_DVBT2_DAT_PLP_ID,
			DMD_E_INFO_DVBT2_DAT_PLP_TYPE,
			DMD_E_INFO_DVBT2_DAT_PLP_PAYLOAD_TYPE,
			DMD_E_INFO_DVBT2_DAT_PLP_GROUP_ID,
			DMD_E_INFO_DVBT2_DAT_PLP_COD,
			DMD_E_INFO_DVBT2_DAT_PLP_MOD,
			DMD_E_INFO_DVBT2_DAT_PLP_ROTATION,
			DMD_E_INFO_DVBT2_DAT_PLP_FEC_TYPE,
			DMD_E_INFO_DVBT2_DAT_PLP_NUM_BLOCKS_MAX,
			DMD_E_INFO_DVBT2_DAT_PLP_FRAME_INTEVAL,
			DMD_E_INFO_DVBT2_DAT_PLP_TIME_IL_LENGTH,
			DMD_E_INFO_DVBT2_DAT_PLP_TIME_IL_TYPE,
			DMD_E_INFO_DVBT2_DAT_FF_FLAG,
			DMD_E_INFO_DVBT2_COM_PLP_ID,
			DMD_E_INFO_DVBT2_COM_PLP_TYPE,
			DMD_E_INFO_DVBT2_COM_PLP_PAYLOAD_TYPE,
			DMD_E_INFO_DVBT2_COM_PLP_GROUP_ID,
			DMD_E_INFO_DVBT2_COM_PLP_COD,
			DMD_E_INFO_DVBT2_COM_PLP_MOD,
			DMD_E_INFO_DVBT2_COM_PLP_ROTATION,
			DMD_E_INFO_DVBT2_COM_PLP_FEC_TYPE,
			DMD_E_INFO_DVBT2_COM_PLP_NUM_BLOCKS_MAX,
			DMD_E_INFO_DVBT2_COM_PLP_FRAME_INTEVAL,
			DMD_E_INFO_DVBT2_COM_PLP_TIME_IL_LENGTH,
			DMD_E_INFO_DVBT2_COM_PLP_TIME_IL_TYPE,
			DMD_E_INFO_DVBT2_COM_FF_FLAG,
			DMD_E_INFO_DVBT2_FRAME_IDX,
			DMD_E_INFO_DVBT2_TYPE_2_START,
			DMD_E_INFO_DVBT2_L1_CHANGE_COUNTER,
			DMD_E_INFO_DVBT2_START_RF_IDX,
			DMD_E_INFO_DVBT2_DAT_FIRST_RF_IDX,
			DMD_E_INFO_DVBT2_DAT_PLP_START,
			DMD_E_INFO_DVBT2_DAT_PLP_NUM_BLOCKS,
			DMD_E_INFO_DVBT2_COM_FIRST_RF_IDX,
			DMD_E_INFO_DVBT2_COM_PLP_START,
			DMD_E_INFO_DVBT2_COM_PLP_NUM_BLOCKS,
			DMD_E_INFO_DVBT2_STATIC_FLAG,
			DMD_E_INFO_DVBT2_STATIC_PADDING_FLAG,
			DMD_E_INFO_DVBT2_IN_BAND_A_FLAG,
			DMD_E_INFO_DVBT2_IN_BAND_B_FLAG,
			DMD_E_INFO_DVBT2_END_OF_INFORMATION
	} DMD_INFO_DVBT2_t;
/*! DVBC information enum */
typedef	enum	{	DMD_E_INFO_DVBC_ALL	=0	,	
			DMD_E_INFO_DVBC_REGREV	=1	,	
			DMD_E_INFO_DVBC_PSEQRV	=2	,
			DMD_E_INFO_DVBC_SYSTEM	=3	,
			DMD_E_INFO_DVBC_LOCK	=4	,
			DMD_E_INFO_DVBC_AGC	=5	,
			DMD_E_INFO_DVBC_BERRNUM	=6	,
			DMD_E_INFO_DVBC_BITNUM	=7	,
			DMD_E_INFO_DVBC_CNR_INT	=8	,
			DMD_E_INFO_DVBC_CNR_DEC	=9	,
			DMD_E_INFO_DVBC_PERRNUM	=10	,
			DMD_E_INFO_DVBC_PACKETNUM	=11	,
			DMD_E_INFO_DVBC_STATUS	=12	,
			DMD_E_INFO_DVBC_ERRORFREE = 13,
			DMD_E_INFO_DVBC_END_OF_INFORMATION
		} DMD_INFO_DVBC_t;
/*! ISDBT information enum */
typedef	enum	{	DMD_E_INFO_ISDBT_ALL	=0	,	
			DMD_E_INFO_ISDBT_REGREV	=1	,	
			DMD_E_INFO_ISDBT_PSEQRV	=2	,
			DMD_E_INFO_ISDBT_SYSTEM	=3	,
			DMD_E_INFO_ISDBT_LOCK	=4	,
			DMD_E_INFO_ISDBT_AGC	=5	,
			DMD_E_INFO_ISDBT_BERRNUM	=6	,
			DMD_E_INFO_ISDBT_BITNUM	=7	,
			DMD_E_INFO_ISDBT_CNR_INT	=8	,
			DMD_E_INFO_ISDBT_CNR_DEC	=9	,
			DMD_E_INFO_ISDBT_PERRNUM	=10	,
			DMD_E_INFO_ISDBT_PACKETNUM	=11	,
			DMD_E_INFO_ISDBT_STATUS	=12	,
			DMD_E_INFO_ISDBT_ERRORFREE = 13,
			DMD_E_INFO_ISDBT_BERRNUM_A	,
			DMD_E_INFO_ISDBT_BITNUM_A	,
			DMD_E_INFO_ISDBT_BERRNUM_B	,
			DMD_E_INFO_ISDBT_BITNUM_B	,
			DMD_E_INFO_ISDBT_BERRNUM_C	,
			DMD_E_INFO_ISDBT_BITNUM_C	,
			DMD_E_INFO_ISDBT_ERRORFREE_A	,
			DMD_E_INFO_ISDBT_ERRORFREE_B	,
			DMD_E_INFO_ISDBT_ERRORFREE_C	,
			DMD_E_INFO_ISDBT_MODE	,
			DMD_E_INFO_ISDBT_GI	,
			DMD_E_INFO_ISDBT_SYS_TMCC	,
			DMD_E_INFO_ISDBT_COUNTDOWN	,
			DMD_E_INFO_ISDBT_EMGFLG	,
			DMD_E_INFO_ISDBT_PART	,
			DMD_E_INFO_ISDBT_MAPA	,
			DMD_E_INFO_ISDBT_CRA	,
			DMD_E_INFO_ISDBT_INTA	,
			DMD_E_INFO_ISDBT_SEGA	,
			DMD_E_INFO_ISDBT_MAPB	,
			DMD_E_INFO_ISDBT_CRB	,
			DMD_E_INFO_ISDBT_INTB	,
			DMD_E_INFO_ISDBT_SEGB	,
			DMD_E_INFO_ISDBT_MAPC	,
			DMD_E_INFO_ISDBT_CRC	,
			DMD_E_INFO_ISDBT_INTC	,
			DMD_E_INFO_ISDBT_SEGC	,
			DMD_E_INFO_ISDBT_PHCOR	,
			DMD_E_INFO_ISDBT_END_OF_INFORMATION
		} DMD_INFO_ISDBT_t;
/*! ISDBS information enum */
typedef	enum	{	DMD_E_INFO_ISDBS_ALL	=0	,	
			DMD_E_INFO_ISDBS_REGREV	=1	,	
			DMD_E_INFO_ISDBS_PSEQRV	=2	,
			DMD_E_INFO_ISDBS_SYSTEM	=3	,
			DMD_E_INFO_ISDBS_LOCK	=4	,
			DMD_E_INFO_ISDBS_AGC	=5	,
			DMD_E_INFO_ISDBS_BERRNUM	=6	,
			DMD_E_INFO_ISDBS_BITNUM	=7	,
			DMD_E_INFO_ISDBS_CNR_INT	=8	,
			DMD_E_INFO_ISDBS_CNR_DEC	=9	,
			DMD_E_INFO_ISDBS_PERRNUM	=10	,
			DMD_E_INFO_ISDBS_PACKETNUM	=11	,
			DMD_E_INFO_ISDBS_STATUS	=12	,
			DMD_E_INFO_ISDBS_ERRORFREE = 13,
			DMD_E_INFO_ISDBS_BERRNUM_1	,
			DMD_E_INFO_ISDBS_BITNUM_1	,
			DMD_E_INFO_ISDBS_BERRNUM_2	,
			DMD_E_INFO_ISDBS_BITNUM_2	,
			DMD_E_INFO_ISDBS_BERRNUM_3	,
			DMD_E_INFO_ISDBS_BITNUM_3	,
			DMD_E_INFO_ISDBS_ERRORFREE_0	,
			DMD_E_INFO_ISDBS_ERRORFREE_1	,
			DMD_E_INFO_ISDBS_ERRORFREE_2	,
			DMD_E_INFO_ISDBS_ERRORFREE_3	,
			DMD_E_INFO_ISDBS_ERRORFREE_T	,
			DMD_E_INFO_ISDBS_TSNO	,
			DMD_E_INFO_ISDBS_TSID	,
			DMD_E_INFO_ISDBS_MOD	,
			DMD_E_INFO_ISDBS_EMGSW	,
			DMD_E_INFO_ISDBS_UPLINK	,
			DMD_E_INFO_ISDBS_EXON	,
			DMD_E_INFO_ISDBS_CHANGE	,
			DMD_E_INFO_ISDBS_MOD0	,
			DMD_E_INFO_ISDBS_SLOT0	,
			DMD_E_INFO_ISDBS_MOD1	,
			DMD_E_INFO_ISDBS_SLOT1	,
			DMD_E_INFO_ISDBS_MOD2	,
			DMD_E_INFO_ISDBS_SLOT2	,
			DMD_E_INFO_ISDBS_MOD3	,
			DMD_E_INFO_ISDBS_SLOT3	,
			DMD_E_INFO_ISDBS_TSID0	,
			DMD_E_INFO_ISDBS_TSID1	,
			DMD_E_INFO_ISDBS_TSID2	,
			DMD_E_INFO_ISDBS_TSID3	,
			DMD_E_INFO_ISDBS_TSID4	,
			DMD_E_INFO_ISDBS_TSID5	,
			DMD_E_INFO_ISDBS_TSID6	,
			DMD_E_INFO_ISDBS_TSID7	,
			DMD_E_INFO_ISDBS_TSNO01	,
			DMD_E_INFO_ISDBS_TSNO02	,
			DMD_E_INFO_ISDBS_TSNO03	,
			DMD_E_INFO_ISDBS_TSNO04	,
			DMD_E_INFO_ISDBS_TSNO05	,
			DMD_E_INFO_ISDBS_TSNO06	,
			DMD_E_INFO_ISDBS_TSNO07	,
			DMD_E_INFO_ISDBS_TSNO08	,
			DMD_E_INFO_ISDBS_TSNO09	,
			DMD_E_INFO_ISDBS_TSNO10	,
			DMD_E_INFO_ISDBS_TSNO11	,
			DMD_E_INFO_ISDBS_TSNO12	,
			DMD_E_INFO_ISDBS_TSNO13	,
			DMD_E_INFO_ISDBS_TSNO14	,
			DMD_E_INFO_ISDBS_TSNO15	,
			DMD_E_INFO_ISDBS_TSNO16	,
			DMD_E_INFO_ISDBS_TSNO17	,
			DMD_E_INFO_ISDBS_TSNO18	,
			DMD_E_INFO_ISDBS_TSNO19	,
			DMD_E_INFO_ISDBS_TSNO20	,
			DMD_E_INFO_ISDBS_TSNO21	,
			DMD_E_INFO_ISDBS_TSNO22	,
			DMD_E_INFO_ISDBS_TSNO23	,
			DMD_E_INFO_ISDBS_TSNO24	,
			DMD_E_INFO_ISDBS_TSNO25	,
			DMD_E_INFO_ISDBS_TSNO26	,
			DMD_E_INFO_ISDBS_TSNO27	,
			DMD_E_INFO_ISDBS_TSNO28	,
			DMD_E_INFO_ISDBS_TSNO29	,
			DMD_E_INFO_ISDBS_TSNO30	,
			DMD_E_INFO_ISDBS_TSNO31	,
			DMD_E_INFO_ISDBS_TSNO32	,
			DMD_E_INFO_ISDBS_TSNO33	,
			DMD_E_INFO_ISDBS_TSNO34	,
			DMD_E_INFO_ISDBS_TSNO35	,
			DMD_E_INFO_ISDBS_TSNO36	,
			DMD_E_INFO_ISDBS_TSNO37	,
			DMD_E_INFO_ISDBS_TSNO38	,
			DMD_E_INFO_ISDBS_TSNO39	,
			DMD_E_INFO_ISDBS_TSNO40	,
			DMD_E_INFO_ISDBS_TSNO41	,
			DMD_E_INFO_ISDBS_TSNO42	,
			DMD_E_INFO_ISDBS_TSNO43	,
			DMD_E_INFO_ISDBS_TSNO44	,
			DMD_E_INFO_ISDBS_TSNO45	,
			DMD_E_INFO_ISDBS_TSNO46	,
			DMD_E_INFO_ISDBS_TSNO47	,
			DMD_E_INFO_ISDBS_TSNO48	,
			DMD_E_INFO_ISDBS_END_OF_INFORMATION
		} DMD_INFO_ISDBS_t;

/*! ATSC information enum */
typedef	enum	{	DMD_E_INFO_ATSC_ALL	=0	,	
			DMD_E_INFO_ATSC_REGREV	=1	,	
			DMD_E_INFO_ATSC_PSEQRV	=2	,
			DMD_E_INFO_ATSC_SYSTEM	=3	,
			DMD_E_INFO_ATSC_LOCK	=4	,
			DMD_E_INFO_ATSC_AGC	=5	,
			DMD_E_INFO_ATSC_BERRNUM	=6	,
			DMD_E_INFO_ATSC_BITNUM	=7	,
			DMD_E_INFO_ATSC_CNR_INT	=8	,
			DMD_E_INFO_ATSC_CNR_DEC	=9	,
			DMD_E_INFO_ATSC_PERRNUM	=10	,
			DMD_E_INFO_ATSC_PACKETNUM	=11	,
			DMD_E_INFO_ATSC_STATUS	=12	,
			DMD_E_INFO_ATSC_ERRORFREE = 13,
			DMD_E_INFO_ATSC_END_OF_INFORMATION
		} DMD_INFO_ATSC_t;
/*! QAM information enum */
typedef	enum	{	DMD_E_INFO_QAM_ALL	=0	,	
			DMD_E_INFO_QAM_REGREV	=1	,	
			DMD_E_INFO_QAM_PSEQRV	=2	,
			DMD_E_INFO_QAM_SYSTEM	=3	,
			DMD_E_INFO_QAM_LOCK	=4	,
			DMD_E_INFO_QAM_AGC	=5	,
			DMD_E_INFO_QAM_BERRNUM	=6	,
			DMD_E_INFO_QAM_BITNUM	=7	,
			DMD_E_INFO_QAM_CNR_INT	=8	,
			DMD_E_INFO_QAM_CNR_DEC	=9	,
			DMD_E_INFO_QAM_PERRNUM	=10	,
			DMD_E_INFO_QAM_PACKETNUM	=11	,
			DMD_E_INFO_QAM_STATUS	=12	,
			DMD_E_INFO_QAM_ERRORFREE = 13,
			DMD_E_INFO_QAM_END_OF_INFORMATION
		} DMD_INFO_QAM_t;
/*! ANALOG information enum */
typedef	enum	{	DMD_E_INFO_ANALOG_ALL	=0	,	
			DMD_E_INFO_ANALOG_REGREV	=1	,	
			DMD_E_INFO_ANALOG_PSEQRV	=2	,
			DMD_E_INFO_ANALOG_SYSTEM	=3	,
			DMD_E_INFO_ANALOG_LOCK	=4	,
			DMD_E_INFO_ANALOG_AGC	=5	,
			DMD_E_INFO_ANALOG_BERRNUM	=6	,
			DMD_E_INFO_ANALOG_BITNUM	=7	,
			DMD_E_INFO_ANALOG_CNR_INT	=8	,
			DMD_E_INFO_ANALOG_CNR_DEC	=9	,
			DMD_E_INFO_ANALOG_PERRNUM	=10	,
			DMD_E_INFO_ANALOG_PACKETNUM	=11	,
			DMD_E_INFO_ANALOG_STATUS	=12	,
			DMD_E_INFO_ANALOG_ERRORFREE = 13,
			DMD_E_INFO_ANALOG_END_OF_INFORMATION
		} DMD_INFO_ANALOG_t;

/*! enumulator for DVBT/DVBT2 information */
//common
typedef enum{	DMD_E_ERRORFREE_ERROR=0,	DMD_E_ERRORFREE_ERRORFREE	}	DMD_ERRORFREE_t;
//DVBT
typedef enum{	DMD_E_DVBT_HIER_SEL_LP=0,	DMD_E_DVBT_HIER_SEL_HP	}	DMD_DVBT_HIER_SEL_t;
typedef enum{	DMD_E_DVBT_TPS_OBTAIN_NG=0,	DMD_E_DVBT_TPS_OBTAIN_OK	}	DMD_DVBT_TPS_OBTAIN_t;
typedef enum{	DMD_E_DVBT_MODE_2K=0,	DMD_E_DVBT_MODE_8K,	DMD_E_DVBT_MODE_4K , DMD_E_DVBT_MODE_NOT_DEFINED	}	DMD_DVBT_MODE_t;		
typedef enum{	DMD_E_DVBT_GI_1_32=0,	DMD_E_DVBT_GI_1_16,	DMD_E_DVBT_GI_1_8,	DMD_E_DVBT_GI_1_4 , DMD_E_DVBT_GI_NOT_DEFINED	}	DMD_DVBT_GI_t;	
typedef enum{	DMD_E_DVBT_CONST_QPSK=0,	DMD_E_DVBT_CONST_16QAM,	DMD_E_DVBT_CONST_64QAM	}	DMD_DVBT_CONST_t;		
typedef enum{	DMD_E_DVBT_HIERARCHY_NO=0,	DMD_E_DVBT_HIERARCHY_ALPHA_1,	DMD_E_DVBT_HIERARCHY_ALPHA_2,	DMD_E_DVBT_HIERARCHY_ALPHA_4	}	DMD_DVBT_HIERARCHY_t;	
typedef enum{	DMD_E_DVBT_CR_1_2=0,	DMD_E_DVBT_CR_2_3,	DMD_E_DVBT_CR_3_4,	DMD_E_DVBT_CR_5_6,	DMD_E_DVBT_CR_7_8	}	DMD_DVBT_CR_t;
//DVBT2
typedef enum{	DMD_E_DVBT2_MODE_1K=0,	DMD_E_DVBT2_MODE_2K,	DMD_E_DVBT2_MODE_4K,	DMD_E_DVBT2_MODE_8K,	DMD_E_DVBT2_MODE_16K,	DMD_E_DVBT2_MODE_32K	}			DMD_DVBT2_MODE_t;
typedef enum{	DMD_E_DVBT2_GI_1_32=0,	DMD_E_DVBT2_GI_1_16,	DMD_E_DVBT2_GI_1_8,	DMD_E_DVBT2_GI_1_4,	DMD_E_DVBT2_GI_1_128,	DMD_E_DVBT2_GI_19_128,	DMD_E_DVBT2_GI_19_256,	}		DMD_DVBT2_GI_t;
typedef enum{	DMD_E_DVBT2_TYPE_TS=0,	DMD_E_DVBT2_TYPE_GS,	DMD_E_DVBT2_TYPE_TS_GS	}						DMD_DVBT2_TYPE_t;
typedef enum{	DMD_E_DVBT2_PAPR_NO=0,	DMD_E_DVBT2_PAPR_ACE,	DMD_E_DVBT2_PAPR_TR,	DMD_E_DVBT2_PAPR_ACE_TR	}					DMD_DVBT2_PAPR_t;
typedef enum{	DMD_E_DVBT2_L1_MOD_BPSK=0,	DMD_E_DVBT2_L1_MOD_QPSK,	DMD_E_DVBT2_L1_MOD_16QAM,	DMD_E_DVBT2_L1_MOD_64QAM	}					DMD_DVBT2_L1_MOD_t;
typedef enum{	DMD_E_DVBT2_CR_1_2=0,	DMD_E_DVBT2_CR_3_5,	DMD_E_DVBT2_CR_2_3,	DMD_E_DVBT2_CR_3_4,	DMD_E_DVBT2_CR_4_5,	DMD_E_DVBT2_CR_5_6	}			DMD_DVBT2_CR_t;
typedef enum{	DMD_E_DVBT2_FEC_TYPE_16K=0,	DMD_E_DVBT2_FEC_TYPE_64K	}							DMD_DVBT2_FEC_TYPE_t;
typedef enum{	DMD_E_DVBT2_PP_1=0,	DMD_E_DVBT2_PP_2,	DMD_E_DVBT2_PP_3,	DMD_E_DVBT2_PP_4,	DMD_E_DVBT2_PP_5,	DMD_E_DVBT2_PP_6,	DMD_E_DVBT2_PP_7,	DMD_E_DVBT2_PP_8	}	DMD_DVBT2_PP_t;
typedef enum{	DMD_E_DVBT2_PLP_MODE_NO=0,	DMD_E_DVBT2_PLP_MODE_NORM,	DMD_E_DVBT2_PLP_MODE_HEM	}						DMD_DVBT2_PLP_MODE_t;
typedef enum{	DMD_E_DVBT2_PLP_TYPE_COM=0,	DMD_E_DVBT2_PLP_TYPE_DAT1,	DMD_E_DVBT2_PLP_TYPE_DAT2	}						DMD_DVBT2_PLP_TYPE_t;
typedef enum{	DMD_E_DVBT2_PLP_PAYLOAD_GFPS=0,	DMD_E_DVBT2_PLP_PAYLOAD_GCS,	DMD_E_DVBT2_PLP_PAYLOAD_GSE,	DMD_E_DVBT2_PLP_PAYLOAD_TS	}					DMD_DVBT2_PLP_PAYLOAD_t;
typedef enum{	DMD_E_DVBT2_PLP_MOD_QPSK=0,	DMD_E_DVBT2_PLP_MOD_16QAM,	DMD_E_DVBT2_PLP_MOD_64QAM,	DMD_E_DVBT2_PLP_MOD_256QAM	}					DMD_DVBT2_PLP_MOD_t;
//ISDBT
typedef enum{	DMD_E_ISDBT_MODE1=0,	DMD_E_ISDBT_MODE2,	DMD_E_ISDBT_MODE3	}	DMD_ISDBT_MODE_t;	
typedef	enum{	DMD_E_ISDBT_GI_1_32=0,	DMD_E_ISDBT_GI_1_16,DMD_E_ISDBT_GI_1_8,	DMD_E_ISDBT_GI_1_4	}	DMD_ISDBT_GI_t;
typedef	enum{	DMD_E_ISDBT_SYS_ISDB_T=0,DMD_E_ISDBT_SYS_ISDBT_SB	}	DMD_ISDBT_SYS_t;			
typedef	enum{	DMD_E_ISDBT_PART_NO_PART=0,	DMD_E_ISDBT_PART_PART	}	DMD_ISDBT_PART_t;	
typedef	enum{	DMD_E_ISDBT_CONST_DQPSK=0,	DMD_E_ISDBT_CONST_QPSK,	DMD_E_ISDBT_CONST_16QAM	,DMD_E_ISDBT_CONST_64QAM	}	DMD_ISDBT_CONST_t;	
typedef	enum{	DMD_E_ISDBT_CR_1_2=0,		DMD_E_ISDBT_CR_2_3,	DMD_E_ISDBT_CR_3_4,	DMD_E_ISDBT_CR_5_6,	DMD_E_ISDBT_CR_7_8	}	DMD_ISDBT_CR_t;
//ISDBS
typedef enum{	DMD_E_ISDB_S_MOD_BPSK_1_2=0,	
				DMD_E_ISDB_S_MOD_QPSK_1_2,
				DMD_E_ISDB_S_MOD_QPSK_2_3,
				DMD_E_ISDB_S_MOD_QPSK_3_4,
				DMD_E_ISDB_S_MOD_QPSK_5_6,
				DMD_E_ISDB_S_MOD_QPSK_7_8,
				DMD_E_ISDB_S_MOD_8PSK_2_3 } DMD_ISDBS_MOD_t;



#endif


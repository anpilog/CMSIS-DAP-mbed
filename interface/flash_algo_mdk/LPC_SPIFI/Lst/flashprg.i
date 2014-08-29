#line 1 "FlashPrg.c"














 

#line 1 "../FlashOS.H"














 



#line 25 "../FlashOS.H"




struct FlashSectors  {
  unsigned long   szSector;    
  unsigned long AddrSector;    
};



struct FlashDevice  {
   unsigned short     Vers;    
   char       DevName[128];    
   unsigned short  DevType;    
   unsigned long    DevAdr;    
   unsigned long     szDev;    
   unsigned long    szPage;    
   unsigned long       Res;    
   unsigned char  valEmpty;    

   unsigned long    toProg;    
   unsigned long   toErase;    

   struct FlashSectors sectors[512];
};




extern          int  Init        (unsigned long adr,   
                                  unsigned long clk,
                                  unsigned long fnc);
extern          int  UnInit      (unsigned long fnc);  
extern          int  BlankCheck  (unsigned long adr,   
                                  unsigned long sz,
                                  unsigned char pat);
extern          int  EraseChip   (void);               
extern          int  EraseSector (unsigned long adr);  
extern          int  ProgramPage (unsigned long adr,   
                                  unsigned long sz,
                                  unsigned char *buf);
extern unsigned long Verify      (unsigned long adr,   
                                  unsigned long sz,
                                  unsigned char *buf);
#line 18 "FlashPrg.c"
#line 1 "FlashDev.h"














 





  

  
  







#line 39 "FlashDev.h"
  
#line 49 "FlashDev.h"

#line 19 "FlashPrg.c"

#line 1 "spifi_rom_api.h"














 




#line 1 "C:\\Keil\\ARM\\ARMCC\\bin\\..\\include\\stdint.h"
 
 





 










#line 26 "C:\\Keil\\ARM\\ARMCC\\bin\\..\\include\\stdint.h"







 

     

     
typedef   signed          char int8_t;
typedef   signed short     int int16_t;
typedef   signed           int int32_t;
typedef   signed       __int64 int64_t;

     
typedef unsigned          char uint8_t;
typedef unsigned short     int uint16_t;
typedef unsigned           int uint32_t;
typedef unsigned       __int64 uint64_t;

     

     
     
typedef   signed          char int_least8_t;
typedef   signed short     int int_least16_t;
typedef   signed           int int_least32_t;
typedef   signed       __int64 int_least64_t;

     
typedef unsigned          char uint_least8_t;
typedef unsigned short     int uint_least16_t;
typedef unsigned           int uint_least32_t;
typedef unsigned       __int64 uint_least64_t;

     

     
typedef   signed           int int_fast8_t;
typedef   signed           int int_fast16_t;
typedef   signed           int int_fast32_t;
typedef   signed       __int64 int_fast64_t;

     
typedef unsigned           int uint_fast8_t;
typedef unsigned           int uint_fast16_t;
typedef unsigned           int uint_fast32_t;
typedef unsigned       __int64 uint_fast64_t;

     
typedef   signed           int intptr_t;
typedef unsigned           int uintptr_t;

     
typedef   signed       __int64 intmax_t;
typedef unsigned       __int64 uintmax_t;




     

     





     





     





     

     





     





     





     

     





     





     





     

     


     


     


     

     


     


     


     

     



     



     


     
    
 



#line 197 "C:\\Keil\\ARM\\ARMCC\\bin\\..\\include\\stdint.h"

     







     










     











#line 261 "C:\\Keil\\ARM\\ARMCC\\bin\\..\\include\\stdint.h"



 



#line 21 "spifi_rom_api.h"
 


 


typedef uint8_t uc;





 
typedef struct {
	uint32_t base;
	uc flags;
	int8_t log2;
	uint16_t rept;
} protEnt;
 
enum {RWPROT=1};







 

typedef union {
	uint16_t hw;
	uc byte[2];
}stat_t;
 
typedef struct {
	uint32_t base, regbase, devSize, memSize;
	uc mfger, devType, devID, busy;
	stat_t stat;
	uint16_t reserved;
	uint16_t set_prot, write_prot;
	uint32_t mem_cmd, prog_cmd;
	uint16_t sectors, protBytes;
	uint32_t opts, errCheck;
	uc erase_shifts[4], erase_ops[4];
	protEnt *protEnts;
	char prot[68];
} SPIFIobj;

 
typedef struct {
	char *dest;
	uint32_t length;
    char *scratch;
	int32_t protect;
	uint32_t options;
} SPIFIopers;

 
typedef enum {stat_inst, block_erase, prog_inst, chip_erase} inst_type;


 
#line 102 "spifi_rom_api.h"


 



 




 


 
 

 


 

 

 


 

 


 

 

 

 

 

 

 

 









 
typedef struct {
  int32_t  (*spifi_init)     (SPIFIobj *obj, uint32_t csHigh, uint32_t options, uint32_t mhz);
  int32_t  (*spifi_program)  (SPIFIobj *obj, char *source, SPIFIopers *opers);
  int32_t  (*spifi_erase)    (SPIFIobj *obj, SPIFIopers *opers);

   
  void     (*cancel_mem_mode)(SPIFIobj *obj);
  void     (*set_mem_mode)   (SPIFIobj *obj);

   
  int32_t  (*checkAd)        (SPIFIobj *obj, SPIFIopers *opers);
  int32_t  (*setProt)        (SPIFIobj *obj, SPIFIopers *opers, char *change, char *saveProt);
  int32_t  (*check_block)    (SPIFIobj *obj, char *source, SPIFIopers *opers, uint32_t check_program);
  int32_t  (*send_erase_cmd) (SPIFIobj *obj, uint8_t op, uint32_t addr);
  uint32_t (*ck_erase)       (SPIFIobj *obj, uint32_t *addr, uint32_t length);
  int32_t  (*prog_block)     (SPIFIobj *obj, char *source, SPIFIopers *opers, uint32_t *left_in_page);
  uint32_t (*ck_prog)        (SPIFIobj *obj, char *source, char *dest, uint32_t length);

   
  void     (*setSize)        (SPIFIobj *obj, int32_t value);
  int32_t  (*setDev)         (SPIFIobj *obj, uint32_t opts, uint32_t mem_cmd, uint32_t prog_cmd);
  uint32_t (*cmd)            (uc op, uc addrLen, uc intLen, uint16_t len);
  uint32_t (*readAd)         (SPIFIobj *obj, uint32_t cmd, uint32_t addr);
  void     (*send04)         (SPIFIobj *obj, uc op, uc len, uint32_t value);
  void     (*wren_sendAd)    (SPIFIobj *obj, uint32_t cmd, uint32_t addr, uint32_t value);
  int32_t  (*write_stat)     (SPIFIobj *obj, uc len, uint16_t value);
  int32_t  (*wait_busy)      (SPIFIobj *obj, uc prog_or_erase);
} SPIFI_RTNS;






extern SPIFI_RTNS spifi_table;

 

























 

 
int32_t spifi_init (SPIFIobj *obj, uint32_t csHigh, uint32_t options, uint32_t mhz);
int32_t spifi_program (SPIFIobj *obj, char *source, SPIFIopers *opers);
int32_t spifi_erase (SPIFIobj *obj, SPIFIopers *opers);

 
void setSize (SPIFIobj *obj, int32_t value);
int32_t setDev (SPIFIobj *obj, uint32_t opts, uint32_t mem_cmd, uint32_t prog_cmd);
uint32_t read04(SPIFIobj *obj, uc op, uc len);
int32_t write_stat (SPIFIobj *obj, uc len, uint16_t value);
void setProtEnts(SPIFIobj *obj, const protEnt *p, uint32_t protTabLen);

 
void pullMISO(int high);

#line 244 "spifi_rom_api.h"

#line 21 "FlashPrg.c"



#line 30 "FlashPrg.c"

SPIFIobj   obj;
SPIFIopers opers;

unsigned long base_adr;






 
int Init (unsigned long adr, unsigned long clk, unsigned long fnc) {
    int32_t rc;

    opers.dest    = ((void *)0);
    opers.length  = 0;
    opers.scratch = ((char *)0x10080000);
    opers.protect = -1;                    
    opers.options = 8;

    base_adr = adr;

    
    (*(volatile unsigned long *)0x40050070) = 1<<24 | 1<<11; 

    
    (*(volatile unsigned long *)0x4008618C) = 0xF3; 
    
    (*(volatile unsigned long *)0x40086190) =
    (*(volatile unsigned long *)0x40086194) =
    (*(volatile unsigned long *)0x40086198) =
    (*(volatile unsigned long *)0x4008619C) = 0xD3;
    (*(volatile unsigned long *)0x400861A0) = 0x13; 

    rc = spifi_init(&obj, 3, 0x80 | 0x40, 12);

    return ((rc != 0) ? 1 : 0);  
}




 
int UnInit (unsigned long fnc) {
    return 0;
}


 
int EraseChip (void) {
    int32_t rc;

    opers.dest    = ((void *)0);
    opers.length  = obj.devSize;
    opers.scratch = ((char *)0x10080000);
    opers.options = 0x20;

    
    
    rc = spifi_erase(&obj, &opers);
    if (rc != 0) 
        return (rc);

    return ((rc != 0) ? 1 : 0);
}




 
int EraseSector (unsigned long adr) {
    int32_t rc;

    opers.dest = (char *)(adr - base_adr);
    opers.length  = (4 * 1024);
    opers.scratch = ((char *)0x10080000);
    opers.options = 0x20;

    rc = spifi_erase(&obj, &opers);

    return ((rc != 0) ? 1 : 0);
}






 
int ProgramPage (unsigned long adr, unsigned long sz, unsigned char *buf) {
    int32_t rc;

    opers.dest = (char *)(adr - base_adr);
    opers.length  = sz;
    opers.scratch = ((char *)0x10080000);
    opers.protect = 0;
    
    
    opers.options = 0x20;

    rc = spifi_program(&obj, (char *)buf, &opers);

    return ((rc != 0) ? 1 : 0);
}

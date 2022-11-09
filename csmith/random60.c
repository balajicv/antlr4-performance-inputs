/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.4.0
 * Git version: deddca6
 * Options:   -s 60
 * Seed:      60
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int32_t g_2[1][4][5] = {{{0L,(-3L),0L,0L,(-3L)},{(-3L),0L,0L,(-3L),0L},{(-3L),(-3L),0xA2A3B3F3L,(-3L),(-3L)},{0L,(-3L),0L,0L,(-3L)}}};
static int32_t g_3 = 0x74B1B055L;
static volatile int32_t g_6 = 0x6038591BL;/* VOLATILE GLOBAL g_6 */
static volatile int32_t g_7 = 0L;/* VOLATILE GLOBAL g_7 */
static volatile int32_t g_8 = (-1L);/* VOLATILE GLOBAL g_8 */


/* --- FORWARD DECLARATIONS --- */
static int32_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_3 g_6
 * writes: g_3 g_6 g_7 g_8 g_2
 */
static int32_t  func_1(void)
{ /* block id: 0 */
    for (g_3 = 0; (g_3 == (-22)); --g_3)
    { /* block id: 3 */
        for (g_6 = 0; g_6 < 1; g_6 += 1)
        {
            for (g_7 = 0; g_7 < 4; g_7 += 1)
            {
                for (g_8 = 0; g_8 < 5; g_8 += 1)
                {
                    g_2[g_6][g_7][g_8] = 0L;
                }
            }
        }
    }
    return g_6;
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: -1
breakdown:
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 0
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 0
XXX structs with bitfields in the program: 0
breakdown:
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 0
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 2
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 1
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 66.7

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 0
XXX percentage an existing variable is used: 100
FYI: the random generator makes assumptions about the integer size. See platform.info for more details.
XXX total OOB instances added: 0
********************* end of statistics **********************/


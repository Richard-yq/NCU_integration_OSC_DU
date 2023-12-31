/*******************************************************************************
################################################################################
#   Copyright (c) [2017-2019] [Radisys]                                        #
#                                                                              #
#   Licensed under the Apache License, Version 2.0 (the "License");            #
#   you may not use this file except in compliance with the License.           #
#   You may obtain a copy of the License at                                    #
#                                                                              #
#       http://www.apache.org/licenses/LICENSE-2.0                             #
#                                                                              #
#   Unless required by applicable law or agreed to in writing, software        #
#   distributed under the License is distributed on an "AS IS" BASIS,          #
#   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.   #
#   See the License for the specific language governing permissions and        #
#   limitations under the License.                                             #
################################################################################
 *******************************************************************************/
/* header include files (.h) */
#include "common_def.h"
#include "mac_utils.h"

/*!< This table is the Short BSR Table
 *  * Spec 38.321, Table 6.1.3.1-1*/
uint32_t shortBsrBytesTable[MAX_SHORT_BSR_TABLE_ENTRIES] = { 0, 10, 14, 20, 28, \
   38, 53, 74, 102, 142, 198, 276, 384, 535, 745, 1038, 1446, 2014, 2806, 3909, \
   5446, 7587, 10570, 14726, 20516, 28581, 39818, 55474, 77284, 107669, 150000, \
   150001 };

/*!< This table is the Long BSR Table
 *  * Spec 38.321, Table 6.1.3.1-2*/
uint32_t longBsrBytesTable[MAX_LONG_BSR_TABLE_ENTRIES] = {
   0,10,11,12,13,14,15,16,
   17,18,19,20,22,23,25,26,
   28,30,32,34,36,38,40,43,
   46,49,52,55,59,62,66,71,
   75,80,85,91,97,103,110,117,
   124,132,141,150,160,170,181,193,
   205,218,233,248,264,281,299,318,
   339,361,384,409,436,464,494,526,
   560,597,635,677,720,767,817,870,
   926,987,1051,1119,1191,1269,1351,1439,
   1532,1631,1737,1850,1970,2098,2234,2379,
   2533,2698,2873,3059,3258,3469,3694,3934,
   4189,4461,4751,5059,5387,5737,6109,6506,
   6928,7378,7857,8367,8910,9488,10104,10760,
   11458,12202,12994,13838,14736,15692,16711,17795,
   18951,20181,21491,22885,24371,25953,27638,29431,
   31342,33376,35543,37850,40307,42923,45709,48676,
   51836,55200,58784,62599,66663,70990,75598,80505,
   85730,91295,97221,103532,110252,117409,125030,133146,
   141789,150992,160793,171231,182345,194182,206786,220209,
   234503,249725,265935,283197,301579,321155,342002,364202,
   387842,413018,439827,468377,498780,531156,565634,602350,
   641449,683087,727427,774645,824928,878475,935498,996222,
   1060888,1129752,1203085,1281179,1364342,1452903,1547213,1647644,
   1754595,1868488,1989774,2118933,2256475,2402946,2558924,2725027,
   2901912,3090279,3290873,3504487,3731968,3974215,4232186,4506902,
   4799451,5110989,5442750,5796046,6172275,6572925,6999582,7453933,
   7937777,8453028,9001725,9586039,10208280,10870913,11576557,12328006,
   13128233,13980403,14887889,15854280,16883401,17979324,19146385,20389201,
   21712690,23122088,24622972,26221280,27923336,29735875,31666069,33721553,
   35910462,38241455,40723756,43367187,46182206,49179951,52372284,55771835,
   59392055,63247269,67352729,71724679,76380419,81338368,81338368,0
   /* TODO Last Buffer Size is reserved [Now set as 0]*/
};

/*******************************************************************
 *
 * @brief Allocates a crnti for new UE 
 *
 * @details
 *
 *    Function : getNewCrnti
 *
 *    Functionality: Allocates a crnti for new UE
 *
 * @params[in] CRNTI bit map
 * @return ROK     - success
 *         RFAILED - failure
 *
 * ****************************************************************/
uint16_t getNewCrnti(uint8_t *crntiMap)
{
   uint8_t bitIdx = 0;  /* bit position */
   uint8_t mask = 1;    /* bit mask */
   uint16_t newCrnti;   /* new crnti */

   while(bitIdx < 8)
   {
      /* Find the first unset bit in crntiMap and allocate
       * this as new crnti */
      if((*crntiMap & (mask << bitIdx)) == 0)
      {
         newCrnti = ODU_START_CRNTI + bitIdx;
	 SET_ONE_BIT(bitIdx, *crntiMap);
	 return newCrnti;
      }
      else
         bitIdx++;
   }
   return -1;
}

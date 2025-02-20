/*
    ChibiOS - Copyright (C) 2006,2007,2008,2009,2010,2011,2012,2013,2014,
              2015,2016,2017,2018,2019,2020,2021 Giovanni Di Sirio.

    This file is part of ChibiOS.

    ChibiOS is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation version 3 of the License.

    ChibiOS is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/**
 * @file    sb/vhal/sbvhal_pal.c
 * @brief   ARM SandBox host Virtual HAL PAL code.
 *
 * @addtogroup ARM_SANDBOX_HOST_VHAL
 * @{
 */

#include "sb.h"

#if (SB_CFG_ENABLE_VHAL_PAL == TRUE) || defined(__DOXYGEN__)

/*===========================================================================*/
/* Module local definitions.                                                 */
/*===========================================================================*/

/*===========================================================================*/
/* Module exported variables.                                                */
/*===========================================================================*/

/*===========================================================================*/
/* Module local types.                                                       */
/*===========================================================================*/

/*===========================================================================*/
/* Module local variables.                                                   */
/*===========================================================================*/

/*===========================================================================*/
/* Module local functions.                                                   */
/*===========================================================================*/

/*===========================================================================*/
/* Module exported functions.                                                */
/*===========================================================================*/

void sb_api_vhal_pal(struct port_extctx *ectxp) {
  unsigned sub = (unsigned)ectxp->r0;
  unsigned port = (unsigned)ectxp->r1;

  switch (sub) {
  case 0:
    palWriteBus(bus, bits);
  }

  ectxp->r0 = CH_RET_SUCCESS;
}

#endif /* SB_CFG_ENABLE_VHAL_PAL == TRUE */

/** @} */

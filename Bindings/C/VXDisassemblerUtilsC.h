/**************************************************************************************************

  Verteron Disassembler Engine
  Version 1.0

  Remarks         : Freeware, Copyright must be included

  Original Author : Florian Bernd
  Modifications   : athre0z

  Last change     : 04. February 2015

 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.

**************************************************************************************************/

#ifndef _VDE_VXDISASSEMBLERUTILSC_H_
#define _VDE_VXDISASSEMBLERUTILSC_H_

#include <stdint.h>
#include "VXDisassemblerTypesC.h"

#ifdef __cplusplus
extern "C"
{
#endif

typedef struct _VXContextDescriptor
{
    uint8_t type;
    void *ptr;
} VXContextDescriptor;

/**
 * @brief   Calculates the absolute target address of a relative instruction operand.
 * @param   info    The instruction info.
 * @param   operand The operand.
 * @return  The absolute target address.
 */
uint64_t VXCalcAbsoluteTarget(const VXInstructionInfo *info, const VXOperandInfo *operand);

#ifdef __cplusplus
}
#endif

#endif /* _VDE_VXDISASSEMBLERUTILSC_H_ */
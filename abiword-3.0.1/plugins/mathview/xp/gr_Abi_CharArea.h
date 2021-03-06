/* AbiWord
 * Copyright (C) 2004 Luca Padovani <lpadovan@cs.unibo.it>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301 USA.
 */

#ifndef __gr_Abi_CharArea_h__
#define __gr_Abi_CharArea_h__

#include "mathview_proxy.h"

#include "ut_types.h" // for UT_UCS4Char

class GR_Abi_CharArea : public GlyphArea
{
protected:
  GR_Abi_CharArea(class GR_Graphics*, class GR_Font*, const scaled&, UT_UCS4Char);
  virtual ~GR_Abi_CharArea();

public:
  static SmartPtr<GR_Abi_CharArea> create(GR_Graphics* g, GR_Font* font, const scaled& size, UT_UCS4Char glyph)
  { return new GR_Abi_CharArea(g, font, size, glyph); }

  virtual BoundingBox box(void) const;
  virtual scaled leftEdge(void) const;
  virtual scaled rightEdge(void) const;
  virtual void render(class RenderingContext&, const scaled&, const scaled&) const;

private:
  class GR_Font* m_pFont;
  UT_UCS4Char m_ch;
  BoundingBox m_box;
};

#endif // __gr_Abi_CharArea_h__

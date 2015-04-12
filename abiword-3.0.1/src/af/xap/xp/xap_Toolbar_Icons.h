/* AbiSource Application Framework
 * Copyright (C) 1998 AbiSource, Inc.
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

#ifndef XAP_TOOLBAR_ICONS_H
#define XAP_TOOLBAR_ICONS_H

/* pre-emptive dismissal; ut_types.h is needed by just about everything,
 * so even if it's commented out in-file that's still a lot of work for
 * the preprocessor to do...
 */
#ifndef UT_TYPES_H
#include "ut_types.h"
#endif

class ABI_EXPORT XAP_Toolbar_Icons
{
public:
	XAP_Toolbar_Icons(void);
	virtual ~XAP_Toolbar_Icons(void);

protected:
	static bool _findIconDataByName(const char * szName,
									   const char *** pIconData,
									   UT_uint32 * pSizeofData);
	static bool _findIconNameForID(const char * szID, const char ** pName);
};

#endif /* XAP_TOOLBAR_ICONS_H */

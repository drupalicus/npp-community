// This file is part of Notepad++ Community Release's FuncGuard project.
// Copyright (C)2009 The Notepad++ Community
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either
// version 2 of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

#include "precompiled_headers.h"
#include "MISC/Debug/FuncGuards.h"

///////////////////////////////////////////////////////////////////////////////
//
// This source enables/disables all functions guards based on whether or not
// the NPPCR_GUARD_... macro is defined in FuncGuards.h
//
// When new functions guards are created they should be added to this file
// in alphabetical order.
//
//
// IT IS RECOMMENDED TO USE THE POWERSHELL FUNCGUARD MODULE TO KEEP THE RELATED
// FILES IN SYNCH AND PROPERLY ORDERED!
//
//
// Any desired documentation for the function guard belongs in FuncGuards.h
//
///////////////////////////////////////////////////////////////////////////////

/*
	Usage:
	The entries in this file need to remain between the block start and block
	end statements.

	All entries need to follow the format and have a blank line above and below
	the entry:

#ifdef FUNCGUARD_PREFIX_GUARDNAME
	func_guard_enable_cat(guardName);
#else
	func_guard_disable_cat(guardName);
#endif

*/

// FUNCGUARD_BLOCK_START << Do not alter or remove

// FUNCGUARD_BLOCK_END << Do not alter or remove

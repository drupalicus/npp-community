// this file is part of notepad++
// Copyright (C)2009 The Notepad++ Team
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

#ifndef SCINTILLACOMPONENT_BUFFERID_H
#define SCINTILLACOMPONENT_BUFFERID_H

class Buffer;
typedef Buffer * BufferID;	//each buffer has unique ID by which it can be retrieved
#define BUFFER_INVALID	(BufferID)0

#endif // SCINTILLACOMPONENT_BUFFERID_H

/*
This is a part of the LiteStep Shell Source code.

Copyright (C) 1997-2002 The LiteStep Development Team
  
This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.
    
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
      
You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/ 
/****************************************************************************
****************************************************************************/
#ifndef __UTILITY_STRINGUTILITY_H
#define __UTILITY_STRINGUTILITY_H

#include <string>

//
// stringicmp
//
// provides case insensitive string comparison for std::map
//
struct stringicmp
{
    bool operator()(const std::string &s1, const std::string &s2) const
    {
        return (_stricmp(s1.c_str(), s2.c_str()) < 0);
    }
};


//
// stringcmp
//
// provides case string comparison for std::map
//
struct stringcmp
{
	bool operator()(const std::string &s1, const std::string &s2) const
	{
		return (strcmp(s1.c_str(), s2.c_str()) < 0);
	}
};


#endif // __UTILITY_STRINGUTILITY_H

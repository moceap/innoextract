/*
 * Copyright (C) 2012 Daniel Scharrer
 *
 * This software is provided 'as-is', without any express or implied
 * warranty.  In no event will the author(s) be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 */

#ifndef INNOEXTRACT_SETUP_FILENAME_MAP_HPP
#define INNOEXTRACT_SETUP_FILENAME_MAP_HPP

#include <string>
#include <map>
#include <boost/filesystem/path.hpp>

namespace setup {

class filename_map : public std::map<std::string, std::string> {
	
	const std::string & lookup(const std::string & key) const;
	
public:
	
	bool lowercase;
	
	filename_map() : lowercase(false) { }
	
	boost::filesystem::path convert(const std::string & name) const;
	
	void set_lowercase(bool enable) { lowercase = enable; }
	
};

} // namespace setup

#endif // INNOEXTRACT_SETUP_FILENAME_MAP_HPP